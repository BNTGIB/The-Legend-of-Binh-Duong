#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Player.h"
#include "Item.h"
#include "Monster.h"

using namespace std;
bool combat(Player& p) {
    Monster mons("Slime", 100, 100, 10, 30, 10, 10);
    while (true) {
        if (p.getHp() <= 0) return 0;
        if (mons.getHp() <= 0) {
            cout << "Ban da danh bai " << mons.getName() << "!!!!\n\n";
            return 1;
        }
        p.Info_combat(); cout << "\t |VS| \t"; mons.Info_combat();
        cout << "\n[1]-ATTACK \n[2]-DEFENSE\n ";
        int choice;cin >> choice;
        if (choice == 1) {
            p.takeDamage(mons.getAttack() - p.getshield());
            mons.takeDamage(p.getAttack() - mons.getshield()/4);
        }
        else if (choice == 2 ) {
            p.takeDamage(mons.getAttack() - p.getshield()*2);
            mons.takeDamage(0);
        }
        cout << endl;

    }
}


bool travel(Player& p) {

    int luck = rand() % 100;

    if (luck < 30) {
        cout << "--- Canh bao: Quai vat xuat hien! ---\n";
        return combat(p);
    }
    //else if (luck > 80) {
    //    cout << "--- May man: Ban nhat duoc mot mon do! ---\n";
    //     (addItem logic ở đây)
    //}
    else{
        cout << "Ban dang di dao quanh lang dai hoc, moi thu deu yen binh.\n";
        return 1;
    }
}

int main()
{
    srand(time(0));
    string name;
    cout << "Your name (or 'x' for defaut name): ";
    getline(cin, name);
    Player MAIN((name=="x"?"Player":name));
    cout << "\nChao mung "<<MAIN.getName()<<" den voi Binh Duong Vo Tan!!\n";
    int n;
    bool conti = 1;
    while (conti) {
        MAIN.Info();
        cout << " 1. Di tham hiem\n 2. Mo tui do\n 3. Shop\n 4. Exit\n ==>Your choice: ";
        cin >> n;
        switch (n) {
        case 1:
            if (!travel(MAIN)) {
                cout << "GAME OVER!!!\n";
                conti = 0;
            }
            break;
        default:
            conti = 0;
            break;
        }
    }
}

