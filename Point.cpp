#include <type_traits>

template <class T, typename U, typename std::enable_if<std::is_arithmetic<T>::value && std::is_arithmetic<U>::value>::type>>
class Point {
  public:
    Point(T x, U y): x_(x), y_(y) {};

  private:
    T x_;
    U y_;
};