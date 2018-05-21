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
	int A[4] = {3,1,4,2};
	mergeSort(A,0,4);
	cetak(A);

}
