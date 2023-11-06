// Iterative C++ program to print sums of all
// possible subsets.
#include <bits/stdc++.h>
using namespace std;
 
// Prints sums of all subsets of array
void subsetSums(long long nums[], long long n, long long k, long long a)
{
    // There are total 2^n subsets
    vector<long long> s = {0};//store the sums
         
        for (long long i = 0; i <n; i++) {
            const long long v = s.size();
            for (int t = 0; t < v; t++) {
                s.push_back(s[t] + nums[i]); //add this element with previous subsets
                // cout << "yay";
            }
        }
        // Print
        long long anss = 0;
        int kkk = s.size();
        for(int i=0;i<kkk;i++){
            //if (i < a){
                long long jjjj = pow(s[i],k);
                anss = anss%998244353 + jjjj%998244353;
                cout << i << " " << s[i] << " " << anss << endl;
            //}
        }

        cout << anss%998244353;
}
 
// Driver code
int main()
{
    long long n;
    long long k;
    cin >> n >> k;
    long long arr[n];
    long long a = n%998244353;

    for(long long i=0;i<n;i++) {
        long long x;
        cin >> x;
        arr[i] = x;
    }
 
    subsetSums(arr, n, k, a);
    return 0;
}
