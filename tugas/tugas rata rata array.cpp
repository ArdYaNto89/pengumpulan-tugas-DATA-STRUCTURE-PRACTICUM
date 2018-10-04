#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int angka[10]={12,24,5,10,15,20,91,19,23,22};
	int jumlah=0,rata;
	//deklasrasi 
	cout<<"___________________"<<endl;
	cout<<"|MENCARI RATA-RATA| "<<endl;
	cout<<"___________________"<<endl;
for(int i=0;i<10;i++){
	cout<<"data baris ke-"<<i<<"="<<angka[i]<<endl;
}//perulangan pemasukkan deret angka pada array
jumlah=jumlah+angka[10];
rata=jumlah/10;
cout<<endl;
cout<<"rata-ratanya adalah"<<"="<<rata;//output
return 0;
}

