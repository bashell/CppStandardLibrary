#include <iostream>
#include <string>
#include <exception>
#include "Queue.hpp"
using namespace std;

int main()
{
    try {
        Queue<string> q;

        q.push("These ");
        q.push("are ");
        q.push("more than ");

        cout << q.pop();
        cout << q.pop();

        q.push("four ");
        q.push("words!");

        q.pop();

        cout << q.pop();
        cout << q.pop() << endl;

        cout << "number of elements in the queue: " << q.size() << endl;

        cout << q.pop() << endl;
    } 
    catch(const exception &e) {
        cerr << "EXCEPTION: " << e.what() << endl;
    }
    return 0;
}
