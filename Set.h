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

    void grow() {
      m_capacity *= 2;

      T* newData = new T[m_capacity];

      for (int i - 0; i < m_size; i++) {
        newData[i] = m_data[i];

        
      }
    }
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
        if (m_data[i] == item){
          return true;
        }
      }
      return false;
    }

    void add(T item) {
      
    }
};

#endif