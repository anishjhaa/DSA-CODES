https : // www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
        class Solution
{
public:
    vector<int> leaders(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        vector<int> ans;
        int leader = arr[n - 1]; // 2
        ans.push_back(leader);

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= leader) // 5 > 2 3> 5
            {
                leader = arr[i];       // 5
                ans.push_back(leader); // 5
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};