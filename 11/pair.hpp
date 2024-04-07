#ifndef __pair_hpp__
#define __pair_hpp__

template <typename T, typename U>
class pair {
public:
  pair(const T& a, const U& b) 
    : first_(a), second_(b) {}
  T& first() { return first_; }
  const T& first() const { return first_; }
  U& second() { return second_; }
  const U& second() const { return second_; }
private:
    T first_;
    U second_;
};

#endif