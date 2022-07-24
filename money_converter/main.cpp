// main.cpp
// This program will input American money and
// convert it to foreign currency
#include "convertmoney.cpp"

int main()
{
    Converter c();
    cout << fixed << showpoint << setprecision(2);

    c().title();
    c().menu();
    c().setChoice();

    do
    {
        c().menu();
    } while (choice);

    return 0;
}
