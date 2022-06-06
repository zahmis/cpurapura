#include <stdio.h>

struct Test {
  char name[32];
  int math;
  int english;
  int science;
};

struct Test student[3] = {
    {"田中", 80, 90, 100}, {"鈴木", 70, 80, 90}, {"佐藤", 60, 70, 80}};

void line(void);
void show(void);

int main(void) {
  printf("%10s %10s %10s %10s\n", "名前", "数学", "英語", "理科");
  line();
  show();
  line();
  return 0;
}

void line(void) {
  char c = '-';
  int i = 0;
  for (i = 0; i < 50; i++) {
    printf("%c", c);
  }
  printf("\n");
  return;
}

void show(void) {
  int i = 0;
  for (i = 0; i < 3; i++) {
    printf("%9s %9d %9d %9d\n", student[i].name, student[i].math,
           student[i].english, student[i].science);
  }
  return;
}
