// --------------------------------------
// main.cpp
// --------------------------------------
// This program will input American money and convert it to foreign currency
// --------------------------------------
#include "convertmoney.cpp"
// --------------------------------------
int main()
{
    Converter usr;
    int selection = 0;
    int balance = 0;

    // cout << fixed << showpoint << setprecision(2);
    usr.title();

    while (usr.getActivity())
    {
        usr.menu();
        usr.validateChoice();
        cout << "" usr.setBalance();
        usr.selection();
    }

    return 0;
}
// --------------------------------------