//
//  Header.h
//  leetcode_90
//
//  Created by 王青龙 on 6/18/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include<vector>
#include <iostream>
using namespace std;

class Solution{
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>> res(1,vector<int>());
        int n=0;
        for (int i=0; i<nums.size(); ++i) {
            int start=((i>=1)&&(nums[i]==nums[i-1])?n:0);
            n=(int)res.size();
            for (int j=start; j<n; ++j) {
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        return res;
    }
};

#endif /* Header_h */
