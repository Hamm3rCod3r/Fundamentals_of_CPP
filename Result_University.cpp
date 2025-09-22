#include "iostream"
using namespace std;
void main()
{


    float examScore, courseworkScore, attendancePercentage;
    int courseType;

    cout << "Enter exam score(out of 100):";
    cin >> examScore;
    cout << "Enter course work score (out of 100):";
    cin >> courseworkScore;
    cout << "Enter Attendance Percentage";
    cin >> attendancePercentage;
    cout << "Enter Course type  (1 for CS course, 2 for Business course and 3 for arts course): ";
    cin >> courseType;


    float totalScore = (examScore * 0.7) + (courseworkScore * 0.2) + (attendancePercentage * 0.1);



    bool passed = false;
    if (courseType == 1) {
        if (totalScore >= 60 && examScore >= 50 && attendancePercentage >= 80) {
            passed = true;
        }
    }
    else if (courseType == 2) {
        if (totalScore >= 55 && examScore >= 45 && attendancePercentage >= 70) {
            passed = true;
        }
    }
    else {
        if (totalScore >= 50 && examScore >= 40 && attendancePercentage >= 60) {
            passed = true;
        }
    }

    string grade;
    if (passed) {
        grade = "Passed";

        if (totalScore > 90) {
            totalScore += 5;
            if (totalScore > 100) {
                totalScore = 100;
            }
        }
    }
    else {
        grade = "fail";
    }


    cout << "Total Score: " << totalScore << endl;
    if (totalScore > 95) {
        cout << "Grade:  special distinctions";
    }
    else {
        cout << "Grade: " << grade;
    }




}
