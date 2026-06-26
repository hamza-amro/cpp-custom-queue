#pragma once
#include <iostream>
using namespace std;

template<class T> 
class clsDblLinkedList {

protected:
	int _Size = 0;

public:
	class Node {

	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T value){

		Node* NewNode = new Node();
		NewNode->value = value;
		NewNode->next = head;
		NewNode->prev = NULL;

		if (head != NULL) {
			head->prev = NewNode;
		}
		head = NewNode;
		_Size++;
	};

	void PrintList(){

		Node* Current = head;

		while (Current != NULL) {
			cout << Current->value << " ";
			Current = Current->next;
		}
		cout << "\n";
	}


	Node* Find(T Value){

		Node* Current = head;
		while (Current != NULL) {

			if (Current->value == Value)
				return Current;

			Current = Current->next;
		}

		return NULL;
	}

	void InsertAfter(Node* Current, T value) {

		Node* NewNode = new Node();
		NewNode->value = value;
		NewNode->next = Current->next;
		NewNode->prev = Current;

		if (Current->next != NULL) {

			Current->next->prev = NewNode;
		}

		Current->next = NewNode;
		_Size++;
	}

	
	void InsertAtEnd(T value) {

		Node* Current = head;

		Node* NewNode = new Node();
		NewNode->value = value;
		NewNode->next = NULL;

		if (head == NULL) {

			NewNode->prev = NULL;
			head = NewNode;
		}
		else {

			while (Current->next != NULL) {

				Current = Current->next;
			}

			Current->next = NewNode;
			NewNode->prev = Current;
		}
		_Size++;
	}

	void DeleteNode(Node*& NodeToDelete) {

		if (head == NULL || NodeToDelete == NULL) {
			return;
		}

		if (head == NodeToDelete) {

			head = NodeToDelete->next;
		}

		if (NodeToDelete->next != NULL) {

			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {

			NodeToDelete->prev->next = NodeToDelete->next;
		}

		delete NodeToDelete;
		_Size--;
	}

	void DeleteFirstNode() {

		if (head == NULL) {

			return;
		}

		Node* temp = head;

		head = head->next;

		if (head != NULL) {

			head->prev = NULL;
		}

		delete temp;
		_Size--;
	}

	void DeleteLastNode() {

		if (head == NULL) {
			return;
		}

		if (head->next == NULL) {

			delete head;
			head = NULL;
			_Size--;
			return;
		}

		Node* current = head;
		while (current->next->next != NULL) {

			current = current->next;
		}

		Node* temp = current->next;
		current->next = NULL;
		delete temp;
		_Size--;
	}

	int Size() {

		return _Size;
	}

	bool IsEmpty() {

		return _Size == 0;
	}

	void Clear() {

		while (_Size > 0) {

			DeleteFirstNode();
		}
	}

	void  Reverse(){
		Node* current = head;
		Node* temp = nullptr;
		while (current != nullptr) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}

		if (temp != nullptr) {
			head = temp->prev;
		}
	}

	Node* GetNode(int index) {

		int Counter = 0;

		if (index > _Size - 1 || index < 0) {

			return NULL;
		}

		Node* Current = head;

		while (Current != NULL && (Current->next != NULL)) {

			if (Counter == index) {

				break;
			}

			Current = Current->next;
			Counter++;
		}

		return Current;
	}

	T GetItem(int index) {

		Node* temp = GetNode(index);

		if (temp == NULL) {

			return NULL;
		}
		else {

			return temp->value;
		}
	}

	bool UpdateItem(int index, T value) {

		Node* temp = GetNode(index);

		if (temp != NULL) {

			temp->value = value;
			return true;
		}
		else {
			return false;
		}
	}

	bool InsertAfter(int index, T value) {

		Node* Current = GetNode(index);

		if (Current != NULL) {

			InsertAfter(Current, value);
			return true;
		}
		else {

			return false;
		}

	}
};