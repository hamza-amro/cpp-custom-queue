#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class T>
class clsMyQueue {

private:
	clsDblLinkedList<T> _List;

public:
	void push(T value) {

		_List.InsertAtEnd(value);
	}

	void pop() {

		_List.DeleteFirstNode();
	}

	void print() {

		_List.PrintList();
	}

	int Size() {

		return _List.Size();
	}

	T front() {

		return _List.GetItem(0);
	}

	T Back() {

		return _List.GetItem(Size() - 1);
	}

	T GetItem(int index) {

		return _List.GetItem(index);
	}

	void Reverse() {

		_List.Reverse();
	}

	bool UpdateItem(int index, T value) {

		return _List.UpdateItem(index, value);
	}

	bool InsertAfter(int index, T value) {

		return _List.InsertAfter(index, value);
	}

	void InsertAtFront(T value) {

		_List.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {

		_List.InsertAtEnd(value);
	}

	void Clear() {

		_List.Clear();
	}
};