/*************************
 * Автор: Никита Захаров *
 * Вариант: 6            *
 * ***********************/
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  double F; //Динамическая удерживающая способность насадочной химической колонны
  double Ga; //Число Галилея
  double v; //Вязкость жидкости
  double d;
  double Re; //Число Рейнольдса
  double g = 9.8; //Ускорение силы тяжести
  
  int TheCycleDone;
  int TheCycleDoneLimit = 6;
  
  cout << "Введите значение эквивалентного диаметра насадки: ";
  cin >> d;
  
  Re = 4.1 * pow(10.0, 4.0);
  
  cout << "F \tGa \n"; //Разбили будущие значения F и Ga на два столбика
  
  for (TheCycleDone = 0; TheCycleDone < TheCycleDoneLimit; ++TheCycleDone) {
    cout << "Введите значение вязкости жидкости (см2/2): ";
    cin >> v;
      
    Ga = (g * pow(d, 3.0)) / v;
    
    if (Ga < 4.0 * pow(10.0, 4.0)) {
      F = 0.183 * pow(Re, 0.74) * pow(Ga, -0.256);
      cout << F << "\t" << Ga << endl;
    } else {
      F = 3.0 * pow(Re, 0.74) * pow(Ga, -0.52);
      cout << F << "\t" << Ga << endl;
    }
  }
  
  return 0;
}
