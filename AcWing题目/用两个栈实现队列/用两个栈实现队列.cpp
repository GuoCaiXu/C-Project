# include <iostream>
# include <stack>
using namespace std;

class MyQueue {
public:

    MyQueue() {

    }

    void push(int x) {

        stc.push(x);
    }

    int pop() {

        copy(stc, cache);
        int temp = cache.top();
        cache.pop();
        copy(cache, stc);

        return temp;
    }

    int peek() {

        copy(stc, cache);
        int temp = cache.top();
        copy(cache, stc);

        return temp;
    }

    bool empty() {

        return stc.empty();
    }

private:
    void copy(stack<int>& a, stack<int>& b) {

        while (a.size()) {

            b.push(a.top());
            a.pop();
        }
    }

    stack<int>stc, cache;
};

int main() {

    MyQueue m;

    m.push(1);
    m.push(2);
    m.push(3);



	return 0;
}