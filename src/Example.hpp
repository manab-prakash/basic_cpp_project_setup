#ifndef EXAMPLE_HPP_
#define EXAMPLE_HPP_

int MAC(const int x, const int y, int& sum) {
    sum += x * y;
    return sum;
}
int square(const int x) { return x * x; }

#endif  // EXAMPLE_HPP_
