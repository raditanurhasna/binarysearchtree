#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* ringchild;

	// Constructor for the the node class
	Node(string i, Node* I, Node* r)
	{
		info = i;
		leftchild = I;
		rightchild = r;
	}

};

