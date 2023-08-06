#include<iostream>

using namespace std;

void pattern1(int n)
{
	int num = 1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num = num + 1;
		}
		cout<<endl;
	}
}

int main()
{
	int t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		pattern1(n);
	}
}


//void printTriangle(int n) {
//        int space = 2*n-2;
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=i;j++){
//                cout<<j<<" ";
//            }
//            for(int j=0;j<space;j++){
//                cout<<"  ";
//            }
//            for(int j=i;j>0;j--){
//
//                cout<<j<<" ";
//            }
//            space-=2;
//            cout<<endl;
//        }
//    }
