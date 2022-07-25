// convertmoney.h
#ifndef CONVERTMONEY_H
#define CONVERTMONEY_H
class Converter
{
public:
    int choice;

private:
    bool usr;
    double dollars;
    double euros;
    double pesos;
    double yen;

public:
    Converter();
    ~Converter();
    void title();
    void menu();
    void convertAll(double balance);
    double convertToYen(double balance);
    double convertToEuros(double balance);
    double convertToPesos(double balance);
    void setChoice();
};
#endif