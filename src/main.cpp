#include "iostream"

using namespace std;

#define PI 3.14159

void optionChoose(int option);
void optionMenu();

int main(int argc, char const *argv[]) {
    
    optionMenu();
     
    return 0;
}

void optionChoose(int option) {
    switch (option) {
        case 1:
            cout << "You chose option 1" << endl;
            break;
        case 2:
            cout << "You chose option 2" << endl;
            break;
        case 3:
            cout << "You chose option 3" << endl;
            break;
        case 4:
            cout << "You chose option 4" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
    }
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
