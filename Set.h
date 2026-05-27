#ifndef SET_H
#define SET_H

#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;

template<typename T>
class Set {
private:
  T* m_data;
  int m_size;
  int m_capacity;

  void grow()
  {
    m_capacity *= 2;

    T* newData = new T[m_capacity];

    for (int i = 0; i < m_size; i++) {
      newData[i] = m_data[i];
    }
    delete[] m_data;
    m_data = newData;
  }

public:
  Set()
  {
    m_capacity = 8;
    m_size = 0;
    m_data = new T[m_capacity];
  }

  ~Set()
  {
    delete[] m_data;
  }

  //copy
  Set(const Set<T>& other) {
    m_capacity = other.m_capacity;
    m_size = other.m_size;
    m_data = new T[m_capacity];

    for (int i = 0; i < m_size; i++) {
      m_data[i] = other.m_data[i];
    }
  }

  bool contains(T item) const
  {
    for (int i = 0; i < m_size; i++) {
      if (m_data[i] == item) {
        return true;
      }
    }
    return false;
  }

  void add(T item)
  {
    if (contains(item)) {
      return;
    }

    if (m_size == m_capacity) {
      grow();
    }

    m_data[m_size] = item;
    m_size++;
  }

  int getSize() const
  {
    return m_size;
  }

  void remove(T item)
  {
    for (int i = 0; i < m_size; i++) {
      if (m_data[i] == item) {
        for (int j = i; j < m_size - 1; j++) {
          m_data[j] = m_data[j + 1];
        }

        m_size--;
        return;
      }
    }
  }

  void clear() {
    m_size = 0;
  }
};

#endif