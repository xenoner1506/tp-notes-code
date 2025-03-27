#pragma once
#include <stddef.h>

class MyArray {
  private:
    size_t m_size = 0;
    int* m_buffer = nullptr;
  public:
    MyArray(size_t size, int value);

    int sum() const;
    int& operator[](size_t idx);
};
