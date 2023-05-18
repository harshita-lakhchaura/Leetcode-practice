//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long int,long long int>ans;
    long long int mx=0,mn=1000000000001;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    ans=make_pair(mn,mx);
    return ans;
}