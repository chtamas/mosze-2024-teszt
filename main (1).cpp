 #include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //int *b = new int[NELEMENTS];
    int* b = new int[N_ELEMENTS];
    //std::cout << '1-100 ertekek duplazasa'
    std::cout << "1-100 ertekek duplazasa";
     // for (int i = 0;)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i+1) * 2;
    }

    // for (int i = 0; i; i++)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //std::cout << "Ertek:"
        std::cout << "Ertek:" << b[i]<<"\n";
    }
    
    std::cout << "Atlag szamitasa: " << std::endl;
    //int atlag;
    int atlag=0;

    //for (int i = 0; i < N_ELEMENTS, i++)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //atlag += b[i]
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Itt járt Máté." << std::endl;

    return 0;
}
