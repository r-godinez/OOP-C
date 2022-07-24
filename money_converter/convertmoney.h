// convertmoney.h
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
    Converter();
    ~Converter();
    void title();
    void menu();
    void convertAll(double dollars, double &euros, double &pesos, double &yen);
    double convertToYen(double dollars, double &yen);
    double convertToEuros(double dollars, double &euros);
    double convertToPesos(double dollars, double &pesos);
    void setChoice();
};
#endif