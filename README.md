# Sorting-Cpp
//NPM           Nama
//1717051013    Singgih Jodi Prayoga
//1717051037    Wildan Mutaqin
//1717051051    Patar Martua Doli Siahaan

//SELECTION SORTING

#include<iostream>
using namespace std;


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
	
		for(b=a+1;b<=n;b++)
		{
			
			if(A[a]>A[b]){int temp;temp=A[a];A[a]=A[b];A[b]=temp;}
			
		}
		cout<<A[a]<<" ";
	}


cout<<"Dengan  bubble Sorting \n";
	for(a=1;a<=n;a++)
	{
		for(b=(a+1);b<=n;b++)
		{
			if(A[a]>A[b])
			{
				int temp;
				temp=A[a];
				A[a]=A[b];
				A[b]=temp;
			}
		}
		cout<<A[a]<<" ";
	}
