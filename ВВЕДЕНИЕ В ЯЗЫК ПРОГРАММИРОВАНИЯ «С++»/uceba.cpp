#include <iostream>  
#include <iomanip>  
using namespace std;

int main() {
     setlocale(LC_ALL, "RU");
    std::cout << "1 ������� \n";
    double distance; 
    double time;    
    double speed;     

    cout << "������� ���������� �� ��������� � ����������:";
    cin >> distance;

    cout << "������� ����� � �����: ";
    cin >> time;
 
    if (time == 0) {
        cout << "����� �� ����� ���� ����� ����!" << endl;
        return 1;
    }
  
    speed = distance / time;

    cout << "����������� ��������: " << speed << " ��/�" << endl;

    std:cout << "2 ������� \n";
    double sec;
    double min;
    double hour;
    cout << "������� ����:";
    cin >> hour;
    cout << "������� ������:";
    cin >> min;
    cout << "������� �������:";
    cin >> sec;
    const double cost_per_minute = 2;
    double total_cost = hour + min * sec * cost_per_minute;
    cout << "��������� �������:" << total_cost << "������" << endl;


    return 0;
    }