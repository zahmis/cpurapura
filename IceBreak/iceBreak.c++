# include <iostream>
# include <stdio.h>

// ポインタにはアドレスしか渡せない;
// * をつけてその先の値を取得する;
int calc(int *x){
    *x = 25;
    return 0;
};

int main (){
    printf("関数を使って出力\n");
    
    std::cout << "Hello, World!" << std::endl;

    int apple = 20;
    
    // 参照渡し　
    calc(&apple);
    printf("%d\n", apple);
 
    return 0;
}


