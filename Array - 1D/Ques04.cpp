https : // www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
        class Solution
{
public:
    void rotate(vector<int> &arr)
    {
        // code here
        int n = arr.size() - 1; // 5 - 1==4
        int temp = arr[n];
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
};