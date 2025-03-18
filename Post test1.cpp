#include <iostream>
#include <string>
using namespace std;




int main(){
    string nama,nama_bensin;
    int harga,pilih;
    int liter;
    double total;
	
	
	cout<<"========== Pertamina ==========="<<endl;
	cout<<"1.\t pertalite : rp.7000"<<endl;
	cout<<"2.\t pertamax : rp.9000"<<endl;
	cout<<"================================"<<endl;
	cout<<"pilih jenis bensin: "; cin>>pilih;
	cout<<endl;
	
	if(pilih == 1){
		harga = 7000;
		nama_bensin = "pertalite";
		cout<<"masukkan nama pelanggan: ";	cin>>nama;
	    cout<<"masukkan jumlah liter: ";
	    cin>>liter;
	    cout<<endl;
	    total = harga * liter;
	}
	else if(pilih == 2){
		harga = 9000;
		
		nama_bensin = "pertamax";
		cout<<"masukkan nama pelanggan: ";
		 cin>>nama;
	cout<<"masukkan jumlah liter: ";
	cin>>liter;
	cout<<endl;
	total = harga * liter;
	}
	else {
		cout<<"tidak ada"<<endl;
	}

	
	
	
	
	cout<<"=========================="<<endl;
	cout<<"nama \t\t: "<<nama<<endl;
	cout<<"jenis bensin\t: "<<nama_bensin<<endl;
	cout<<"total liter\t: "<<liter<<endl;
	cout<<"total harga\t: "<<total<<endl;
	cout<<"=========================="<<endl;
	
	
}
