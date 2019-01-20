#include <iostream>
#include <assert.h>
#include "ListNode.h"
using namespace std;


// Given a list and an index, return the data
// in the nth node of the list. The nodes are numbered from 0.
// Assert fails if the index is invalid (outside 0..lengh-1).
int GetNth(ListNode* head, int index) {
	assert(head);

	ListNode *cur = head;
	int i = 0;
	while (cur != NULL)
	{
		if(i == index)
			return cur->_val;

		i++;
		cur = cur->next;
	}
}

int main()
{
	int array[] = {1, 2, 6, 3, 4, 5, 6};

	ListNode *list = new ListNode(array, sizeof(array)/sizeof(array[0]));

	int ret = GetNth(list, 3);
	cout<<ret<<endl;
	return 0;
}