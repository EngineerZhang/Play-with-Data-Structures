#include <iostream>
#include <assert.h>
using namespace std;

class Sum
{
public:
	int sum(int *array, int len)
	{
		assert(array && len > 0);

		return _sum(array, 0, len);
	}


private:
	int _sum(int *array, int l, int len)
	{
		if(l == len)
			return 0;

		return array[l]+_sum(array, l+1, len);
	}
};


int main()
{
	int array[] = {1,2,3};
	Sum s;
	int ret = s.sum(array, sizeof(array)/sizeof(array[0]));

	cout<<ret<<endl;
	return 0;
}