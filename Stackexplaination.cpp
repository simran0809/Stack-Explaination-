#include <iostream>
#include <stack>
using namespace std;

void explainStack() {
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}

    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top() << endl; // prints 5

    st.pop(); // removes 5 → {3, 3, 2, 1}

    cout << st.top() << endl; // prints 3

    cout << st.size() << endl; // prints 4

    cout << st.empty() << endl; // prints 0 (false)

    stack<int> st1, st2;
    st1.swap(st2); // correct swap syntax
}

int main() {
    explainStack();
    return 0;
}
