#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void subsets(vector<int> &nums, vector<int> &ans, int i)
    {
        if (i == nums.size())
        {
            for (auto &val : ans)
            {
                cout << val << " ";
            }
            cout << endl;
            return;
        }

        // included last element
        ans.push_back(nums[i]);
        subsets(nums, ans, i + 1);

        // excluded last element
        ans.pop_back(); // backtrack
        subsets(nums, ans, i + 1);
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    solution sol;
    sol.subsets(nums, ans, 0);

    return 0;
}