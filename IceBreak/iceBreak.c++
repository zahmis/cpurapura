#include <iostream>
#include <stdio.h>

// ポインタにはアドレスしか渡せない;
// * をつけてその先の値を取得する;
int calc(int *x) {
  *x = 25;
  return 0;
};

void calcSecond(int n1, int n2, int *plus, int *minus) {
  *plus = n1 + n2;
  *minus = n1 - n2;
};
struct Fruits {
  char name[10];
  int price;
  int stock;
};

int main() {
  printf("関数を使って出力\n");

  std::cout << "Hello, World!" << std::endl;

  int apple = 20;

  // 参照渡し　
  calc(&apple);
  printf("%d\n", apple);

  int num1 = 10;
  int num2 = 20;
  int plus = 0;
  int minus = 0;
  calcSecond(num1, num2, &plus, &minus);

  printf("%d\n", plus);
  printf("%d\n", minus);

  struct Fruits waiStore = {"りんご", 100, 10};

  // ポインタ作成
  struct Fruits *p;

  // 参照渡し
  p = &waiStore;

  printf("%s\n", p->name);
  printf("%d\n", p->price);
  printf("%d\n", p->stock);

  return 0;
}
