////来自csdn
//
//#include <iostream>
//#include <stdexcept>//异常处理头文件
//
//using namespace std;
//
////节点类实现
//// 链表节点类
//template<typename T>
//class node
//{
//public:
//    node() : next(nullptr) {} //默认构造函数
//    node(T val) : data(val), next(nullptr) {}//构造函数
//private:
//    T data;
//    node* next;//指向下一个节点的指针
//    friend class list<T>;//声明友元类
//};
//
////链表类声明
//template<typename T>
//class list
//{
//public:
//    list():; // 构造函数
//    list(const list<T>& l); // 拷贝构造
//    list<T>& operator= (const list<T>& l);//错误写法？ // 拷贝赋值 //const 类型名& 变量名
//    void insert_node(int index, T val); // 在index处插入结点
//    void del_node(int index); // 删除index处结点
//    T get_node(int index); // 获取index处结点值
//    int find(int value); // 查找值value，找到返回index，找不到返回-1
//    int get_length(); // 获取链表长度
//    void push_back(T val); // 在链表尾部插入数据
//    ~list(); // 析构函数
//
//private:
//    node<T>* head_ptr; // 链表头指针
//    int length; // 链表长度
//};
////list<T> 是一个模板类，其中 <T> 是模板参数，
//// 表示该类可以存储任意类型的数据。
//// 这种使用尖括号（尖括号内为模板参数）的表示法被称为模板。
//// 在这里，T 可以被看作是一个占位符，当你实际使用这个类时，
//// 可以为 T 指定具体的数据类型，从而创建特定类型的链表。
//
//
//
//
////插入实现
//// 在index处插入结点
//template<typename T>
//void list<T>::insert_node(int index, T val)
//{
//   
//         //this->length 可以代表当前对象的 length 成员变量。                  
//        //在 C++ 中，index > length 与 index > this->length 通常具有相同的含义，但在某些情况下使用相对指针的方法可能更有优势。
//        //使用 this->length 来引用成员变量（在本例中是链表的长度）有以下一些优点：
//        //1.明确指出了这是一个成员变量：使用 this->    明确指示了这是一个类的成员变量     ，而不是一个局部变量或者其他作用域内的同名变量。
//        //2.在重载运算符或者模板类中使用更直观：在某些情况下，使用 this->可以减少歧义，特别是在重载某些运算符时。
//        //虽然在复杂的代码中显式使用 this->可以提供更清晰的语义，但在简单的情况下，无论是使用 this->length 还是 length，通常都不会有什么影响。
//    
//    if ((index > this->length)) { // 超过索引，最多可以插到当前结点的下一个结点，否则就是超过索引范围
//        throw runtime_error("index out of this list`s range");//throw 关键字抛出异常
//    }
//    else if ((this->head_ptr == nullptr) && (index == 0)) // 插在空链表的头
//    {
//        this->head_ptr = new node<T>;//创建一个新节点
//        this->head_ptr->next = nullptr;//新节点的next指针指向空
//        this->head_ptr->data = val; // 新节点的值
//        this->length++;//链表长度加1
//    }
//    else // 一般情况
//    {
//        node<T>* p1 = this->head_ptr;// 指向头结点
//        node<T>* p2 = new node<T>;//
//        for (int i = 0; i < index - 1; i++)
//        {
//            p1 = p1->next;//指针从头结点开始移动到index-1处
//        }
//        p2->data = val;
//        p2->next = p1->next;//新节点的next指针指向index-1处的next指针
//        p1->next = p2;//index-1处的next指针指向新节点
//        this->length++;
//    }
//}
////删除实现
//// 删除index处结点
//template<typename T>
//void list<T>::del_node(int index)
//{
//    node<T>* p1 = this->head_ptr;// 指向头结点
//    node<T>* p2 = nullptr;// 指向待删除节点的前一个节点
//    for (int i = 0; i < index - 1; i++)
//    {
//        p1 = p1->next;
//    }
//    p2 = p1->next->next;
//    delete p1->next;
//    p1->next = p2;
//    this->length--;
//}
////索引实现
//// 获取index处结点值
//template<typename T>
//T list<T>::get_node(int index)
//{
//    if (index > this->length - 1) // 超过索引
//    {
//        throw runtime_error("index out of this list`s range");
//    }
//
//    node<T>* p1 = this->head_ptr;
//    for (int i = 0; i < index; i++)
//    {
//        p1 = p1->next;
//    }
//
//    return p1->data;
//}
////查找实现
//// 查找值value，找到返回index，找不到返回-1
//template<typename T>
//int list<T>::find(int value)//双冒号::是作用域解析运算符（Scope Resolution Operator），用于标识使用成员或符号的作用域。
//                             //::表示find函数是属于list类的成员函数，
//                            //同时list是一个模板类，<T>表示该成员函数适用于特定类型T的实例。
//{
//    node<T>* p1 = this->head_ptr;
//    for (int index = 0; index < this->length; index++)
//    {
//        if (p1->data == value)
//        {
//            return index;
//        }
//        p1 = p1->next;
//    }
//
//    return -1;
//}
////析构函数
//// 析构函数
//template<typename T>
//list<T>::~list()
//{
//    // 清空链表
//    node<T>* p1 = this->head_ptr;
//    node<T>* p2 = p1->next;
//    while (p2 != nullptr)
//    {
//        delete p1;
//        p1 = p2;
//        p2 = p2->next;
//    }
//    delete p1;
//    this->length = 0;
//    this->head_ptr = nullptr;
//
//}
//int main() {
//    list<int> intList;
//    intList.push_back(10);
//    intList.push_back(20);
//    intList.insert_node(1, 15);
//
//    std::cout << "Finding value 15 at index: " << intList.find(15) << std::endl;
//    std::cout << "Getting value at index 2: " << intList.get_node(2) << std::endl;
//
//    return 0;
//}

