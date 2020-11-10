#include <iostream>
#include <stdio.h>

struct note
{
   char name[255];    
    int tele;            
    int  bday[3];     
};

int main(int argc, char* argv[]) {
    const int max_blocknote = 3;
    note blocknote[max_blocknote];
    note blocknote1;
    char test[255];
    bool test1 = false;

    for (int i = 0; i < max_blocknote; i++) {
        std::cout << "Vvedite famil_imea : ";
        gets_s(blocknote[i].name);
        std::cout << "Vvedite nomer : ";
        std::cin >> blocknote[i].tele;
        std::cout << "Den rojdenia : ";
        std::cin >> blocknote[i].bday[0];
        std::cout << "Meseac rojdenia : ";
        std::cin >> blocknote[i].bday[1];
        std::cout << "god rojdenia : ";
        std::cin >> blocknote[i].bday[2];
    };

    for (int i = 0; i < max_blocknote; i++) {
        for (int j = i + 1; j < max_blocknote; j++) {
            if (blocknote[i].tele/100000 > blocknote[j].tele/100000){
                blocknote1 = blocknote[i];
                blocknote[i] = blocknote[j];
                blocknote[j] = blocknote1;
            }
        }
    };

    std::cout << "Vvedite vashu familiy i imea" << std::endl;
    gets_s(test);

    for (int i = 0; i < max_blocknote; i++) {
        if (blocknote[i].name == test) {
            std::cout << "Imea i familia:" << blocknote[i].name << "Nomer telefona:" << blocknote[i].tele << "den rojdenia:";
            test1 = true;
            for (int j = 0; j < 3; j++) {
                std::cout << blocknote[i].bday[j] << "/";
            };
        };
    };
    if (!test1) {
        std::cout << "Takogo celoveka net";
    };
    return 0;
}
