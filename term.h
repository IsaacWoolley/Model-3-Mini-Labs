#ifndef TERM_H
#define TERM_H

class Term {
private:
    double coefficient;
    int exponent;
    char variable;

public:
    Term();
    Term(double coef, int exp, char var);
    Term(Term& term);

    double getCoefficient();
    int getExponent();
    char getVariable();

    void setCoefficient(double coef);
    void setExponent(int exp);
    void setVariable(char var);

    Term& operator=(Term& right);

    bool operator<=(Term& right);
    bool operator>=(Term& right);
    bool operator<(Term& right);
    bool operator>(Term& right);
    bool operator==(Term& right);

    bool compatible(Term& term);
};

#endif