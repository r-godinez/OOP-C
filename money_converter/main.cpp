// main.cpp
// This program will input American money and
// convert it to foreign currency
#include "convertmoney.cpp"

int main()
{
    Converter c;
    double balance = 0;
    cout << fixed << showpoint << setprecision(2);

    c.title();
    c.menu();
    c.setChoice();

    while (c.choice <= 4 && c.choice >= 1)
    {
        switch (c.choice)
        {
        case 1:
            balance = c.convertToYen(balance);
            break;
        case 2:
            balance = c.convertToEuros(balance);
            break;
        case 3:
            balance = c.convertToPesos(balance);
            break;
        case 4:
            c.convertAll(balance);
            break;
        default:
            cout << "Invalid input. Error!!!\n";

            break;
        }
    }

    return 0;
}
