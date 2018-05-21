# Sorting-Cpp
// NPM          Nama
//1717051013    Singgih Jodi Prayoga
//1717051037    Wildan Mutaqin
//1717051051    Patar Martua Doli Siahaan


//Selection Sorting
//Bubble Sorting
//Merge Sorting


#include<iostream>
using namespace std;


int main ()
{ //selection sort
	int A[100];
	int a,b,n,head;
	cout<<"input batas :";
	cin>>n;
	
	for( a=1;a<=n;a++)
	{
		cout<<"A["<<a<<"] = ";
		cin>>A[a];
	}
	
	cout<<"sebelum sorting  \n";
	for( a=1;a<=n;a++)
	{
	
		cout<<A[a]<<" ";
	}
	
	cout<<"\n";
	cout<<"sesudah sorting \n";
	for(a=1;a<=n;a++)
	{
		head=a;
		for(b=a+1;b<=n;b++)
		{
			if (A[b]<A[head]) head=b;
			if(head!=a){int temp;temp=A[a];A[a]=A[head];A[head]=temp;}
			
		}
		cout<<A[a]<<" ";
	}
