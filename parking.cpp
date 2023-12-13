#include <iostream>
using namespace std;

int main()
{

    int r = 0;
    int c = 0  ;
    int b = 0;

    int u_input;
    int amount = 0, count = 0;

    // MENU
    while (true)
    {

        cout << "Press 1 for rickshaw" << endl;
        cout << "Press 2 for car" << endl;
        cout << "Press 3 for bus" << endl;
        cout << "Press 4 to show the record" << endl;
        cout << "Press 5 to delete the record" << endl;
        cin >> u_input;

        if (u_input == 1)
        {

            if (count <= 50)
            {
                
                amount = amount + 100;
                count = count + 1;
              r++;
            }
            else
                cout << "No more rikshaw,Parking is full" << endl;
        }

        else if (u_input == 2)
        {
            if (count <= 50)
            {
                
                amount = amount + 200;
                count = count + 1;
                c++;
            }
            else
                cout << "No more car,Parking is full" << endl;
        }

        else if (u_input == 3)
        {
            if (count <= 50)
            {
            
                amount = amount + 300;
                count = count + 1;
                    b++;
            }
            else
                cout << "No more bus,Parking is full" << endl;
        }

        else if (u_input == 4)
        {

            cout << "*********************************************" << endl;
            cout << "THE total amount=" <<amount<< endl;
            cout << "THe total numbe of vehicles parked=" << count << endl;
            cout << "THe total numbe of rickshaw parked=" << r << endl;
            cout << "THe total numbe of car parked=" << c << endl;
            cout << "THe total numbe of bus parked=" << b << endl;
            cout << "*********************************************" << endl
                 << endl;
        }

        else if (u_input == 5)
        {
            amount = 0;
            count = 0;
            r = 0;
            c = 0;
            b = 0;

            cout << "*********************************************" << endl;
            cout << "RECORD DELETED" << endl;
            cout << "*********************************************" << endl
                 << endl;
            ;
            count = 0;
        }
        else
        {
            cout << "Invalid number" << endl;
        }
    }

    return 0;
}