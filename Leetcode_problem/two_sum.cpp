#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> ret;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;j<nums.size();j++)
        {
            if(nums[j]+nums[j+1]==target)
            {
                ret.push_back(i);
                ret.push_back(j);
                return ret;
            }
        }
    }    
    return ret;    
}

int main()
{
    int target;
    vector<int> nums;
    vector<int> ans;
    vector<int> rt;
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    cin>>target;
    ans=twoSum(nums,target);
    

}