#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<vector<int>> &res, vector<int> &temp, vector<int> &nums, int j) {
    res.push_back(temp);
    for (int i = j; i < nums.size(); ++i) {
        temp.push_back(nums[i]);
        dfs(res, temp, nums, i + 1);
        temp.pop_back();
    }
}

vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> res;
    vector<int> temp;
    dfs(res, temp, nums, 0);
    return res;
}

int main() {
    return 0;
}

