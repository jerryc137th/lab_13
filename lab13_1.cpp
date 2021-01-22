#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T r;
	for(int i=1;i<N;i++){
		for(int a = 0;a<i;a++)
			if(d[a]<d[i]){
				r = d[a];
				d[a] = d[i];
				d[i] = r;
			}
		cout<<"Pass "<<i<<":";
		for(int q=0;q<N;q++) cout<<d[q]<<" ";
		cout<<"\n";
	}		
}
 
int main(){
	float a[10] = {69.9,0.25,0.5,1.34,2.1,0,4.8,88.36,11.01,41.25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

