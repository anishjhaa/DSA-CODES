https : // leetcode.com/problems/rotate-array/
        class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        // while(k)
        // {
        //     int n = arr.size()-1;//5 - 1==4
        //     int temp = arr[n];
        //     for(int i = n - 1; i >= 0; i--)
        //     {
        //         arr[i + 1] = arr[i];
        //     }
        //     arr[0] = temp;
        //     k--;
        // }
        if (k == 0)
            return;
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, nums.size() - 1);
        reverse(nums.0, k);
        reverse(nums, k + 1, n - k);
    }
};