#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<long long,long long> &a,
              const pair<long long,long long> &b)
{
    return (a.second < b.second);
}

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

int main() {

    int n, m;
    long long ans=0;
    vector<pair<long long,long long>> v(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back(make_pair(a+b,a+b+c+d));
        //cout << a + b << " " << v[i].first << endl;
    }

    // cout << v.size() << endl;
    vector<pair<long long,long long>> w = v;


    // case 1: m - 1 highest a+b, + outside highest abcd

    // sort(v.begin(), v.end(), sortbysec);
    //sort(v.begin(), v.end(), greater<int>());
    // std::sort(v.begin(), v.end(), std::greater<long long>());

    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    sort(v.rbegin(), v.rend());

    for (int j = 0; j < m - 1; j++) {
        ans = ans + v[0].first;
        cout << ans << v[0].first << endl;
        v.erase(v.begin());
    }
    sort(v.rbegin(), v.rend(), sortbysec);
    ans = ans + v[0].second;

    // case 2: highest a+b+c+d among highest a+b
    
    long long ans2=0, highest = 0;

    std::sort(w.begin(), w.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    sort(w.rbegin(), w.rend());
    for (int k = 0; k < m; k++) {
        ans2 = ans2 + w[0].first;
        long long aam = w[0].second - w[0].first;
        if (aam > highest){
            highest = aam;
        }

        w.erase(w.begin());
    }

    ans2 = ans2 + highest;

    // cout << ans << " " << ans2 << endl;
    if (ans > ans2) {cout << ans;} else {cout << ans2;}

    

}

