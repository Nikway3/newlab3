#include "q.h"
// Getters
double Square::getX() {
    return X;
}
double Square::getY() {
    return Y;
}
double Square::Side() {
    return St;
}

// Setters
void Square::setX (const double &x) {
    X = x;
}
void Square::setY(const double &y) {
    Y = y;
}
void Square::GetSide(const double &side) {
    St = side;
}

bool operator == (Square sq1, Square sq2) {
    return (sq1.Side() == sq2.Side());
}
bool operator != (Square sq1, Square sq2) {
    return (sq1.Side() != sq2.Side());
}
bool operator < (Square sq1, Square sq2) {
    return (sq1.Side() < sq2.Side());
}
bool operator > (Square sq1, Square sq2) {
    return (sq1.Side() > sq2.Side());
}


void operator * (Square sq, double a) {
    sq.GetSide(sq.Side() * a);
}


void operator + (Square sq, std::vector<double> vec) {
    sq.setX(sq.getX() + vec[0]);
    sq.setY(sq.getY() + vec[1]);
}




// Stack

//    std::vector<double> stack;
//    size_t size = 0;

Stack::Stack() {
    size = 0;
}

// Setters
void Stack::pushElem(int x) {
    if (size >= 100) {
        std::cout << "Stack is already full!\n";
    }
    else {
        stack.push_back(x);
        size++;
    }

}

double Stack::popElem() {
    if (size <= 0) {
        std::cout << "Stack is empty!\n";
    }
    else {
        double a = stack[size - 1];
        stack.pop_back();
        size--;
        return a;
    }


}

void Stack::printStack() {
    for (int i = 0; i < size; ++i) {
        std::cout << stack[i] << " ";
    }
}

// Push and pop
void operator << (Stack& st, int elem) {
    st.pushElem(elem);
}
void operator >> (Stack& st, int& a) {
    a = st.popElem();
}