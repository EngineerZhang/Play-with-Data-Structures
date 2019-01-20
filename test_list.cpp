#include <iostream>
#include "ListNode.h"
using namespace std;

//ตÝน้
ListNode* removeElements(ListNode* head, int val) {
	if (head == NULL)
		return head;

	ListNode *ret = removeElements(head->next, val);
	if(head->_val == val)
		return ret;
	else
	{
		head->next = ret;
		return head;
	}
}


int main()
{
	//1->2->6->3->4->5->6
	int array[] = {1, 2, 6, 3, 4, 5, 6};

	ListNode *list = new ListNode(array, sizeof(array)/sizeof(array[0]));
	list->printList();

	list = removeElements(list, 6);
	list->printList();
	return 0;
}