#include <iostream>
using namespace std;

int main() {
  cout << "==== Operator aritmatika ====" << endl;
  cout << "1. 0 + 1 = " << 0 + 1 << endl;
  cout << "2. 7 - 1 " << 7 - 1 << endl;
  cout << "3. 2 * 2 = " << 2 * 2 << endl;
  cout << "4. 4 / 2 = " << 4 / 2 << endl;
  cout << "==== Operator aritmatika ====" << endl << endl;


  cout << "==== Operator aritmatika gabungan dengan penugasan ====" << endl;
  int a = 0,
    b = 7,
    c = 2,
    d = 4;

  a += 1;
  cout << "5. a = 0 -> a += 1 = " << a << endl;

  b -= 1;
  cout << "6. b = 7 -> b -= 1 = " << b << endl;

  c *= 2;
  cout << "7. c = 2 -> c *= 2 = " << c << endl;

  d /= 2;
  cout << "8. d = 4 -> d /= 2 = " << d << endl;
  cout << "==== Operator aritmatika gabungan dengan penugasan ====" << endl << endl;


  cout << "==== Operator increment ====" << endl;
  int e = 16,
    f = 16,
    g;

  g = e++;
  cout << "9. e = 16 -> e++ = " << e << endl;
  cout << "g = " << g << endl << endl;

  g = ++f;
  cout << "10. f = 16 -> ++f = " << f << endl;
  cout << "g = " << g << endl;
  cout << "==== Operator increment ====" << endl << endl;


  cout << "==== Operator relasi ====" << endl;
  int h = 16,
    i = 4,
    hasil_relasi;

  hasil_relasi =  h == i;
  cout <<  "11. 16 == 4 = " << hasil_relasi << endl;

  hasil_relasi = h != i;
  cout << "12. 16 != 4 = " << hasil_relasi << endl;

  hasil_relasi = h > i;
  cout << "13. 16 > 4 = " << hasil_relasi << endl;

  hasil_relasi = h < i;
  cout << "14. 16 < 4 = " << hasil_relasi << endl;

  hasil_relasi = g >= h;
  cout << "15. 16 >= 4 = " << hasil_relasi << endl;

  hasil_relasi = g <= h;
  cout << "16. 16 <= 4 = " << hasil_relasi << endl;
  cout << "==== Operator relasi ====" << endl << endl;


  cout << "==== Operator logika ====" << endl;
  int hasil_logika;

  hasil_logika = 1 && 0;
  cout << "17. 1 && 0 = " << hasil_logika << endl;

  hasil_logika = 1 || 0;
  cout << "18. 1 || 0 = " << hasil_logika << endl;
  cout << "==== Operator logika ====" << endl << endl;


  cout << "==== Operator ternary ====" << endl;
  int hasil_ternary = (16 != 4) ? true : false;
  cout << "19. (16 != 4) ? true : false" << endl;
  cout << "Hasil = " << hasil_ternary << endl;
  cout << "==== Operator ternary ====" << endl;
}