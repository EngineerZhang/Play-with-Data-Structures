#include <assert.h>
#include <iostream>
using namespace std;

//简单起见，val默认类型为 int
class ListNode
{
private:
	int _val;
	ListNode *next;

public:
	ListNode(int val)
	{
		this->_val = val;
		this->next = NULL;
	}

	ListNode(int *array, int len)
	{
		assert(array && len>0);

		this->_val = array[0];
		this->next = NULL;
		ListNode *cur = this;
		
		for(int i=1; i<len; i++)
		{
			ListNode *node = new ListNode(array[i]);
			cur->next = node;
			cur = cur->next;
		}
	}

	void printList()
	{
		ListNode *cur = this;
		while (cur)
		{
			cout<<cur->_val;

			if (cur->next)
				cout<<"->";
			else
				cout<<endl;

			cur = cur->next;
		}
	}

	friend ListNode* removeElements(ListNode* head, int val);
};