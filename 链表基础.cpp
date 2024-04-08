//#include <iostream>
//struct ListNode {
//    int val; // 节点上存储的元素
//    ListNode* next; // 指向下一节点的指针
//
//    // 节点的构造函数
//    ListNode(int x) : val(x), next(nullptr) {}// 节点的构造函数
//    ListNode() : val(0), next(nullptr) {} // 默认构造函数
//};
//
//int main() {
//    //// 初始化节点
//    //ListNode* head = new ListNode(5); // 使用构造函数初始化节点
//
//    // 默认构造初始化节点
//    ListNode* headDefault = new ListNode(); // 使用默认构造函数初始化节点
//    headDefault->val = 5;
//
//    // 链表的基本操作
//    ListNode* second = new ListNode(10);
//    headDefault->next = second; // 将second节点链接到head节点后面
//
//    // 遍历链表
//    ListNode* current = headDefault; // 初始化current指针指向head节点
//    while (current != nullptr) { // 当遍历到最后一个节点时，current指针为nullptr
//        std::cout << current->val << " "; // 输出当前节点的值
//        current = current->next; // 移动到下一个节点
//    }
//
//    delete headDefault; // 释放动态分配的节点内存
//    delete second;
//
//    return 0;
//}
