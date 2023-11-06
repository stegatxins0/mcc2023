#include <bits/stdc++.h>
using namespace std;
 
// Printing all the elements using <<
template <typename S> ostream& operator<<(ostream& os, const vector<S>& vector) {
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

int atMostSum(int arr[], int n, int k)
{
	int result = INT_MIN;
    vector<int> v(0);

	for (int i = 0; i < n; i++) {
		int sum = 0;

		for (int j = i; j < n; j++) {
			sum += arr[j];
            v.push_back(arr[j]);

			if (sum <= k) {
				result = max(result, (j - i + 1));
                // cout << result << " ";
			}
			else {
				break;
			}

    // cout << arr << endl;
		}
	}

    // cout << v << endl;
	return result;
}

 
int main()
{
    // vector<int> arr = { 1, 2, 3 };
    int n, k;
    cin >> n >> k;
    vector<int> arr(0);
    int l = n-k;
    for (int i=0;i<l;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort( arr.begin(), arr.end() );
    arr.erase( unique( arr.begin(), arr.end() ), arr.end() );

    vector<int> di(0);
    int sz = arr.size();
    for (int j=0;j < sz-1;j++){
        di.push_back(arr[j+1]-arr[j]-1);
    }


    int narr[sz-1];
    copy(di.begin(),di.end(),narr);

    int la= atMostSum(narr, sz-1, k);
    cout << la + k + 1; // printSubArrays(di, 0, 0, la, k+1);
}
