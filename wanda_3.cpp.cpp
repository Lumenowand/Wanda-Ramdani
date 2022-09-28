#include <iostream>
using namespace std;
int main(){
  float l, r;
  const float phi = 3.14;
  cout << "=================================\n";
  cout << "Rumus Menghitung Luas Lingkaran\n";
  cout << "=================================\n";
  cout << "Masukkan jari-jari lingkaran: ";
  cin >> r;
  l = phi*r*r;
  cout << "Luas Lingkaran = "<< l << endl;
  return 0;
}
