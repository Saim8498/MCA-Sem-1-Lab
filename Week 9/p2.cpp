#include <iostream>
using namespace std;

//Recursive function
void recursiveHanoi(int n, char source, char aux, char dest){
    if (n == 1){
        cout << "Move disk 1 from " << source
             << " to " << dest << endl;
        return;
    }

    recursiveHanoi(n - 1, source, dest, aux);

    cout << "Move disk " << n << " from "
         << source << " to " << dest << endl;

    recursiveHanoi(n - 1, aux, source, dest);
}

//Function to perform one legal move
void moveDisk(int rod[3][10], int top[3], int a, int b){
    if (top[a] == -1){
        rod[a][++top[a]] = rod[b][top[b]--];
        cout << "Move disk from " << char('A' + b)
             << " to " << char('A' + a) << endl;
    }
    else if (top[b] == -1){
        rod[b][++top[b]] = rod[a][top[a]--];
        cout << "Move disk from " << char('A' + a)
             << " to " << char('A' + b) << endl;
    }
    else if (rod[a][top[a]] < rod[b][top[b]]){
        rod[b][++top[b]] = rod[a][top[a]--];
        cout << "Move disk from " << char('A' + a)
             << " to " << char('A' + b) << endl;
    }
    else{
        rod[a][++top[a]] = rod[b][top[b]--];
        cout << "Move disk from " << char('A' + b)
             << " to " << char('A' + a) << endl;
    }
}

//Non-recursive function
void iterativeHanoi(int n){
    int rod[3][10] = {};
    int top[3] = {n - 1, -1, -1};

    for (int i = 0; i < n; i++)
        rod[0][i] = n - i;

    int total = (1 << n) - 1;

    for (int i = 1; i <= total; i++){
        if (n % 2 == 1){
            if (i % 3 == 1)
                moveDisk(rod, top, 0, 2);
            else if (i % 3 == 2)
                moveDisk(rod, top, 0, 1);
            else
                moveDisk(rod, top, 1, 2);
        }
        else{
            if (i % 3 == 1)
                moveDisk(rod, top, 0, 1);
            else if (i % 3 == 2)
                moveDisk(rod, top, 0, 2);
            else
                moveDisk(rod, top, 1, 2);
        }
    }
}

int main(){
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n < 1 || n > 10){
        cout << "Enter disks between 1 and 10.";
        return 0;
    }

    cout << "\nRecursive Solution:\n";
    recursiveHanoi(n, 'A', 'B', 'C');

    cout << "\nNon-Recursive Solution:\n";
    iterativeHanoi(n);

    return 0;
}