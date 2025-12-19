// #include <iostream>
// using namespace std;

// int main() {
//   string nama;
//   string NPM;
//   int umur;
  
//   cin >> nama;
//   cin >> NPM;
//   cin >> umur;
  
//   cout << "nama " << nama << endl;
//   cout << "NPM " << NPM << endl;
//   cout << "umur " << umur << endl;
  
//   return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//   int a = 2;
//   int b = 3;
//   int c = a + b;
  
//   cout << "Nilai a : " << a << endl;
//   cout << "Nilai b : " << b << endl;
//   cout << "Nilai c : " << c << endl;
  
//   a = a = b; // sama dengan a += b
  
//   cout << "Nilai a setelah (a = a + b) : " << a << endl;
  
//   return 0
// }


#include <iostream>
using namespace std;

int main () {
  int angka1, angka2;
  char operasi;
  
  cout << "Masukkan angka pertama : ";
  cin >> angka1;
  cout << "Masukkan angka kedua : ";
  cin >> angka2;
  cout << "Masukkan jenis operasi (+, -, *, /) : ";
  cin >> operasi;
  
  if (operasi = '+') {
    cout << "Hasil = " << angka1 + angka2;
  } else if (operasi = '-') { 
    cout << "Hasil = " << angka1 - angka2;
  } else if (operasi = '*') {
    cout << "Hasil = " << angka1 * angka2;
  } else if (operasi = '/') {
    if (angka2 0) {
      cout << "Hasil = " << angka1 / angka2;
    } else {
      cout << "Pembagi tidak boleh bernilai 0";
    }
  } else { 
    cout << "Operasi tidak valid";
  }
  
  return0;
}
