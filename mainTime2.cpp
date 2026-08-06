#include "time2.h"


void assignmentTest()
{
    Time t1(2, 5, 30, 20);
    Time t2;

    t2 = t1;

    cout << "Assignment Test:" << endl;
    cout << "Original: " << t1 << endl;
    cout << "Copied: " << t2 << endl << endl;
}



void testTimeAddition()
{
    Time t1(1, 23, 50, 50);
    Time t2(0, 2, 15, 20);

    Time result = t1 + t2;

    cout << "Addition Test:" << endl;
    cout << t1 << " + " << t2 << endl;
    cout << "Result: " << result << endl << endl;
}



void testTimeSubtraction()
{
    Time t1(2, 5, 10, 10);
    Time t2(1, 3, 20, 20);

    Time result(
        t1.getDays() - t2.getDays(),
        t1.getHours() - t2.getHours(),
        t1.getMinutes() - t2.getMinutes(),
        t1.getSeconds() - t2.getSeconds()
    );

    cout << "Subtraction Test:" << endl;
    cout << "Result: " << result << endl << endl;
}



void testTimeRelationalOperators()
{
    Time t1(2, 0);
    Time t2(1, 30);

    cout << "Relational Test:" << endl;

    cout << (t1 > t2) << endl;
    cout << (t1 < t2) << endl;
    cout << (t1 >= t2) << endl;
    cout << (t1 <= t2) << endl;
    cout << (t1 == t2) << endl;

    cout << endl;
}



void testTimeOutStreamOperator()
{
    Time t(3, 4, 5, 6);

    cout << "Output Operator Test:" << endl;
    cout << t << endl << endl;
}



void testTimeIntegerConversion()
{
    Time t(1, 2, 3, 4);

    int seconds = t;

    cout << "Integer Conversion Test:" << endl;
    cout << "Seconds: " << seconds << endl;
}



int main()
{
    assignmentTest();

    testTimeAddition();

    testTimeSubtraction();

    testTimeRelationalOperators();

    testTimeOutStreamOperator();

    testTimeIntegerConversion();


    return 0;
}