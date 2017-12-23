#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>
class ring1
{
private:
	int m_pos;
	int m_size;
	T *m_value;

public:
	class iterator;

public:
	ring1(int size) :m_pos(0), m_size(size), m_value(NULL)
	{
		m_value = new T[size];
	}

	~ring1()
	{
		delete[] m_value;
	}

	void add(T value)
	{
		m_value[m_pos] = value;
		m_pos++;

		if (m_pos == m_size)
		{
			m_pos = 0;
		}
	}
	int size()
	{
		return m_size;
	}

	T get(int pos)
	{
		return m_value[pos];
	}

};

template <class T>
class ring1<T>::iterator
{
public:
	void print()
	{
		cout << "Hello from iterator: " << T() << endl;
	}
};

