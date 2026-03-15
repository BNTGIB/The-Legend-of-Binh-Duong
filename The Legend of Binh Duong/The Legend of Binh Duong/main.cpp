#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "Item.h"
#include "Monster.h"

using namespace std;

int main()
{
    string name;
    cout << "Your name (or 'x' for defaut name): ";
    getline(cin, name);
    Player MAIN(name=="x"?"Player":name);
    cout << "\nChao mung "<<MAIN.getName()<<" den voi Binh Duong Vo Tan!!\n";
    int n;
    bool conti = 1;
    while (conti) {
        MAIN.Info();
        cout << " 1. Di tham hiem\n 2. Mo tui do\n 3. Shop\n 4. Exit\n ==>Your choice: ";
        cin >> n;
        switch (n) {
        case 1:

        default:
            conti = 0;
            break;
        }
    }
}

