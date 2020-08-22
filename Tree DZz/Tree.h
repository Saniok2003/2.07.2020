#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tree
{
private:
	struct Node
	{
		int data;
		Node* left;
		Node* right;
		Node(int data, Node* left = nullptr, Node* right = nullptr) : data(data), left(left), right(right)
		{ }
	};
	Node* root;
	void Add(int data, Node*& root);
	void PrintKLP(Node* dataa) const;
	void PrintLKP(Node* dataa) const;
	void PrintPKL(Node* dataa) const;
	int Search(int data, Node* root) const;
public:
	Tree() : root(nullptr) { }
	void Add(int data);
	void PrintKLP() const;
	void PrintLKP() const;
	void PrintPKL() const;
	int Search(int data) const;
};