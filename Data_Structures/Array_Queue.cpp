# include<iostream>
using namespace std;
class Stack
{
    int top;
    public:
    int a[5];
    Stack()
    {
        top = -1;
    }
    void push(int x);
    int pop();
    bool isEmpty();
};

void Stack::push(int x)
{
    if(top>5)
    {
        cout << "Stack Overflow \n";
        exit(0);
    }
    else
    {
        a[++top] = x;
    }
}

int Stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}

bool Stack::isEmpty()
{
    if(top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class Queue {
    public:
    Stack forward,reverse;
    void enqueue(int x);
    int dequeue();
};

void Queue :: enqueue(int x) 
{
    forward.push(x);
}

int Queue :: dequeue() 
{
    int x, y;
    while(!forward.isEmpty()) 
    {
        x = forward.pop();
        reverse.push(x);
    }
    y = reverse.pop();
    while(!reverse.isEmpty()) 
    {
        x =reverse.pop();
        forward.push(x);
    }
    return y;
}

int main()
{
int n,x;	
Queue q;
cout<<"Enter the number of elements :";
cin>>n;
cout<<"\nEnter the elements :"<<endl;
for(int i=0;i<n;i++)
{
	cin>>x;
    q.enqueue(x);
}
for(int i=0;i<n;i++)
	cout << "Removing element from queue (dequeue)"<< q.dequeue()<<endl;   
    return 0;
}
