#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b,ca=0,cb=0;
        cin >> n >> a >> b;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            ca++;
       
        }
        int ans=0;
        ans=((ca*a)+(cb*b));
        cout<<ans<<endl;
    }
    return 0;
}


