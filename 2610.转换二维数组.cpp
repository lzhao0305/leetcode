/*
 * @lc app=leetcode.cn id=2610 lang=cpp
 *
 * [2610] 转换二维数组
 */

 // @lc code=start
#include <vector>
;class Solution {
    public:
    std::vector<std::vector<int>> findMatrix(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        int line = 0;
        std::unordered_set<int> myset;

        for (int num : nums) {
            bool found = false;
            for (int i = 0; i < result.size(); ++i) {
                myset.clear();
                for (int val : result[i]) {
                    myset.insert(val);
                }
                if (myset.find(num) == myset.end()) {
                    result[i].push_back(num);
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back({ num });
            }
        }

        return result;
    }
};
// @lc code=end

