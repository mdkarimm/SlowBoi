#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_STUDENTS = 4;
    const int NUM_SCORES = 3;
    
   
    string studentName;
    double score1, score2, score3;
    
   
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter student name " << (i + 1) << ": ";
        getline(cin, studentName);
        int j = 0;
        double sum = 0.0;
        do {
            cout << "Enter test score " << (j + 1) << " for " << studentName << ": ";
            if (j == 0) {
                cin >> score1;
                sum += score1;
            } else if (j == 1) {
                cin >> score2;
                sum += score2;
            } else if (j == 2) {
                cin >> score3;
                sum += score3;
            }
            j++;
        } while (j < NUM_SCORES);
      
        cin.ignore();
        
        
        double average = sum / NUM_SCORES;
        
       
        cout << "Average score for " << studentName << ": " << fixed << setprecision(2) << average << endl;
        cout << endl;
    }
    
    return 0;
}
