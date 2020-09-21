#include <iostream>
using namespace std;


class Car //Class car
{
private:
    string carName;
    string carNum;
    string carColor;
    int EngineCapacity;
    int SeatCapacity;
    int DayPrice;

public:
    Car(string _carName, string _carNum, string _carColor, int _Engine, int _Seat, int _Day)//Constructor 
    {
        carName = _carName;
        carNum = _carNum;
        carColor = _carColor;
        EngineCapacity = _Engine;
        SeatCapacity = _Seat;
        DayPrice = _Day;
    }

    string GetCarName()    //setter
    {
        return carName;
        cout << "Car :" << carName << endl;
    }

    void DisplayCar()    //Method
    {
        cout << "Model : " << carName << endl;
        cout << "Number : " << carNum << endl;
        cout << "Color : " << carColor << endl;
        cout << "Engine : " << EngineCapacity << "cc" << endl;
        cout << "Seat : " << SeatCapacity << "people" << endl;
        cout << "Price :" << endl;
        cout << DayPrice << "/Day" << endl;
        cout << "------------------------" << endl;
    }

    int BillCalculation(int number)    //return type function
    {
        int payment;
        cout << "Please pay amount " << number * DayPrice << "$ to confirm booking..." << endl;
        cin >> payment;

        if (payment == number * DayPrice)
            cout << "Booking completed. Your car will deliver soon. Enjoy your day!" << endl;
        else if (payment > number * DayPrice)
            cout << "Booking completed. This is your balance " << payment - (number * DayPrice)<< "$ " << " Your car will deliver soon. Enjoy your day!" << endl;
        else
            cout << "Booking Failed. Insufficient payment." << endl;
        return number * DayPrice;
    }
};

void RentCar()
{
    //Class Object
    Car Axia("Axia", "ABC7753", "White", 998, 5, 100);
    Car Myvi("Myvi", "DCS6772", "Red", 1329, 5, 110);
    Car Bezza("Bezza", "WA4430V", "Blue", 998, 5, 130);
    Car Aruz("Aruz", "VAC3321", "Silver", 1496, 7, 180);

    system("cls");

    cout << "Car List :" << endl;
    Axia.DisplayCar();
    Myvi.DisplayCar();
    Bezza.DisplayCar();
    Aruz.DisplayCar();

    int choice, payment,Number=0;;
    cout << "\nSelect a car to rent :" << endl;
    cout << "1. Axia" <<endl;
    cout << "2. Myvi" <<endl;
    cout << "3. Bezza" <<endl;
    cout << "4. Aruz" <<endl;
    cin >> choice;

    cout << "\nHow many day want to rent?" << endl;
    cin >> Number;
    switch (choice)
    {
    case 1:cout << "\nRent " << Axia.GetCarName() << " for " << Number << "days" << endl; Axia.BillCalculation(Number); break;
    case 2:cout << "\nRent " << Myvi.GetCarName() << " for " << Number << "days" << endl; Myvi.BillCalculation(Number); break;
    case 3:cout << "\nRent " << Bezza.GetCarName()<< " for " << Number << "days" << endl; Bezza.BillCalculation(Number);break;
    case 4:cout << "\nRent " << Aruz.GetCarName() << " for " << Number << "days" << endl; Aruz.BillCalculation(Number); break;
    }
}

int main()
{
    int choice;
    cout << "Owl Car Daily Rental Service" << endl;
    cout << "----------------------" << endl;
    cout << "1. Rent Car" << endl;
    cout << "2. Exit" << endl;
    cout << "----------------------\n" << endl;

    cin >> choice;

    if (choice == 1)
        RentCar();
    system("pause > 0");
}
