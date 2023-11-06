#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, higha=999999999;
    vector<pair<int,int>> v(0);
    cin >> n >> k;

    for(int i=0;i<n;i++) {
        int h, l;
        cin >> h >> l;
        v.push_back(make_pair(h,l));
    }

    for(int j=1;j<=n;j++) {
        int l1=0, l2=0, h1=0, h2=0, cu=0 ;
        while (j > cu){
            l1 = l1 + v[cu].second;
            if (v[cu].first > h1){
                h1 = v[cu].first;
            }
            cu++;
            //cout << l2 << " " << h2 << endl;
        }
        while (cu <= n){
            l2 = l2 + v[cu].second;
            if (v[cu].first > h2){
                h2 = v[cu].first;
            }
            cu++;
            // cout << l2 << " " << h2 << endl;
        }
        //cout << h1 << " " << l1 << " " << h2 << " " << l2 << endl;
        int area = (h1*l1) + (h2*l2);
        if (area < higha){higha = area;}
    }
    cout << higha << endl;

}
