class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int l = 0, m = 0, h = nums.size() - 1;
        while (m <= h)
        {
            if (nums[m] == 0)
            {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1)
            {
                m++;
            }
            else
            {
                swap(nums[m], nums[h]);
                h--;
            }
        }
        for (auto value : nums)
        {
            cout << value;
        }
    }
};

/*we use three pointer approach which is l as low for all 0's  ,  m as mid for all 1's  and  h as high for all
2's    .... here we start from l=0,m=0 and   h=lastindex-1   if first value is equal to zero we will swap it from
high index value..... and increment the l and m by one... then move as so on and then if value at m idex is equal to
one just increment the m value as you want all 1's in middle then if high value is equal to 2 than swap it with low */