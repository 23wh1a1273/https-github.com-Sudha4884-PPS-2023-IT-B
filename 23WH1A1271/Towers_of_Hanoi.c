#include <stdio.h>
void towerOfHanoi(int n, char a, char b, char c) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", a, c);
        return;
    }
    towerOfHanoi(n - 1,a, c, b);
    printf("Move disk %d from %c to %c\n", n, a, c);
    towerOfHanoi(n - 1, b, a, c);
}
int main() {
    int num;
    printf("Enter the number of disks: ");
    scanf("%d", &num);
    towerOfHanoi(num, 'A', 'B', 'C');
    return 0;
}
