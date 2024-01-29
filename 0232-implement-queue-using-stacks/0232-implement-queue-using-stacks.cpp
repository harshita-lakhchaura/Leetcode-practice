class MyQueue {
public:
    stack<int>s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    void reverse(stack<int> &s)
    {
	if(s.empty()) return;
	int x=s.top();
	s.pop();
	reverse(s);
	insert_at_bottom(x,s);
    }
    void insert_at_bottom(int x, stack<int> &s)
{
	if(s.empty())
	{
		s.push(x);
		return;
	}
	int temp=s.top();
	s.pop();
	insert_at_bottom(x,s);
	s.push(temp);
}
    
    int pop() {
        reverse(s);
        int a=s.top();
        s.pop();
        reverse(s);
        return a;
    }
    
    int peek() {
        reverse(s);
        int a=s.top();
        reverse(s);
        return a;
    }
    
    bool empty() {
        if(s.size()==0)
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */