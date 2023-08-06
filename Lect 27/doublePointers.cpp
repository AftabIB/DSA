#include<iostream>

using namespace std;

//void update(int **p)
//{
////	p = p + 1;
////	*p = *p + 1;
//	**p = **p + 1; 
//}
int main()
{
//	int a = 5;
//	int* p = &a;
//	int** ptr = &p;
	/*cout<<p<<endl<<endl;
	cout<<*p<<endl<<endl;
	cout<<&a<<endl<<endl;
	cout<<&p<<endl<<endl;
	cout<<*ptr<<endl<<endl;
	cout<<ptr<<endl<<endl;*/
//	cout<<**ptr<<endl;
//	cout<<endl;
//	cout<< a <<endl;
//	cout<< p <<endl;
//	cout<< ptr <<endl;
//	update(ptr);
//	cout<<endl;
//	cout<< a <<endl;
//	cout<< p <<endl;
//	cout<< ptr <<endl;


	int f = 8;
	int *p = &f;
	cout<<(*p)++<<endl;
	cout<<f<<endl;
}
