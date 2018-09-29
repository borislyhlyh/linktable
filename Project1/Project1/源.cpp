#include<iostream>
using namespace std;

template<typename T>

struct linktable
{
public :
	T value;
	linktable *next;
	//linktable(T a);
};
/*
template<typename T>
linktable<T>::linktable(T a)
{
	value = a;
}
*/

int main()
{
	linktable<int> *head=NULL;
	linktable<int> *current=NULL;
	linktable<int> *last=NULL;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		if (head != NULL)
		{
			current = new linktable<int>;
			current->value = a[i];
			last->next = current;
			last = current;
			if (i == 9) current->next = head;
		}
		else
		{
			head = new linktable<int>;
			head->value = a[i];
			last = head;
		}
	}
	current = head;
	while(current->next!=current)
	{
		for (int i = 1; i <3; i++)
		{
			last = current;
			current = current->next;
			//last = current;
		}
		cout << " out is " << current->value<< endl;
		last->next = current->next;
	}
	
    
	system("pause");
	//return 0;

}