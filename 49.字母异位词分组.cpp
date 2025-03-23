/*
* @lc app=leetcode.cn id=49 lang=cpp
*
* [49] 字母异位词分组
*/

// @lc code=start
class Solution {
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string& str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);

        }
        vector<vector<string>> answer;
        int line = 0;
        for (auto i = mp.begin();i != mp.end();++i) {
            // answer[line].emplace_back(i->second);
            // 直接将键对应的值向量添加到结果向量中,易错
            answer.push_back(i->second);
            ++line;
        }
        return answer;
    }
};
// @lc code=end

