#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

class User {
protected:
    string name, department;
    int age;
public:
    virtual void menu() = 0;
};

// ===================== UTILITY FUNCTIONS =====================
void showDailyReminder() {
    ifstream fin("quotes.txt");
    vector<string> quotes;
    string line;

    // Create default quotes file if not found
    if (!fin) {
        ofstream fout("quotes.txt");
        fout << "Believe you can and you're halfway there.\n";
        fout << "Your mental health is a priority, not a luxury.\n";
        fout << "Small steps every day lead to big changes.\n";
        fout << "You are stronger than you think.\n";
        fout << "Breathe. Let go. You are doing your best.\n";
        fout.close();
        fin.open("quotes.txt");
    }

    while (getline(fin, line)) {
        if (!line.empty())
            quotes.push_back(line);
    }
    fin.close();

    if (!quotes.empty()) {
        srand(time(0));
        int idx = rand() % quotes.size();
        cout << "\n Daily Wellness Reminder:\n";
        cout << "\"" << quotes[idx] << "\"\n";
    }
}

// ===================== STUDENT CLASS =====================
class Student : public User {
private:
    int score;

    int getPointsFromFile() {
        ifstream fin(name + "_points.txt");
        int pts = 0;
        if (fin)
            fin >> pts;
        fin.close();
        return pts;
    }

    void updatePoints(int points) {
        int current = getPointsFromFile();
        int total = current + points;
        ofstream fout(name + "_points.txt");
        fout << total;
        fout.close();
    }

    bool hasBookedSlot() {
        ifstream fin("bookings.txt");
        string line;
        while (getline(fin, line)) {
            if (line.find(name) != string::npos)
                return true;
        }
        return false;
    }

public:
    void registerStudent() {
        cout << "\nEnter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Department: ";
        getline(cin >> ws, department);

        ofstream fout("students.txt", ios::app);
        fout << name << "," << age << "," << department << endl;
        fout.close();

        cout << "\n Registration Successful!\n";
    }

    void takeTest() {
        cout << "\n===== Mental Health Self Assessment =====\n";
        int ans, total = 0;
        string q[] = {
            "Do you feel stressed frequently? (1-5)",
            "Do you get enough sleep regularly? (1-5)",
            "Do you feel motivated for studies? (1-5)",
            "Do you talk about your feelings? (1-5)",
            "Do you take breaks and relax? (1-5)"
        };
        cout << "Rate 1 (rarely) to 5 (always):\n";

        for (int i = 0; i < 5; i++) {
            cout << q[i] << ": ";
            cin >> ans;
            total += ans;
        }
        score = total;
        saveResult();
        showRecommendation();
    }

    void saveResult() {
        ofstream fout("results.txt", ios::app);
        fout << name << "," << score << endl;
        fout.close();
    }

    void showRecommendation() {
        cout << "\n===== Result =====\n";
        if (score <= 10)
            cout << "  You may be experiencing high stress. Try to relax, talk to friends or seek help.\n";
        else if (score <= 18)
            cout << " Moderate stress. Maintain good habits and balance study/life.\n";
        else
            cout << " You seem mentally balanced. Keep up your positive routine!\n";
    }

    // ===================== TASK & REWARD SYSTEM =====================
    void showTasks() {
        cout << "\n===== Wellness Tasks =====\n";
        cout << "1. Take a 15-minute walk outside. (+10 points)\n";
        cout << "2. Write 3 things you’re grateful for. (+15 points)\n";
        cout << "3. Talk with a friend today. (+10 points)\n";
        cout << "4. Meditate for 10 minutes. (+20 points)\n";
        cout << "5. Avoid screen time for 1 hour before bed. (+15 points)\n";

        int choice;
        cout << "\nEnter the number of the task you completed (0 to cancel): ";
        cin >> choice;
        if (choice == 0) return;

        int pointsEarned = 0;
        switch (choice) {
            case 1: pointsEarned = 10; break;
            case 2: pointsEarned = 15; break;
            case 3: pointsEarned = 10; break;
            case 4: pointsEarned = 20; break;
            case 5: pointsEarned = 15; break;
            default: cout << "Invalid task.\n"; return;
        }

        char confirm;
        cout << "Mark this task as completed? (y/n): ";
        cin >> confirm;
        if (confirm == 'y' || confirm == 'Y') {
            updatePoints(pointsEarned);
            cout << "\n Great job! You earned " << pointsEarned << " points.\n";
        }
    }

    void viewPoints() {
        int pts = getPointsFromFile();
        cout << "\n===== Your Total Points =====\n";
        cout << " " << pts << " points\n";
        if (pts < 50)
            cout << "Keep going! Every step counts.\n";
        else if (pts < 100)
            cout << "Nice work! You’re maintaining great habits.\n";
        else
            cout << " You’re a Wellness Champion! Inspire others too.\n";
    }

    // ===================== COUNSELOR BOOKING SYSTEM =====================
    void bookCounselorSlot() {
        cout << "\n===== Counselor Schedule Booking =====\n";

        if (hasBookedSlot()) {
            cout << " You already have a booked slot. Please contact admin to modify.\n";
            return;
        }

        // Predefined available slots
        vector<string> slots = {
            "Monday 10:00 AM - 11:00 AM",
            "Tuesday 2:00 PM - 3:00 PM",
            "Wednesday 11:00 AM - 12:00 PM",
            "Thursday 3:00 PM - 4:00 PM",
            "Friday 1:00 PM - 2:00 PM"
        };

        for (int i = 0; i < slots.size(); i++)
            cout << i + 1 << ". " << slots[i] << endl;

        int choice;
        cout << "\nEnter slot number to book (0 to cancel): ";
        cin >> choice;

        if (choice < 1 || choice > slots.size()) {
            cout << " Invalid or cancelled booking.\n";
            return;
        }

        ofstream fout("bookings.txt", ios::app);
        fout << name << " booked: " << slots[choice - 1] << endl;
        fout.close();

        cout << "\n Booking Confirmed for " << slots[choice - 1] << "!\n";
    }

    // ===================== STUDENT MENU =====================
    void menu() override {
        cout << "\n===== Welcome, Student =====\n";
        showDailyReminder();

        cout << "\nEnter your name to continue: ";
        getline(cin >> ws, name);

        int choice;
        do {
            cout << "\n===== Student Menu =====";
            cout << "\n1. Register";
            cout << "\n2. Take Assessment";
            cout << "\n3. View / Complete Wellness Tasks";
            cout << "\n4. Check Points";
            cout << "\n5. Book Counselor Slot";
            cout << "\n6. Exit";
            cout << "\nEnter choice: ";
            cin >> choice;
            cin.ignore();

            switch (choice) {
                case 1: registerStudent(); break;
                case 2: takeTest(); break;
                case 3: showTasks(); break;
                case 4: viewPoints(); break;
                case 5: bookCounselorSlot(); break;
                case 6: cout << "\nLogging out...\n"; break;
                default: cout << "Invalid choice.\n";
            }
        } while (choice != 6);
    }
};

// ===================== ADMIN CLASS =====================
class Admin : public User {
public:
    void viewAllRecords() {
        string line;
        ifstream fin("results.txt");
        cout << "\n===== All Student Results =====\n";
        if (!fin) {
            cout << "No records found.\n";
            return;
        }
        while (getline(fin, line))
            cout << line << endl;
        fin.close();
    }

    void viewAllStudents() {
        string line;
        ifstream fin("students.txt");
        cout << "\n===== Registered Students =====\n";
        if (!fin) {
            cout << "No students found.\n";
            return;
        }
        while (getline(fin, line))
            cout << line << endl;
        fin.close();
    }

    void viewBookings() {
        string line;
        ifstream fin("bookings.txt");
        cout << "\n===== Counselor Bookings =====\n";
        if (!fin) {
            cout << "No bookings found.\n";
            return;
        }
        while (getline(fin, line))
            cout << line << endl;
        fin.close();
    }

    void clearBookings() {
        ofstream fout("bookings.txt", ios::trunc);
        fout.close();
        cout << "\n✅ All counselor bookings cleared successfully.\n";
    }

    void menu() override {
        int ch;
        do {
            cout << "\n===== Admin Menu =====";
            cout << "\n1. View All Student Records";
            cout << "\n2. View Registered Students";
            cout << "\n3. View Counselor Bookings";
            cout << "\n4. Clear All Bookings";
            cout << "\n5. Exit";
            cout << "\nEnter choice: ";
            cin >> ch;

            switch (ch) {
                case 1: viewAllRecords(); break;
                case 2: viewAllStudents(); break;
                case 3: viewBookings(); break;
                case 4: clearBookings(); break;
                case 5: cout << "\nLogging out...\n"; break;
                default: cout << "Invalid.\n";
            }
        } while (ch != 5);
    }
};

// ===================== MAIN FUNCTION =====================
int main() {
    cout << "\n===== Digital Mental Health Support System =====\n";
    int userType;
    cout << "Login as:\n1. Student\n2. Admin\nChoice: ";
    cin >> userType;
    cin.ignore();

    User *u;
    if (userType == 1)
        u = new Student();
    else
        u = new Admin();

    u->menu();
    delete u;

    cout << "\nThank you for using the system!\n";
    return 0;
}