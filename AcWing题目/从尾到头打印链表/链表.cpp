# include <iostream>
# include <vector>
using namespace std;

struct ListNode {  //����ṹ��
	int val; //������
	ListNode* next; //ָ����
};

void createList(ListNode* head) {  //��������

	ListNode* p = head; //��������p ��������headʹ��ͬһ���ڴ�

	for (int i = 2; i < 5; ++i) {

		ListNode* newHead = new ListNode; //����һ���½ڵ�newHead ���ҽ���newHead1
		newHead->val = i; //newHead1��ֵ2
		newHead->next = NULL; //ָ����ָ���
		p->next = newHead; //p ��ָ�������newHead�� ��ʱhead������newHead�ĵ�ַ��
		p = newHead; // p ��newHead1����һ���ڴ棬 ��head�Ͽ����Ƕ�p �Ĳ������Ƕ�newHead1�Ĳ���
		//Ȼ��һֱѭ�������ڵ�
	}
}

int main() {

	ListNode* head = new ListNode; //�����׽ڵ�
	head->val = 1; //������ֵ1
	head->next = NULL; //ָ����ָ���
	createList(head); //���봴��������


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