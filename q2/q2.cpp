#include <bits/stdc++.h>

using namespace std;

bool sortrev(const pair<int,int> &a,  const pair<int,int> &b) 
{ 
  return (a.first > b.first); 
}

// Printing all the elements using <<
template <typename S> ostream& operator<<(ostream& os, const vector<S>& vector) {
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

int getIndex(const std::vector<int>& V, int val)
{
    auto iter = std::upper_bound(V.begin(), V.end(), val);
    if ( iter != V.begin())
       // return the index of the item before the found item
       return std::distance(V.begin(), std::prev(iter));

    // return the first item
    return 0;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, a, b, ans=0;
        vector<int> v(0);
        cin >> n >> a >> b;

        for (int j = 0; j < n; j++) {
            int z;
            cin >> z;
            v.push_back(z);
        }

        sort(v.begin(), v.end()); 

        while (a < b){
            if (v.size() == 0){
                ans = -1;
                break;
            }
            
            auto low = lower_bound(v.begin(), v.end(), a);
            int pos = low - v.begin() - 1;
            int tar = v[pos];
            if (a < tar) {
                ans = -1;
                break;
            }

            if (pos < 0) {
                ans = -1;
                break;
            }
            a = a + tar;
            ans++;
            v.erase(v.begin() + pos);
        }

        cout << ans << endl;
    }

}

