/////////////////////////////////////////////////////////////////////////////////
// Name: Truong Phat Tu                                                        //
// Course: CSC 2510 CS II                                                      //
// Semester: Fall 2026                                                         //
// File name: WellnessAdvioryConstructor.cpp                                   //
// Descrption: Wellness Advisory Constructor Implementation File               //
// Referenace: Used AI to clarify syntax error handleign but wrote all logic   //
// independently learn from class note and reference ChatGPT for clarify doubt //
/////////////////////////////////////////////////////////////////////////////////
        // #include <iostream>
        // #include <string>
        // #include <array>
        // #include <unordered_map>
#include "WellnessAdvioryConstructor.h"
using namespace std;


WellnessAdvisor::WellnessAdvisor() {
    fever = false;
    cough = false;
    sore_throat = false;
    nausea = false;
    fatigue = false;
}


// Setter methods for the WellnessAdvisor class.
void WellnessAdvisor::set_fever(bool has_fever) {
            if (has_fever) {
                cout << "Setting fever to Yes" << endl;
            }
            else {
                cout << "Setting fever to No" << endl;
            }
            fever = has_fever;
        }
void WellnessAdvisor::set_cough(bool has_cough) {
            if (has_cough) {
                cout << "Setting cough to Yes" << endl;
            }
            else {
                cout << "Setting cough to No" << endl;
            }
            cough = has_cough;
        }
void WellnessAdvisor::set_sore_throat(bool has_sore_throat) {
            if (has_sore_throat) {
                cout << "Setting sore throat to Yes" << endl;
            }
            else {
                cout << "Setting sore throat to No" << endl;
            }
            sore_throat = has_sore_throat;
        }
void WellnessAdvisor::set_nausea(bool has_nausea) {
            if (has_nausea) {
                cout << "Setting nausea to Yes" << endl;
            }
            else {
                cout << "Setting nausea to No" << endl;
            }
            nausea = has_nausea;
        }
void WellnessAdvisor::set_fatigue(bool has_fatigue) {
            if (has_fatigue) {
                cout << "Setting fatigue to Yes" << endl;
            }
            else {
                cout << "Setting fatigue to No" << endl;
            }
            fatigue = has_fatigue;
        }

// Getter methods for the WellnessAdvisor class.

bool WellnessAdvisor::get_fever() {
            return fever;
        }
bool WellnessAdvisor::get_cough() {
            return cough;
        }
bool WellnessAdvisor::get_sore_throat() {
            return sore_throat;
        }
bool WellnessAdvisor::get_nausea() {
            return nausea;
        }
bool WellnessAdvisor::get_fatigue() {
            return fatigue;
        }
array<string, 5> WellnessAdvisor::get_symptoms() {
    return {
        get_fever() ? "Fever" : "",
        get_cough() ? "Cough" : "",
        get_sore_throat() ? "Sore Throat" : "",
        get_nausea() ? "Nausea" : "",
        get_fatigue() ? "Fatigue" : ""
    };
}
// =============================================== 
// Support functions
// =============================================== 
bool define_wellness_input(string input){
    if (input == "Y" || input == "Yes" || input == "y" || input == "yes") {
        return true;
    } else if (input == "N" || input == "No" || input == "n" || input == "no") {
        return false;
    } else {
        cout << "Invalid input. Please enter Y/Yes or N/No." << endl;
        return false;
    }
}

// =============================================== 
// System run
// =============================================== 

void WellnessAdvisor::displayPatientInfo() {
    cout << "Fever: " << (fever ? "Yes" : "No") << endl;
    cout << "Cough: " << (cough ? "Yes" : "No") << endl;
    cout << "Sore Throat: " << (sore_throat ? "Yes" : "No") << endl;
    cout << "Nausea: " << (nausea ? "Yes" : "No") << endl;
    cout << "Fatigue: " << (fatigue ? "Yes" : "No") << endl;
}
// Method to preset the advisory message for the WellnessAdvisor class.
void WellnessAdvisor::preset_advisory_message() {
            cout << "====================" << endl;
            cout << " Wellness Advisory System " << endl;
            cout << "====================" << endl;
            cout << "1. Enter Wellness Indicators" << endl;
            cout << "2. View Wellness Advisory" << endl;
            cout << "3. Reset Wellness Information" << endl;
            cout << "4. Exit" << endl;
        }

void WellnessAdvisor::collect_wellness_information() {
    cout << "Collecting wellness information..." << endl;
    cout << "Do you have a fever? (Y/Yes, N/No): ";
    string fever_input;
    cin >> fever_input;
    fever = define_wellness_input(fever_input);
    cout << "Do you have a cough? (Y/Yes, N/No): ";
    string cough_input;
    cin >> cough_input;
    cough = define_wellness_input(cough_input);
    cout << "Do you have a sore throat? (Y/Yes, N/No): ";
    string sore_throat_input;
    cin >> sore_throat_input;
    sore_throat = define_wellness_input(sore_throat_input);
    cout << "Do you have nausea? (Y/Yes, N/No): ";
    string nausea_input;
    cin >> nausea_input;
    nausea = define_wellness_input(nausea_input);
    cout << "Do you have fatigue? (Y/Yes, N/No): ";
    string fatigue_input;
    cin >> fatigue_input;
    fatigue = define_wellness_input(fatigue_input);
}

void WellnessAdvisor::WellnessSuggestion (){
    wellness_suggestions["general"] = {
        "1. Stay hydrated",
        "2. Get enough rest",
        "3. Maintain a balanced diet",
        "4. Exercise regularly",
        "5. Consult a healthcare professional if symptoms persist"
    };
    wellness_suggestions["Fever"] = {
    };
    wellness_suggestions["Cough"] = {};
    wellness_suggestions["Sore Throat"] = {};
    wellness_suggestions["Nausea"] = {};
    wellness_suggestions["Fatigue"] = {};
    array<string, 5> symptoms = get_symptoms();
    cout << "Collected symptoms: " << endl;
    for (const auto& symptom : symptoms) {
        if (!symptom.empty()) {
            cout << symptom << " ";
        }
    }
    cout << endl;
    for (const auto& symptom : symptoms) {
        if (!symptom.empty() && wellness_suggestions.find(symptom) != wellness_suggestions.end()) {
            cout << "Wellness suggestions for " << symptom << ":" << endl;
            for (const auto& suggestion : wellness_suggestions["general"]) {
                cout << suggestion << endl;
            }
        } 
    }
    cout << endl;
}

void WellnessAdvisor::reset_symptoms() {
            fever = false;
            cough = false;
            sore_throat = false;
            nausea = false;
            fatigue = false;
            wellness_suggestions.clear();
            cout << "Symptoms and wellness suggestions have been cleared." << endl << endl;
        }
void WellnessAdvisor::Wellness_system_run() {
        int choice = 0;
        while (choice != 4) {
            preset_advisory_message();
            cout << "Enter your choice: ";
            cin >> choice ;
            cout << endl;
            // handle choice not int
            if(cin.fail()) {
                cin.clear(); // clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                cout << "Invalid input. Please enter a number." << endl;
                choice = 0;
                continue;
            }
            switch (choice) {
                case 1:

                    collect_wellness_information();
                    break;
                case 2:
                    // View Wellness Advisory
                    WellnessSuggestion();
                    break;
                case 3:
                    reset_symptoms();
                    cout << "Wellness information has been reset." << endl;
                    break;
                case 4:
                    cout << "Exiting Wellness Advisory System." << endl;
                    cout << "Thank you for using the Wellness Advisory System." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    choice = 0;
                    break;
            }

    }
}