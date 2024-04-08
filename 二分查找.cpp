////数组法
//
////#include <iostream>
////#include <vector>
////using namespace std;
////class Bsearch1 {
////public:
////    int binarySearch1(int* arr, int target) {
////        int left = 0;
////        int right =sizeof(arr) - 1;
////        while (left <= right) {
////            int mid = left + (right - left) / 2;
////            if (arr[mid] == target) {
////                return mid;
////            }
////            if (target < arr[mid]) {
////                right = mid - 1;
////            }
////            if (target > arr[mid]) {
////                left = mid + 1;
////            }
////        }
////        return -1;
////    }
////};
////
////class Bsearch2 {
////public:
////    int ninarySearch2(int* arr, int target) {
////        int left = 0;
////        int right = sizeof(arr);
////        while (left < right) {
////            int mid = left + (right - left) / 2;
////            if (arr[mid] < target) {
////                left = mid + 1;
////            }
////            if (arr[mid] > target) {
////                right = mid;
////            }
////            if (arr[mid] == target) {
////                return mid;
////            }
////        }
////        return -1;
////    }
////};
////
////int main() {
////    int arr[] = { 1, 3, 4, 6, 8, 9, 12, 15 };
////    Bsearch1 p1;
////    cout << p1.binarySearch1(arr, 15) << endl;
////    Bsearch2 p2;
////   cout << p2.ninarySearch2(arr, 9) << endl;
////    return 0;
////}
//
//
////vector法
//#include <iostream>
//#include <vector>
//using namespace std;
//class Bsearch1 {
//public:
//    int binarySearch1(vector<int>& arr, int target) {
//        int left = 0;
//        int right = arr.size() - 1;
//        while (left <= right) {
//            int mid = left + (right - left) / 2;
//            if (arr[mid] == target) {
//                return mid;
//            }
//            if (target < arr[mid]) {
//                right = mid - 1;
//            }
//            if (target > arr[mid]) {
//                left = mid + 1;
//            }
//        }
//        return -1;
//    }
//};
//
//class Bsearch2 {
//public:
//    int ninarySearch2(vector<int>& arr, int target) {
//        int left = 0;
//        int right = arr.size();
//        while (left < right) {
//            int mid = left + (right - left) / 2;
//            if (arr[mid] < target) {
//                left = mid + 1;
//            }
//            if (arr[mid] > target) {
//                right = mid;
//            }
//            if (arr[mid] == target) {
//                return mid;
//            }
//        }
//        return -1;
//    }
//};
//
//int main() {
//    vector<int> arr = { 1, 3, 4, 6, 8, 9, 12, 15 };
//    Bsearch1 p1;
//    cout << p1.binarySearch1(arr, 15) <<endl;
//    Bsearch2 p2;
//    cout << p2.ninarySearch2(arr, 9) << endl;
//    return 0;
//}