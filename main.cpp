#include <cstddef>
#include <iostream>

template<typename T>
T* merge(const T* a, size_t sa, const T* b, size_t sb, T* c)
{
  size_t i = 0, j = 0, k = 0;
  while (i < sa && j < sb)
  {
    if (a[i] < b[j])
    {
      c[k++] = a[i++];
    }
    else
    {
      c[k++] = b[j++];
    }
  }
  while (i < sa)
  {
    c[k++] = a[i++];
  }
  while (j < sb)
  {
    c[k++] = b[j++];
  }
  return c;
}

int main()
{
  int a[] = {1, 3, 5, 7};
  int b[] = {2, 4, 6, 8};
  int c[8];
  merge(a, 4, b, 4, c);
  for (size_t i = 0; i < 8; ++i)
  {
    std::cout << c[i] << ' ';
  }
  std::cout << '\n';
  return 0;
} // остальное в README
