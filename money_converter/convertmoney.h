// ------------------------------------------
// convertmoney.h
// ------------------------------------------
#ifndef CONVERTMONEY_H
#define CONVERTMONEY_H
class Converter
{
private:
    int choice;
    bool usr;
    double dollars;
    double euros;
    double pesos;
    double yen;

public:
    // default constructor
    Converter();
    // default deconstructor
    ~Converter();
    // prompt
    void title();
    void menu();
    // choice selection
    void validateChoice();
    void setBalance();
    void selection();
    void quitProgram();
    // converting methods
    void convertAll(double, double &, double &, double &);
    double convertToYen(double, double &);
    double convertToEuros(double, double &);
    double convertToPesos(double, double &);
    // access variable values
    int getChoice() const
    {
        return choice;
    }
    bool getActivity() const
    {
        return usr;
    }
    double getDollars() const
    {
        return dollars;
    }
    double getEuros() const
    {
        return euros;
    }
    double getPesos() const
    {
        return pesos;
    }
    double getYen() const
    {
        return yen;
    }
};
#endif