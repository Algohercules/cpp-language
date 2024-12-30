#include <stdio.h>

// int thing(int a, int b) {
//     if (a > b) {
//         int output = 0;
//         for (int i = b; i < a; i++) {
//             if (i % 2 == 0) {
//                 output += 1;
//             } else {
//                 output += 3;
//             }
//         }
//         return output;
//     } else {
//         return 0;
//     }
// }
int add_weight(int x) {
    if (x % 2 == 0) {
        return 1;
    }
    return 3;
}
int thing(int a, int b) {
    if (a <= b) {
        return 0;
    }

    int output = 0;
    for (int i = b; i < a; i++) {
        output += add_weight(i);
    }
    return output;
}

int main() {
    printf("%d", thing(5, 3));
}