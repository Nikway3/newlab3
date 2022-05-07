#include <iostream>
#include <vector>


class Square {
private:
    double X, Y;
    double St;
public:
    // Getters
    double getX();
    double getY();
    double Side();
    // Setters
    void setX (const double &x);
    void setY(const double &y);
    void GetSide(const double &side);
};
// Comparison of squares
bool operator == (Square sq1, Square sq2);
bool operator != (Square sq1, Square sq2);
bool operator < (Square sq1, Square sq2);
bool operator > (Square sq1, Square sq2);

// Multip on number
void operator * (Square sq, double a);

// offset on vector
void operator + (Square sq, std::vector<double> vec);

// Stack

class Stack {

private:
    std::vector<double> stack;
    size_t size = 0;

public:
    Stack();

    // Setters
    void pushElem(int x);

    double popElem();

    void printStack();

};

// Push and pop
void operator << (Stack& st, int elem);
void operator >> (Stack& st, int& a);