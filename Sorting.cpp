/**
 * 1717051013 - Singgih Jodi Prayoga
 * 1717051037 - Wildan Mutaqin
 * 1717051051 - Patar Martua Doli Siahaan
 * https://github.com/patarshn/Sorting-Cpp/edit/master/Sorting.cpp
**/
#include<iostream>
using namespace std;


int sizeOf(int A[]){
	int size = 0;
	for(int i=0;A[i];i++){
		size++;
		}
	return size;
	}

//Bubble Sorting
void bubbleSort(int *A){
	int n = sizeOf(A);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(A[j] < A[j+1]){
				int tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
				}
			}
		}
	}

//Selection Sorting
void selectSort(int *A){
	int n = sizeOf(A);
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(A[i] > A[j]){
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
				}
			}
		}
	}	

//bubbleMerge(array,awal,akhir)
void bubbleMerge(int A[],int a,int b){
	if(b>0){
	for(int i=a;i<b;i++){
		int loop = 0;
		for(int j=a;j<b-1;j++){
		if(A[j] > A[j+1]){
			int tmp = A[j];
			A[j] = A[j+1];
			A[j+1] = tmp;
			loop++;
			}	
		}
		if(loop == 0){
			break;}
		
		}
	}
}

void swapMerge(int A[],int a,int b,int c){
	int np = c-a+1;
	int pn = b-c;
	int Kiri[np+1], Kanan[pn+1];
	for(int i=0;i<np;i++){
		Kiri[i] = A[a+i];}
	for(int j=0;j<pn;j++){
		Kanan[j]= A[c+j+1];}
	int i=0,j=0,k=0;
	while (i!=np && j!=pn){
		if(Kiri[i] > Kanan[j]){
			A[a+k] = Kanan[j];
			j++;
			}
		else{
			A[a+k] = Kiri[i];
			i++;
			}
			k++;
		}
		
	while (i!=np){
		A[a+k] = Kiri[i];
		i++;
		k++;
		}
		
	while (j!=pn){
		A[a+k] = Kanan[j];
		j++;
		k++;
		}
	}

//selectMerge(array,awal,akhir)
void selectMerge(int A[],int a,int b){
	
	for(int i=a;i<b;i++){
		int min = i;
		for(int j=i+1;j<=b;j++){
			if(A[min] > A[j]){
				min = j;
				}
			}
		if(A[i] > A[min]){
			int tmp = A[i];
				A[i] = A[min];
				A[min] = tmp;
			}	
		}
	}

//bubbleSort(array,awal,akhir)
void mergeSort(int A[],int a,int b){
	if(b>a){
		int c = (a+b)/2;
		mergeSort(A,a,c);
		mergeSort(A,c+1,b);
		//bubbleMerge(A,a,b);
		//selectMerge(A,a,b);
		swapMerge(A,a,b,c);
	}
		}	


void cetak(int A[]){
	for(int i=0;A[i];i++){
		cout<<A[i]<<" ";
		}
	}


int main(){
	int A[8] = {9,7,5,4,8,1,10};
	mergeSort(A,0,6);
	cetak(A);
	cout<<endl;
	int B[5] = {1,6,2,3,7};
	selectSort(B);
	cetak(B);
	cout<<endl;
	int C[5] = {1051,1045,310,2708,12};
	bubbleSort(C);
	cetak(C);

}
