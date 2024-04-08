//#include <iostream>
//#include<algorithm>
//#include <vector>
//using namespace std;
//class Solution2 {
//public:
//	vector<int> sortedSquares2(vector<int>& nums) {
//		for (int i = 0; i < nums.size(); i++) {
//			nums[i] *= nums[i];
//		}
//		sort(nums.begin(), nums.end());
//		return nums;
//	}
//};
// //双指针
//class Solution {
//public:
//	vector<int>sortedSquares(vector<int>& nums) {
//		int key = nums.size() - 1;
//		vector<int>res(nums.size());
//		for (int i = 0, j = nums.size() - 1; i <= j;) {
//			if (nums[i]*nums[i]<nums[j]*nums[j]) {
//				res[key--] = nums[j] * nums[j];
//				j--;
//			}
//			else {
//				res[key--] = nums[i] * nums[i];
//				i++;
//			}
//		}
//		return res;
//	}
//};
//
//int main() {
//	vector<int>arr= c
//	int size = arr.size();
//	Solution s;
//	vector<int>res=s.sortedSquares(arr);
//	/*Solution2 s2;
//	s2.sortedSquares2(arr);*/
//	for (int i = 0; i < size; i++) {
//		cout << res[i] << " ";
//	}
//	return 0;
//}