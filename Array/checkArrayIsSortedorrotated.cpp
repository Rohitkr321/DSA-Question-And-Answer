bool check(vector<int> &nums)
{
    int n = nums.size();//Array is sorted or rotaed means 1 or 0 pair exist where (i-1)index is bigger than i index.
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
            count++;
    }
    if (nums[n - 1] > nums[0])
        count++;
    return count <= 1;
}
