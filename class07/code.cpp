#include <iostream>
#include <vector>
using namespace std;

// What is SubArray?
/* A subarray is a contiguous part of an array.
For example, if we have an array [1, 2, 3, 4],
then the subarrays can be [1], [2], [3], [4], [1, 2], [2, 3], [3, 4], [1, 2, 3], [2, 3, 4], and [1, 2, 3, 4].
*/

int main()
{
    // Maximum SubArray Sum using Brute Force.
    const int n = 5;
    int arr[n] = {1, 3, 4, 5, 7};
    int ans = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int subArraySum = 0;
        for (int end = st; end < n; end++)
        {
            subArraySum += arr[end];
        }
        ans = max(ans, subArraySum);
    }
    cout << "Ans for max SubArray Sum: " << ans << endl;

    return 0;
}