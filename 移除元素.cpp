//#include<iostream>
//#include <vector>
//using namespace std;
////暴力解法
//class Solution1 {
//public:
//	int removeElement1(vector<int>& nums, int val) {
//		int size = nums.size();
//		for (int i = 0; i < size; i++) {
//			if (nums[i] == val) {
//				for (int j = i + 1; j < size; j++) {
//					nums[j - 1] = nums[j];
//				}
//				i--;
//				size--;
//			}
//		}
//		return size;
//	}
//};
////双指针法
//// 快指针：寻找新数组的元素，新数组就是不含目标元素的数组
//// 慢指针：指向更新新数组的下标的位置
//////
////快慢指针
//class Solution2 {
//public:
//	int removeElement2(vector<int>& nums, int val) {
//		int size = nums.size();
//		int slowIndex = 0;
//		for (int fastIndex = 0; fastIndex < size; fastIndex++) {
//			if (val != nums[fastIndex]) {
//				nums[slowIndex++] = nums[fastIndex];
//			}
//		}
//		return slowIndex;
//	}
//};
////相向双指针-->把val全部移到右边
//// 3,3,4,3,3,5,8,9,3--》9 8 4 5 3 3 3 3
//class Solution3 {
//public:
//	int removeElement3(vector<int>& nums, int val) {
//		int size = nums.size();
//		int leftIndex = 0; int rightIndex = size - 1;
//		while (leftIndex <= rightIndex) {
//			while ( nums[leftIndex] != val) {
//				++leftIndex;
//			}
//			while ( nums[rightIndex] == val) {
//				--rightIndex;
//			}
//			if (leftIndex < rightIndex) {//left指向val,right指向非val的值
//				nums[leftIndex++] = nums[rightIndex--];
//			}
//		}
//		return leftIndex;
//	}
//};
////相向指针？？？
// //3,3,4,3,3,5,8,9,3-->
//class Solution5 {
//public:
//	int removeElement5(vector<int>& nums, int val) {
//		int left = 0;
//		int right = nums.size() - 1;
//		while (left <= right) {//left==right 时结束循环，出现一次val,right-1,若right未遇到val，则left遇到的val由right减去
//                               //若right遇到val，则可以将val全部移到右侧；
//			if (nums[left] == val) {
//				nums[left] = nums[right];
//				right--;
//			}
//			else {
//				// 这里兼容了right指针指向的值与val相等的情况
//				left++;
//			}
//		}
//		return left;
//	}
//};
////库函数
//class Solution4 {
//public:
//	int removeElement4(vector<int>& nums, int val) {
//		int size = nums.size();
//		for (int i = 0; i < size; i++) {
//			if (nums[i] == val) {
//				nums.erase(nums.begin() + i);
//				size--;
//				i--;
//			}
//		}
//		return size;
//	}
//};
//
//int main() {
//	vector<int> arr = { 3,3,4,3,3,5,8,9,3 };
//	/*Solution1 s1 ;
//	cout << s1.removeElement1(arr, 3) << endl;*/
//	/*Solution2 s2;
//	cout << s2.removeElement2(arr, 2) << endl;*/
//	Solution3 s3;
//	cout << s3.removeElement3(arr, 3) << endl;
//	/*Solution4 s4;
//	cout << s4.removeElement4(arr, 3) << endl;*/
//	/*Solution5 s5;
//	cout << s5.removeElement5(arr, 3) << endl;*/
//}
