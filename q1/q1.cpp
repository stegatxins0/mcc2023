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

int main() {

    int n, k, f=0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < k; j++){
            if (x % 2 == 0) {
                x = x/2;
            } else if (x % 2 == 1) {
                x = 3*x+1;
            }
        }
        f = f+x;
    }

    cout << f;

}

