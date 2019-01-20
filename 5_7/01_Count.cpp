#include <iostream>
#include <assert.h>
#include "ListNode.h"
using namespace std;

/*
 Given a list and an int, return the number of times that int occurs
 in the list.
*/
int Count(ListNode* head, int searchFor) {
	assert(head);

	int ret = 0;
	ListNode *cur = head;
	while (cur != NULL)
	{
		if (cur->_val == searchFor)
			ret++;
		cur = cur->next;
	}

	return ret;
}

int main01()
{
	int array[] = {1, 2, 6, 3, 4, 5, 6};

	ListNode *list = new ListNode(array, sizeof(array)/sizeof(array[0]));

	int ret = Count(list, 6);
	cout<<ret<<endl;

	return 0;
}