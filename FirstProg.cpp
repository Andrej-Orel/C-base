#include <iostream>
int main(int argc, char *argv[])
// g++ literals.cpp -o literals
{
  printf("This is integer literal %d\n", 10);
  printf("This is float literal %f\n", 2.1e1);
  printf("This is char literal %c\n",'x');
  printf("This is string literal %s\n", "hello" );
  std::cout << true << " " << false << std::endl;
  return 0;
}
