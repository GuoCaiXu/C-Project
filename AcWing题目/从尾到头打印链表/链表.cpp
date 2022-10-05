# include <iostream>
# include <vector>
using namespace std;

struct ListNode {  //链表结构体
	int val; //数据域
	ListNode* next; //指针域
};

void createList(ListNode* head) {  //创造链表

	ListNode* p = head; //创建链表p 并和链表head使用同一个内存

	for (int i = 2; i < 5; ++i) {

		ListNode* newHead = new ListNode; //创建一个新节点newHead 况且叫它newHead1
		newHead->val = i; //newHead1赋值2
		newHead->next = NULL; //指针域指向空
		p->next = newHead; //p 的指针域存入newHead， 这时head就有了newHead的地址了
		p = newHead; // p 和newHead1共用一块内存， 与head断开这是对p 的操作就是对newHead1的操作
		//然后一直循环创建节点
	}
}

int main() {

	ListNode* head = new ListNode; //创建首节点
	head->val = 1; //数据域赋值1
	head->next = NULL; //指针域指向空
	createList(head); //进入创建链表函数


	vector<int>a, b;

	for (; head->next != NULL; head = head->next)  a.push_back(head->val);

	while (a.size()){

		b.push_back(a.back());
	    a.pop_back();
	}

	for (auto i : b) {

		cout << i << " ";
	}
	cout << endl;

	return 0;
}