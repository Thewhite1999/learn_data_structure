#ifndef LIST_LIST_H_
#define LIST_LIST_H_
#include <iostream>
#include <vector>
using namespace std;

class Node {
 public:
  int val = 0;
  Node* next = nullptr;
};

// 用来打印链表
void print_list(Node* p);

// 删除p第一个节点（注意要delete掉），如果p是空指针，返回空指针
Node* remove_front(Node* p);

// 删除p最后一个节点（注意要delete掉），如果p是空指针，返回空指针
Node* remove_back(Node* p);

// 检查链表p的元素是否和vals里面的元素一一相等，注意链表大小不等也是不相等
// 这个函数可以用来当做后面函数的测试函数
bool list_check(Node* p, const std::vector<int>& vals);

// 使用vals 创建一个链表，如果vals为空，返回空指针nullptr
Node* create_list(const std::vector<int>& vals);

// 创建一个num个节点，节点值都为val的链表
Node* create_list(int num, int val);

// delete整个链表
void delete_list(Node* p);

// 在p尾部添加一个val 为 val的节点, 如果p是空指针，返回空指针
Node* list_push_back(Node* p, int val);

// 在p头部添加一个val为val的节点，返回新的头部,如果p是空指针，返回空指针
Node* list_push_front(Node* p, int val);

// 在链表中查找，是否有值为val的节点，没有返回false
// 如果p是空指针，返回false
bool find_list(Node* p, int val);

// 在链表中查找，是否有值为val的节点，如果有找到并删除它（自己画个图模拟一下，注意删除的时候要保证链表不能断开了），然后返回true，没有返回false
// 如果p是空指针，返回false
bool find_and_remove_list(Node* p, int val);

int list_size(Node* p);

void copy_list_to_vec(Node* p, std::vector<int>& vals);

// 反转链表
// 如果p是空指针，返回nullptr
/*Node* reverse_list(Node* p) {
  std::vector<int> vals;
  copy_list_to_vec(p, vals);
  for (int i = vals.size() - 1, auto tmp = p; i >= 0; --i, tmp = tmp->next)
    tmp->val = vals[i];
  return p;
}*/

Node* reverse_list(Node* p);

class Node_dou {
 public:
  int val = 0;
  Node_dou* next = nullptr;
  Node_dou* pre = nullptr;
};
void print_list(Node_dou* p);

// 检查链表p的元素是否和vals里面的元素一一相等，注意链表大小不等也是不相等
// 这个函数可以用来当做后面函数的测试函数
bool list_check(Node_dou* p, const std::vector<int>& vals);

// 使用vals 创建一个链表，如果vals为空，返回空指针nullptr
Node_dou* create_double_list(const std::vector<int>& vals);

Node_dou* remove_front(Node_dou* p);
Node_dou* remove_back(Node_dou* p);

// 创建一个num个节点，节点值都为val的链表
Node_dou* create_double_list(int num, int val);

// delete整个链表
void delete_list(Node_dou* p);

// 在链表中查找，是否有值为val的节点，没有返回false
// 如果p是空指针，返回false
bool find_list(Node_dou* p, int val);

// 在链表中查找，是否有值为val的节点，如果有找到并删除它（自己画个图模拟一下，注意删除的时候要保证链表不能断开了），然后返回true，没有返回false
// 如果p是空指针，返回false
bool find_and_remove_list(Node_dou* p, int val);

int list_size(Node_dou* p);

void copy_list_to_vec(Node_dou* p, std::vector<int>& vals);

// 反转链表
// 如果p是空指针，返回nullptr
Node_dou* reverse_list(Node_dou* p);
#endif