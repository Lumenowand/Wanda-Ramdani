#include <iostream>
using namespace std;
int main(){
	cout<<"Rumus Sederhana"<<endl;
	cout<<"Masukan Kehadiran = ";
	int kehadiran;
	cin>>kehadiran;
	cout<<"Masukan Tugas = ";
	int tugas;
	cin>>tugas;
	cout<<"Masukan UTS = ";
	int uts;
	cin>>uts;
	cout<<"Masukan UAS = ";
	int uas;
	cin>>uas;
	int hasil;
	hasil=(kehadiran+tugas+uts+uas)/4;
	cout<<"Hasil Nilai = "<<hasil;
}
