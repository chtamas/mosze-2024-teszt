#include <iostream> 

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    // Hiba: Az 'NELEMENTS' helytelen név. A konstans neve helyesen 'N_ELEMENTS'.

    std::cout << '1-100 ertekek duplazasa';
    // Hiba: A stringeket dupla idézőjel (" ") között kell megadni, nem egyszeres (') között.

    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    // Hiba: A for ciklus feltétele helytelen. A feltétel (második paraméter) hiányzik. 

    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    }
    // Hiba: A ciklus feltétele mindig hamis (i = 0 és a feltétel i nem változik, tehát a ciklus nem fut le).
    // Hiba: A std::cout sor végén hiányzik a pontosvessző (;).

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;
    // Hiba: Az 'atlag' változó nem inicializált, így használat előtt definiálni kell.

    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];
    }
    // Hiba: A for ciklus feltételében vessző (,) van a feltételek elválasztására, ami helytelen. 
    // Hiba: A 'atlag += b[i]' sor végén hiányzik a pontosvessző (;).

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
