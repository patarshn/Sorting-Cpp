/**
 * 1717051013 - Singgih Jodi Prayoga
 * 1717051037 - Wildan Mutaqin
 * 1717051051 - Patar Martua Doli Siahaan
 * https://github.com/patarshn/Sorting-Cpp/edit/master/Sorting.cpp
**/

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

//bubbleSort(array,awal,akhir)
void mergeSort(int A[],int a,int b){
	if(b>a){
		int c = (a+b)/2;
		mergeSort(A,a,c);
		mergeSort(A,c+1,b);
		bubbleMerge(A,a,b);
		}
		}	


void cetak(int A[]){
	for(int i=0;A[i];i++){
		cout<<A[i]<<" ";
		}
	}


int main(){
	int A[4] = {3,1,4,2};
	mergeSort(A,0,4);
	cetak(A);

}
