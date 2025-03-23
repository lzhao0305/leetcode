/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

 // @lc code=start
class Solution {
    public:
    bool isPalindrome(int x) {
        // 负数不是回文数
        if (x < 0) return false;

        std::vector<int> a1;
        // 将 x 的每一位数字存入 a1 中
        while (x > 0) {
            a1.push_back(x % 10);
            x /= 10;
        }

        std::vector<int> a2 = a1;
        // 反转 a2
        std::reverse(a2.begin(), a2.end());

        // 比较 a1 和 a2 是否相等
        return a1 == a2;
    }
};

//更优解在此：
// class Solution {
//     public:
//         bool isPalindrome(int x) {
//           long i,sum=0,num=x;
//           for(i=0;num>0;i++)
//           {
//             sum=sum*10+num%10;
//             num/=10;
//           }
//           if(sum==x)
//           return true;
//           else return false;
//         }
//     };

// @lc code=end

