#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
////class Solution {//暴力
////public:
////	int minSubArrayLen(int s, vector<int>& nums) {
////		int res = INT32_MAX;
////		int sum = 0;
////		int sublen = 0;
////		for (int i = 0; i < nums.size(); i++) {
////			sum = 0;
////			for (int j = i; j < nums.size(); j++) {
////				sum += nums[j];
////				if (sum >= s) {
////					sublen = j - i + 1;
////					res = res < sublen ? res : sublen;//第一次改变了res的大小，之后的循环更新res的大小使res取得最小的结果
// 
////					break;
////				}
////			}
////
////		}
////		return res;
////	}
////};
//
//
////滑动窗口
//class Solution {
//public :
//	int minSubArrayLen(int s, vector<int>& nums) {
//		int res = INT32_MAX;
//		int sum = 0;
//		int i = 0;//滑动窗口的起始位置
//		int sublen = 0;
//		for (int j = 0; j < nums.size(); j++) {
//			sum += nums[j];
//			while (sum >= s) {
//				sublen = j - i + 1;
//				res = res < sublen ? res : sublen;//更新每一次循环的res
//				sum -= nums[i++];
//			}
//		}
//		return res == INT32_MAX ? 0 : res;//若循环结束res未被更新，说明不存在，返回0；
//	}
//};

//前缀和+二分查找
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        int ans = INT_MAX;
        vector<int> sums(n + 1, 0);
        // 为了方便计算，令 size = n + 1 
        // sums[0] = 0 意味着前 0 个元素的前缀和为 0
        // sums[1] = A[0] 前 1 个元素的前缀和为 A[0]
        // 以此类推
        for (int i = 1; i <= n; i++) {
            sums[i] = sums[i - 1] + nums[i - 1];
        }
        //lower_bound( )和upper_bound( )都是利用二分查找的方法在一个排好序的数组中进行查找的。
        //lower_bound( begin,end,num)：从数组的begin位置到end-1位置二分查找第一个       大于或等于num      的数字，
        // 找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。

        //upper_bound(begin, end, num)：从数组的begin位置到end - 1位置二分查找第一个    大于num    的数字，
        // 找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin, 得到找到数字在数组中的下标。
          
        for (int i = 1; i <= n; i++) {
            int target = s + sums[i - 1];
            auto bound = lower_bound(sums.begin(), sums.end(), target);//查找第一个大于等于target的值，返回一个迭代器


            if (bound != sums.end()) {
                ans = min(ans, static_cast<int>((bound - sums.begin()) - (i - 1)));//static_cast<type-id>(expression)
                                                                                    //将 expression 转换为 type-id 类型。static_cast 是静态类型转换，发生在编译期。
                                                                                   // 地址转int,返回的是target的值
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
int main() {
	Solution s;
	vector<int> nums = { 2, 3, 1, 2, 4, 3 };
	int s1 = 5;
	cout << s.minSubArrayLen(s1, nums) << endl;
	return 0;
}

