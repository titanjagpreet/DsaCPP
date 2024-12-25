#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int s = 12;

    vector<vector<int>> result = tripletSum(arr, s);
    for (auto triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}