#include "iostream"
#include "calculations.h"

using namespace std;

void optionChoose(int option);
void optionMenu();
void clearScreen();

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
            Calculations::area_of_polygon();
            break;
        case 5:
            Calculations::arithmetic_sequence();
            break;
        case 6:
            Calculations::calcuate_percentage();
            break;
        case 7:
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
        clearScreen();
        cout << "Choose an option: " << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Calculate the area of a polygon" << endl;
        cout << "5. Artihmetic sequence" << endl;
        cout << "6. Calculate Percentage" << endl;
        cout << "7. Exit" << endl;
        cin >> option;
    } while (option < 1 || option > 7); {
        optionChoose(option);
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
