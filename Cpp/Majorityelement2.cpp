vector<int> majorityElement(vector<int>& nums) {
        int ele_count1 = 0, ele_count2 = 0,  ele_1 = 0 , ele_2 = 0, n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(ele_1 == nums[i]) ele_count1++;
            else if(ele_2 == nums[i]) ele_count2++;
            else if(ele_count1 == 0)
            {
                ele_1 = nums[i];
                ele_count1 = 1;
            }
            else if(ele_count2 == 0)
            {
                ele_2 = nums[i];
                ele_count2 = 1;
            }
            else
            {
                ele_count1 -= 1;
                ele_count2 -= 1;
            }
        }
        
        ele_count1 = 0, ele_count2 = 0;
        for(auto x: nums)
        {
            if(x == ele_1) ele_count1++;
            else if(x == ele_2) ele_count2++;
        }
        
        vector<int> result;
        
        if(ele_count1 > n/3) result.push_back(ele_1);
        if(ele_count2 > n/3) result.push_back(ele_2);
        
        return result;
    }
