#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; ++i)
    {
        int idx = i;
        for(int j = i + 1; j < n; ++j)
        {
            if(arr[j] < arr[idx])
            {
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
    }

    for(int i = 0; i < n; ++i)
    {
        cout << arr[i];
    }
    return 0;
}
