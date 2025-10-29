#include <iostream>  
#include <iomanip>  
using namespace std;

int main() {
     setlocale(LC_ALL, "RU");
    std::cout << "1 задание \n";
    double distance; 
    double time;    
    double speed;     

    cout << "Введите расстояние до аэропорта в километрах:";
    cin >> distance;

    cout << "Введите время в часах: ";
    cin >> time;
 
    if (time == 0) {
        cout << "Время не может быть равно нулю!" << endl;
        return 1;
    }
  
    speed = distance / time;

    cout << "Необходимая скорость: " << speed << " км/ч" << endl;

    std:cout << "2 задание \n";
    double sec;
    double min;
    double hour;
    cout << "Введите часы:";
    cin >> hour;
    cout << "Введите минуты:";
    cin >> min;
    cout << "Введите секунды:";
    cin >> sec;
    const double cost_per_minute = 2;
    double total_cost = hour + min * sec * cost_per_minute;
    cout << "Стоимость поездки:" << total_cost << "гривен" << endl;


    return 0;
    }