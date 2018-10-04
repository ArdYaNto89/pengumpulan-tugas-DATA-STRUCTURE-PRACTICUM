#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string a,b;//dekalarasi variabel
    cout<<"  KATA-KATA BERBENTUK SEGITIGA SIKU-SIKU TERBALIK "<<endl;
    cout<<"_________________________________________________________"<<endl;
    up:
    cout<<"Masukkan kata-kata"<<"="; cin>>a;
    int i=a.length()-1;//mengganti karakter string menjadi int 
    for (i; i>=0; i--){//perulngan bersarang
        for(int j=0 ;j<=i; j++){
            cout<<a[j];//output dari hasil perulangan
        }
        cout<<endl;
    }
    cout<<"will you wanna try again ? (yes/no)"<<"="<<endl;//tawaran apakah ingin mencoba lagi
    cin>>b;
    if(b=="yes"){	goto up;}
    else {	cout<<"thank you ,you have tried my program";	}
    return 0;
}
