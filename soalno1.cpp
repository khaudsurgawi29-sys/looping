#include <iostream>
using namespace std;
int main(){
string makanan[2]={"soto","rawon"};
int harga[2]={15000,20000};
int porsi[2];
int i;
int jumlah;
for(i=0;i<2;i++)
    {
cout<<"nama makananan"<<endl;
cout<<makanan[i]<<endl;
cout<<"harga"<<endl;
cout<<harga[i]<<endl;
cout<<"masukkan porsi"<<endl;
cin>>porsi[i];
        if(porsi[i]==2)
        {
            cout<<"Harga khusus"<<endl;
        }
        else{
            cout<<"Harga normal"<<endl;
        }
}
}
