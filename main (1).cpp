#include <iostream> 

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    //Az 'NELEMENTS' helytelen név. A konstans neve helyesen 'N_ELEMENTS'.

    std::cout << '1-100 ertekek duplazasa';
    //A stringeket dupla idézőjel (" ") között kell megadni.

    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    //A for ciklus feltétele helytelen. A második paraméter hiányzik. 

    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    }
    //A ciklus feltétele mindig hamis (i = 0 és a feltétel i nem változik, tehát a ciklus nem fut le).
    //A std::cout sor végén hiányzik a pontosvessző (;).

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;
    //Az 'atlag' változó nem inicializált, így használat előtt definiálni kell.

    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];
    }
    //A for ciklus feltételében vessző (,) van a feltételek elválasztására, ami helytelen. 
    //A 'atlag += b[i]' sor végén hiányzik a pontosvessző (;).

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
