#include <iostream>
#include <cstdio>

void tower_of_hanoi( int, char, char, char );

class TowerOfHanoi {
    public:
        int n;
        char from;
        char to;
        char aux;

        TowerOfHanoi(int n, char from, char to, char aux) {
            this->n = n;
            this->from = from;
            this->to = to;
            this->aux = aux;
            tower_of_hanoi(n, from, to, aux);
        }

    private:
        void tower_of_hanoi( int n, char from, char to, char aux ) {
            if ( n == 1 ) {
                printf("move disk 1 from %c to %c\n", from, to);
                return;
            }
            tower_of_hanoi(n-1, from, aux, to);
            printf("move the disk %d from %c to %c\n", n, from, to);
            tower_of_hanoi(n-1, aux, to, from);
        }

};

int main() {
    int n;
    std::cin >> n;
    TowerOfHanoi th = TowerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}


