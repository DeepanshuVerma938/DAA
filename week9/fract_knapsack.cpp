#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>


bool compare(pii p1, pii p2)
{
    double v1 = (double) p1.first/p1.second;
    double v2 = (double) p2.first/p2.second;

    return v1>v2;
}

int main()
{
    int n; 
    cin >> n;

    vii a(n);
    for(int i=0;i<n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    int w;
    cin >> w;

    sort(a.begin(),a.end(),compare);
    int ans=0;
    
    for(int i=0;i<n; i++)
    {
        if(w >=a[i].second)
        {
            ans += a[i].first;
            w -= a[i].second;
            continue;
        }
        double vw =(double) a[i].first/a[i].second;
        ans += vw * w;
        break;
    }
    cout << ans << endl;
    return 0;
}