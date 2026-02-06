https : // leetcode.com/problems/rearrange-array-elements-by-sign/
        class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        int j = 0;
        while (j < nums.size() / 2)
        {
            ans[2 * j] = pos[j];
            ans[2 * j + 1] = neg[j];
            j++;
        }
        return ans;
    }
};