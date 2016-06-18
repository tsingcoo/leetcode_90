//
//  main.cpp
//  leetcode_90
//
//  Created by 王青龙 on 6/18/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#include "Header.h"


int main(int argc, const char * argv[]) {

    Solution s;

    vector<int> nums{1,2,2};

    vector<vector<int>> res=s.subsetsWithDup(nums);

    for (int i=0; i<res.size(); ++i) {
        for (int j=0; j<res[i].size(); ++j) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
