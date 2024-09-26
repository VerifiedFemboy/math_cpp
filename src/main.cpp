#include "iostream"
#include "calculations.h"

using namespace std;

void optionChoose(int option);
void optionMenu();

int main(int argc, char const *argv[]) {
    
    optionMenu();
     
    return 0;
}

void optionChoose(int option) {
    switch (option) {
        case 1:
            Calculations::area_of_circle();
            break;
        case 2:
            Calculations::area_of_rectangle();
            break;
        case 3:
            Calculations::area_of_triangle();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid option" << endl;
            break;
    }

    cout << "Press any key to continue..." << endl;
    cin.get();
    cin.get();
    optionMenu();
    
}

void optionMenu() {
    int option;
    do {
        system("clear");
        cout << "Choose an option: " << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Exit" << endl;
        cin >> option;
    } while (option < 1 || option > 4); {
        optionChoose(option);
    }
}
