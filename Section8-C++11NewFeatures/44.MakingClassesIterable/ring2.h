#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>
class ring2
{
private:
	int m_pos;
	int m_size;
	T *m_value;

public:
	class iterator;

public:
	ring2(int size) :m_pos(0), m_size(size), m_value(NULL)
	{
		m_value = new T[size];
	}

	~ring2()
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

	iterator begin()
	{
		return iterator(0, *this);
	}

	iterator end()
	{
		return iterator(m_size, *this);
	}

};

template <class T>
class ring2<T>::iterator
{
private:
	int m_pos;
	ring2 &m_ring;

public:
	iterator(int pos, ring2 &aRing) : m_pos(pos), m_ring(aRing)
	{

	}

	bool operator!=(const iterator &other) const
	{
		return m_pos != other.m_pos;
	}

	iterator &operator++(int)
	{
		m_pos++;

		return *this;
	}

	iterator &operator++()
	{
		m_pos++;

		return *this;
	}

	T &operator*()
	{
		T value = m_ring.get(m_pos);
		return m_ring.get(m_pos);
	}

};

