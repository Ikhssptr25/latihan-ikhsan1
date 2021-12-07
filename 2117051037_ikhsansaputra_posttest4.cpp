#include<iostream>
using namespace std;

int main(){
    /*ikhsan saputra
	2117051037
	kelas B*/

    //deklarasi variabel
	int n;
	double jumlah=0;
	double hari,rata_rata,dalam_usd;
	
	//input
	cin>>hari;
	
	//array dan looping
	    for(n=0; n<hari; n++){
	    double pembelian[n];
	    cin>>pembelian[n];
	    jumlah+=pembelian[n];
	    
	}
	rata_rata=jumlah/hari;
	dalam_usd=jumlah*4000;
	
	//output
	cout<<"Rata-rata: "<<rata_rata<<" ETH"<<endl;
	cout<<"Total ETH: "<<jumlah<<" ETH"<<endl;
	cout<<"Dalam USD: $"<<dalam_usd<<endl;
	return 0;
	
}
	  
