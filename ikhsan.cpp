#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputdra
	  2117051037
	  kelas B*/
	  
	// deklarasi variabel//
	string nama_pelanggan ;
	string alamat_rumah;
	string email_pelanggan;
	string nomor_telepon;
	
	cout<<"masukkan data dengan urutan nama pelanggan,alamat,email,dan nomor telepon"<<endl;
	cout<<"contoh :"<<endl;
	cout<<"ikhsan saputra"<<endl;
	cout<<"perumnas seputih jaya"<<endl;
	cout<<"ikhsansaputra2508@gmail.com"<<endl;
	cout<<"081272845983"<<endl;
	
    //input
    cout<<endl;
    cout<<"nama pelanggan  :";
	getline(cin,nama_pelanggan);
	cout<<"alamat rumah    :";
    getline(cin,alamat_rumah);
    cout<<"email pelanggan :";
    getline(cin,email_pelanggan);
	cout<<"nomor telepon   :";  
    getline(cin,nomor_telepon);
	
	//output//
	cout<<endl;
	cout<<"Nama Pelanggan  :"<<nama_pelanggan<<endl;
	cout<<"Alamat Rumah    :"<<alamat_rumah<<endl;
	cout<<"Email Pelanggan :"<<email_pelanggan<<endl;
	cout<<"Nomor Telepon   :"<<nomor_telepon<<endl;  
	
	return 0;
}
