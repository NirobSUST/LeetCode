class MyQueue {
private:
    stack<int> input, output;
public:

    MyQueue() {

    }

    void push(int x) {
        input.push(x);
    }

    int pop() {
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int front = output.top();
        output.pop();
        return front;
    }

    int peek() {
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};
/*
Time Complexity:
push(x)     ->  O(1) (Direct push to s1)
pop()       ->  Amortized O(1) (Elements are transferred at most once)
peek()      ->  Amortized O(1)
empty()     ->  O(1)

Space Complexity: O(n)
*/