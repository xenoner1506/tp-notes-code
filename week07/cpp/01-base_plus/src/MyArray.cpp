#include "MyArray.hpp"

MyArray::MyArray(size_t size, int value) : m_size(size), m_buffer(new int[size]) {
  for (size_t idx = 0; idx != m_size; ++idx) {
    m_buffer[idx] = value;
  }
}

int MyArray::sum() const {
  int result = 0;
  for (size_t idx = 0; idx != m_size; ++idx) {
    result += m_buffer[idx];
  }
  return result;
}

int& MyArray::operator[](size_t idx) {
  return m_buffer[idx];
}
