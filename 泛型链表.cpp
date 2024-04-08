////#include <iostream>
////
////struct node {
////    int data;
////    node* next;
////
////    node(int data) : data(data), next(nullptr) {}//节点结构体的构造函数
////};
////
////int main() {//初始化
////    node* newNode = new node(7); //初始化一个节点，数据为7
////    std::cout << "New node address: " << newNode << std::endl;//打印节点地址
////    std::cout << "Node data: " << newNode->data << std::endl;//7
////    std::cout << "Next node: " << newNode->next << std::endl;//nullptr
////    delete newNode; // Clean up memory
////    return 0;
////}
////-----------------------------------------------------------------------------------------
//
//// 以下是泛型链表的实现代码
//#include <iostream>
//
//// 节点结构体模板
//template <class T>
//struct Node {
//    T data; // 存储节点数据的成员
//    Node* next; // 指向下一个节点的指针成员
//
//    Node(const T& data) : data(data), next(nullptr) {} // 节点的构造函数
//};
//
//// 泛型链表类
//template <class T>
//class LinkedList {
//private:
//    Node<T>* head; // 指向链表头节点的指针成员
//
//public:
//     LinkedList() : head(nullptr) {} // 链表类的构造函数，初始化头指针为空
//    // 注意：在构造函数中，初始化头指针为空，是为了避免在链表为空时，调用其成员函数时出现空指针异常。
//   
//
//    //析构函数用于在对象生命周期结束时执行一些清理操作。
//    // 对于链表中的节点和链表类对象，使用析构函数可以释放动态分配的内存，以避免内存泄漏。
//    ~LinkedList() { // 链表类的析构函数
//        Node<T>* current = head; // 从头节点开始
//        while (current != nullptr) { // 遍历链表
//            Node<T>* next = current->next; // 保存下一个节点的指针
//            delete current; // 释放当前节点内存
//            current = next; // 移动到下一个节点
//        }
//    }
//
//    void append(const T& data) { // 在链表尾部添加节点
//        Node<T>* newNode = new Node<T>(data); // 创建新的节点
//        if (head == nullptr) { // 若链表为空
//            head = newNode; // 新节点成为头节点
//        }
//        else {
//            Node<T>* current = head; // 遍历找到尾节点
//            while (current->next != nullptr) {
//                current = current->next;//指针后移
//            }
//            current->next = newNode; // 在尾节点后添加新节点
//        }
//    }
//
//    void printList() { // 打印链表内容
//        Node<T>* current = head; // 从头节点开始
//        while (current != nullptr) { // 遍历链表
//            std::cout << current->data << " -> "; // 输出当前节点的值
//            current = current->next; // 移动到下一个节点
//        }
//        std::cout << "nullptr" << std::endl; // 打印空指针表示链表结束
//    }
//};
//
//int main() {
//    // 使用链表存储整数
//    LinkedList<int> intList;
//    intList.append(5);//添加节点
//    intList.append(7);
//    intList.append(10);
//    intList.printList();
//
//    // 使用链表存储字符串
//    LinkedList<std::string> strList;
//    strList.append("Hello");
//    strList.append("World");
//    strList.printList();
//
//    return 0;
//}
