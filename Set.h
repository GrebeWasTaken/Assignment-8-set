#ifndef SET_H
#define SET_H

#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

template <typename T>
class Set{
  private:
    T* m_data;
    int m_size;
    int m_capacity;

  publice:
    Set() {
      m_capcity = 8
      m_size = 0;
      m_data =  new T[m_capacity];
    }

    ~Set() {
      delete[] m_data;
    }

    bool contains(T item) const {
      for (int i = 0; i < m_size; i++) {
        if (m_data)
      }
    }

    void add(T item) {
      
    }
};

#endif