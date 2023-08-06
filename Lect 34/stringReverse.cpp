////Double Pointer
#include<iostream>
using namespace std;
//void reverseString(string& ch,int i,int j)
//{
//	//base case
//	cout<<"Call received for "<< ch <<endl; 
//    if(i>j)
//        return;
//    
//    swap(ch[i],ch[j]);
//    i++;
//    j--;
//    
//    //recursive call
//    reverseString(ch,i,j);
//}
//int main()
//{
//    string ch = "abvcde";
//    reverseString(ch,0,ch.length()-1);
//    cout<<endl<<ch<<endl;
//}
//

//Single Pointer
//void reverseString(string& ch,int i)
//{
//	int n = ch.length();
//	
//	if(i>(n+1)/2)
//		return;
//	
//	swap(ch[i],ch[n-1-i]);
//	i++;
//	reverseString(ch,i+1);
//}
//int main()
//{
//    string ch = "abvcde";
//    reverseString(ch,0);
//    cout<<endl<<ch<<endl;
//}



//#include<iostream>
//using namespace std;
//void reverse(string& str,int i,int j)
//{
//	if(i>j)
//		return;
//	
//	swap(str[i],str[j]);
//	i++;
//	j--;
//	
//	reverse(str,i,j);
//}
//int main()
//{
//	string str = "aftab";
//	int n = str.length();
//	reverse(str,0,n-1);
//	cout<<str<<endl;
//}



//single pointer

//#include<iostream>
//using namespace std;
//
void reverse(string& str,int i)
{
	int n = str.length();
	
	if(i>(n+1)/2)
		return;
	
	swap(str[i],str[n-1-i]);
	i++;
	
	reverse(str,i+1);	
}

int main()
{
	string str = "aabb";
	reverse(str,0);
	cout<<str<<endl;
}






























