# include <iostream>

using namespace std;

//����һ������
struct ListNode {
	int val;
	ListNode* next;
};

//��������
void greatList(ListNode* pHead) {
	ListNode* p = pHead;   //����һ����������
	for (int i = 1; i <= 10; i++) {
		ListNode* newHead = new ListNode;   //����һ��������
		newHead->val = i;                   //Ϊ������ֵ
		newHead->next = NULL;               //��������һ������Ϊ��
		p->next = newHead;                  //��������ĵ�ַ�� p 
		p = newHead;                        //�ٽ�p ����������һ���ַ
	}
}

//��ӡ����
void ShowList(ListNode* head) {
	ListNode* p = head;
	while (p != NULL) {
		cout << p->val << " ";
		p = p->next;
	}
}

int main() {

	ListNode* head = NULL;  //����һ������Ϊ��
	head = new ListNode;    //Ϊͷ�ڵ㴴���ڴ�
	head->val = 0;          //��ֵΪ 0
	head->next = NULL;      //��һ������Ϊ��
	greatList(head);        //����������
	ShowList(head);         //��ӡ������

	return 0;
}