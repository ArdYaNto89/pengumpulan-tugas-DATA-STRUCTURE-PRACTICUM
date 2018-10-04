#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	int i, angka;
	float a[100], b, totang, akpang[i], c;//deklarasi
	cout<<"------------------"<<endl;
	cout<<"|STANDAR DEVIASI |"<<endl;
	cout<<"------------------"<<endl;
	cout<< "Masukkan angka  =";cin>>angka;
	for(i=0;i<angka;i++){ //melakukan perulangan ,sesuai dengan jumlah angka yang di input
		cout<<"angka ke-" <<i+1<<" : ";cin>>a[i];
		b=b+a[i];
		akpang[i]=pow(a[i],2);
		totang=totang+akpang[i];
	}
	c=pow(b,2);
	cout<<"hasil = "<<sqrt((angka*totang-c)/(angka*(angka-1)))<<endl;//output
	return 0;
}
