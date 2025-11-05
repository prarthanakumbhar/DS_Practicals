
//Part A: Game Development
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of players: ";
    cin >> n;
    
    int player[20];
    cout << "Enter the scores for players:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> player[i];
    }
    
    cout << "\nStarting Level-Up Process (Bubble Sort)...\n";
    for (int i = 0; i < n - 1; i++) {
        cout << "\nLevel " << i + 1 << ":\n";
        for (int j = 0; j < n - i - 1; j++) {
            if (player[j] > player[j + 1]) {
                cout << "Swapping score " << player[j]
                     << " with " << player[j + 1]
                     << " – Leveling up!\n";
                int temp = player[j];
                player[j] = player[j + 1];
                player[j + 1] = temp;
            }
        }
    }
    
    cout << "\nLevel Complete! Final Sorted Scores:\n";
    for (int i = 0; i < n; i++) {
        cout << "Score " << i + 1 << ": " << player[i] << endl;
    }
    
    return 0;
}


```

**Output (example with 5 players):**
```
Enter the number of players: 5
Enter the scores for players:
Score 1: 85
Score 2: 42
Score 3: 91
Score 4: 30
Score 5: 67

Starting Level-Up Process (Bubble Sort)...

Level 1:
Swapping score 85 with 42 – Leveling up!
Swapping score 85 with 67 – Leveling up!

Level 2:
Swapping score 42 with 30 – Leveling up!
Swapping score 85 with 67 – Leveling up!

Level 3:
Swapping score 42 with 30 – Leveling up!
Swapping score 85 with 67 – Leveling up!

Level 4:
Swapping score 42 with 30 – Leveling up!

Level Complete! Final Sorted Scores:
Score 1: 30
Score 2: 42
Score 3: 67
Score 4: 85
Score 5: 91 
