                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Different Differences
Problem link : https://codeforces.com/contest/1772/problem/C
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve()
{
    int k,n;
    cin>>k>>n;
    int diff=1, j=1;
    for(int i=1; i<=k; i++)
    {
        cout<<j<<" ";
        if(n-(j+diff)>=(k-(i+1)))
        {
            j+=diff;
            diff++;
        }
        else{
            j++;
        }
    }
    cout<<endl;
}


int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH