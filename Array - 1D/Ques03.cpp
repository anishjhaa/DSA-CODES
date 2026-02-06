https : // www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
        class Solution
{
public:
    bool isSorted(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        if (n == 1)
            return true;
        for (int i = 0; i < arr.size() - 2; i++)
        {
            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;
    }
};