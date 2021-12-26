#include<iostream>
using namespace std;

int main(){
    /*ikhsan saputra
	2117051037
	kelas B*/
	  
	//deklarasi variabel//  
    int i=0;
     double jumlah=0;
    double banyak_data;
    double bilangan_bilangan;
    double rata_rata;
    
    //input
    cout<<"Masukkan Jumlah Bilangan :" ; cin>>banyak_data ;
    
    //peruangan for
    for(i; i<banyak_data; i++){
    	cout<<"Masukkan Bilangan yang akan dihitung rata-ratanya :"; cin>>bilangan_bilangan;
    	jumlah+=bilangan_bilangan;
	}
  
   
    rata_rata=jumlah/banyak_data;
    
    //output
    cout<<endl;
    cout<<"Total Penjumlahan :"<<jumlah<<endl;
    cout<<"Rata-Rata         :"<<rata_rata<<endl;
    
    
    
    
    return 0;
	
	

}
