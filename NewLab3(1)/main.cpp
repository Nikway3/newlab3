#include "q.h"
using namespace std;
int main() {

    Stack st;
    int a;
    st << 1;
    st << 2;
    st >> a;
    cout << "Stack: ";
    st.printStack();
    cout << "\na = " << a;



    return 0;
}