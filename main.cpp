#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Create obj that store to give scenarios

// OBJ FOR DIFFERENT ENTRIES

    // START WITH VECTORS THOUGH, TUPLES



class aClass {
public:
    aClass() {
        m_className = "";
        m_grade = NULL;
        m_credits = 0;
    }
    aClass(string className, char classGrade, int classCredit) {
        m_className = className;
        m_grade = classGrade;
        m_credits = classCredit;
    }
    void setClassName(string className) {
        m_className = className;


    }

    void setGrade(char classGrade) {
        m_grade = classGrade;
    }
    void setCredits(int classCredit) {
        m_credits = classCredit;

    }


    aClass getaClass() {


    }
    string getClassName() {
        return m_className;
    }
    char getGrade() {
        return m_grade;
    }
    int getCredits() {
        return m_credits;
    }


private:
    string m_className="";
    char m_grade = NULL;
    int m_credits = 0;

};



void displayGrades() {
    cout << "1. Display Course List" << endl;
    cout << "2. " << endl;

}

int addClass() {

    string enterClassName = "";
    char enterGrade = NULL;
    int enterCredit = 0;

    cout << "Enter Course Name: " << endl;
    cin >> enterClassName;

    cout << "Enter Course Grade: " << endl;
    cin >> enterGrade;

    cout << "Enter Number of Credits: " << endl;
    cin >> enterCredit;

    return 0;
}


int calcGradePts() {

    return 0;
}

//int mainMenu() {
//    cout << "1. Display Course List" << endl;
//    cout << "2. " << endl;
//    cout << "" << endl;
//}

int mainMenu() {
    int usrSelection = -1;

    while (usrSelection >= 6 || usrSelection < 0)  {
        cout << "1. Display Course List" << endl;
        cout << "2. Add Class" << endl;
        cout << "3. Delete Class" << endl;
        cout << "4. Modify Class" << endl;

        cout << "0. Exit" << "\n" << "Selection:"<< endl;
        cin >> usrSelection;

    }

    return usrSelection;
}

int main() {

    vector<aClass*> classVector;


    std::cout << "Calculator" << std::endl;
    int menuNum = NULL;

    while (menuNum == NULL || menuNum != 0) {
        menuNum = mainMenu();

        if (menuNum == 1) {
    //        displayGrades();
            for(int i = 0; i < classVector.size(); i++) {
                cout << classVector[i]->getClassName() << endl;
                cout << classVector[i]->getGrade() << endl;
                cout << classVector[i]->getCredits() << endl << endl;

            }
        }
        else if (menuNum == 2) {
            string usrClassName = " ";
            char usrGrade = NULL;
            int usrCredits = NULL;

            cout << "Enter Course Name: " << endl;
            cin >> usrClassName;

            cout << "Enter Course Grade: " << endl;
            cin >> usrGrade;

            cout << "Enter Number of Credits: " << endl;
            cin >> usrCredits;
            aClass *newClass = new aClass{usrClassName, usrGrade, usrCredits};

    //        aClass newClass

            classVector.push_back(newClass);

    //        classVector.append(*newClass);
    //        addClass();
        }
    }



    return 0;
}
