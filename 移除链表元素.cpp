////删除链表中等于给定值val的所有节点
////1.直接使用原来的链表进行删除操作（需要单独处理头结点）
////2.设置一个虚拟头节点再进行删除操作（所有节点按统一方式移除）
////
//#include <iostream>
//
//using namespace std;
//struct ListNode {
//	int val;//节点上储存的元素
//	ListNode* next;//指向下一节点的指针
//	ListNode(int x) :val(x), next(NULL) {}//节点的构造函数
//};
////直接
//class Solution {
//public:
//	ListNode* removeElement(ListNode* head, int val) {
//		//删除头结点
//		while (head != NULL && head->val == val) {
//			ListNode* tmp = head;//
//			head = head->next;//头结点移到下一位
//			delete tmp;
//		}
//		//删除非头结点
//		ListNode* cur = head;
//		while (cur != NULL && cur->next != NULL) {
//			if (cur->next->val == val) {
//				ListNode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;
//			}
//			else {
//				cur = cur->next;
//			}
//		}
//		return head;
//	}
//};
////虚拟头结点
//class Solution {
//public:
//	ListNode* removeElement(ListNode* head, int val) {
//		ListNode* dummy = new ListNode(0);
//		dummy->next = head;
//		ListNode* cur = dummy;
//		while (cur->next != NULL) {
//			if (cur->next->val == val) {
//				ListNode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;
//			}
//			else {
//				cur = cur->next;
//			}
//		}
//		head = dummy->next;//更新头结点//原来的head可能已经被删除了，所以不能直接返回head
//		                   //dummy在整个过程中不变，变得只是cur
//		delete dummy;
//		return head;
//	}
//};
//
//int main() {
//	Solution s;
//	ListNode* head = new ListNode(1);
//	head->next = new ListNode(2);	
//	head->next->next = new ListNode(6);
//	head->next->next->next = new ListNode(3);
//	head->next->next->next->next = new ListNode(4);
//	head->next->next->next->next->next = new ListNode(5);
//	head->next->next->next->next->next->next = new ListNode(6);
//	cout << "before remove: ";
//	ListNode* temp = head;  // 创建临时指针指向头节点
//	while (temp != NULL) {
//		cout << temp->val << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//
//	head = s.removeElement(head, 6);
//
//	cout << "after remove: ";
//	temp = head;  // 重新将临时指针指向头节点
//	while (temp != NULL) {
//		cout << temp->val << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//
//	return 0;
//}