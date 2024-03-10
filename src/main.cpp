#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    Node() {}
    ~Node() {}

    void Print()
    {
        cout << "id = " << m_id << ",  ";
    }

    int m_id;
};

int main()
{
    vector<Node> vec;
    vec.resize(10, Node());
    for (int i = 0; i < 10; ++i) {
        vec[i].m_id = i + 1;
        vec[i].Print();
    }
    cout << endl;  
    return 0;
}