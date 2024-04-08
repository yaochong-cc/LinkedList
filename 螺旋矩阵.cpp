//#include<iostream>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> generateMatrix(int n) {
//		vector<vector<int>> res(n, vector<int>(n, 0));
//		int startx = 0; int starty = 0;
//		int loop = n / 2;
//		int mid = n / 2;
//		int count = 1;
//		int offset = 1;//控制每一条边遍历的长度，每次循环右边界收缩一位
//
//		int i, j;
//		while (loop--) {
//			i = startx;
//			j = starty;
//			//第一圈
//			for (j = starty; j < n - offset; j++) {
//				res[startx][j] = count++;
//			}//上行从左到右
//			for (i = startx; i < n - offset; i++) {
//				res[i][j] = count++;
//			}//右列从上到下
//			for (; j > starty; j--) {
//				res[i][j] = count++;
//			}//下行从右到左
//			for (; i > startx; i--) {
//				res[i][j] = count++;
//			}
//			//循环
//			startx++;
//			starty++;
//			offset++;
//
//		}
//		if (n % 2) {
//			res[mid][mid] = count;
//		}
//		return res;
//	}
//};
//
//int main() {
//	vector<vector<int>> res;
//	int n = 12;
//	Solution s;
//	res = s.generateMatrix(n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%5d ", res[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}