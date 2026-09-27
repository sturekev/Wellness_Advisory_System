/////////////////////////////////////////////////////////////////////////////////
// Name: Truong Phat Tu                                                        //
// Course: CSC 2510 CS II                                                      //
// Semester: Fall 2026                                                         //
// File name: Employee.h                                                       //
// Descrption: Employee Object Interface File                                  //
// Referenace: Used AI to clarify syntax error handleign but wrote all logic   //
// independently learn from class note and reference ChatGPT for clarify doubt //
/////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Name: Truong Phat Tu                                                        //
// Course: CSC 2510 CS II                                                      //
// Semester: Fall 2026                                                         //
// File name: Employee.cpp                                                     //
// Descrption: Employee Object Implementation File                             //
// Referenace: Used AI to clarify syntax error handleign but wrote all logic   //
// independently learn from class note and reference ChatGPT for clarify doubt //
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class WellnessAdvisor {\


    public:
        WellnessAdvisor(string name, string medicare) {
            patient_name = name;
            patient_medicare = medicare;
            fever = false;
            cough = false;
            sore_throat = false;
            nausea = false;
            fatigue = false;
        }
        void displayPatientInfo() {
            cout << "Patient Name: " << patient_name << endl;
            cout << "Patient Medicare: " << patient_medicare << endl;
            cout << "Fever: " << (fever ? "Yes" : "No") << endl;
            cout << "Cough: " << (cough ? "Yes" : "No") << endl;
            cout << "Sore Throat: " << (sore_throat ? "Yes" : "No") << endl;
            cout << "Nausea: " << (nausea ? "Yes" : "No") << endl;
            cout << "Fatigue: " << (fatigue ? "Yes" : "No") << endl;
        }
        void set_patient_name(string name) {
            if (name.empty()) {
                patient_name = "Unknown";
            }
            else if (name.length() >50) {
                patient_name = "Unknown";
            }
            else if (name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ") != string::npos) {
                patient_name = "Unknown";
            }
            else {
                patient_name = name;
            }
        }
        void set_patient_medicare(string medicare) {
            if (medicare.empty()) {
                patient_medicare = "Unknown";
            }
            else if (medicare.length() > 11) {
                patient_medicare = "Unknown";
            }
            else if (medicare.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != string::npos) {
                patient_medicare = "Unknown";
            }
            else {
                patient_medicare = medicare;
            }
        }
        void set_fever(bool has_fever) {
            if (has_fever) {
                cout << "Setting fever to Yes" << endl;
            }
            else {
                cout << "Setting fever to No" << endl;
            }
            fever = has_fever;
        }
        void set_cough(bool has_cough) {
            if (has_cough) {
                cout << "Setting cough to Yes" << endl;
            }
            else {
                cout << "Setting cough to No" << endl;
            }
            cough = has_cough;
        }
        void set_sore_throat(bool has_sore_throat) {
            if (has_sore_throat) {
                cout << "Setting sore throat to Yes" << endl;
            }
            else {
                cout << "Setting sore throat to No" << endl;
            }
            sore_throat = has_sore_throat;
        }
        void set_nausea(bool has_nausea) {
            if (has_nausea) {
                cout << "Setting nausea to Yes" << endl;
            }
            else {
                cout << "Setting nausea to No" << endl;
            }
            nausea = has_nausea;
        }
        void set_fatigue(bool has_fatigue) {
            if (has_fatigue) {
                cout << "Setting fatigue to Yes" << endl;
            }
            else {
                cout << "Setting fatigue to No" << endl;
            }
            fatigue = has_fatigue;
        }
        void preset_advisory_message() {
            cout << "====================" << endl;
            cout << " Wellness Advisory System " << endl;
            cout << "====================" << endl;
            cout << "1. Enter Wellness Information" << endl;
            cout << "2. Enter Wellness Indicators" << endl;
            cout << "3. View Wellness Advisory" << endl;
            cout << "4. Reset Wellness Information" << endl;
            cout << "5. Exit" << endl;
        }

        void advisory_message() {
            array<string, 5> messages = {
                "1. Stay hydrated",
                "2. Get enough rest",
                "3. Maintain a balanced diet",
                "4. Exercise regularly",
                "5. Consult a healthcare professional if symptoms persist"
            };
            for (const auto& message : messages) {
                cout << message << endl;
            }
        }
        void collect_wellness_information() {}
        void Wellness_system_run() {
            int case= 4;
            while (case != 5) {
                preset_advisory_message();
                cout << "Enter your choice: ";
                cin >> case;
                switch (case) {
                    case 1:
                        collect_wellness_information();
                        break;
                    case 2:
                        // Enter Wellness Indicators
                        collect_wellness_information();
                        break;
                    case 3:
                        // View Wellness Advisory
                        advisory_message();
                        break;
                    case 4:
                        reset_patient_info();
                        cout << "Wellness information has been reset." << endl;
                        break;
                    case 5:
                        cout << "Exiting Wellness Advisory System." << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }

        }
        string get_patient_name() {
            return patient_name;
        }
        string get_patient_medicare() {
            return patient_medicare;
        }
        bool get_fever() {
            return fever;
        }
        bool get_cough() {
            return cough;
        }
        bool get_sore_throat() {
            return sore_throat;
        }
        bool get_nausea() {
            return nausea;
        }
        bool get_fatigue() {
            return fatigue;
        }

        void reset_symptoms() {
            fever = false;
            cough = false;
            sore_throat = false;
            nausea = false;
            fatigue = false;
        }
        void reset_patient_info() {
            patient_name = "";
            patient_medicare = "";
            reset_symptoms();
        }

    private:
        string patient_name;
        string patient_medicare;
        bool fever;
        bool cough;
        bool sore_throat;
        bool nausea;
        bool fatigue;
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
