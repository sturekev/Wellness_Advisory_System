/////////////////////////////////////////////////////////////////////////////////
// Name: Truong Phat Tu                                                        //
// Course: CSC 2510 CS II                                                      //
// Semester: Fall 2026                                                         //
// File name: WellnessAdvioryConstructor.h                                     //
// Descrption: Wellness Advisory Constructor Interface File                    //
// Referenace: Used AI to clarify syntax error handleign but wrote all logic   //
// independently learn from class note and reference ChatGPT for clarify doubt //
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <array>
#include <unordered_map>

using namespace std;

class WellnessAdvisor {


    public:
        WellnessAdvisor();
        void displayPatientInfo();
        void set_fever(bool has_fever);
        void set_cough(bool has_cough);
        void set_sore_throat(bool has_sore_throat);
        void set_nausea(bool has_nausea);
        void set_fatigue(bool has_fatigue);
        void preset_advisory_message();
        void collect_wellness_information();
        void WellnessSuggestion();
        void Wellness_system_run();
        string get_patient_name();
        string get_patient_medicare();
        bool get_fever();
        bool get_cough();
        bool get_sore_throat();
        bool get_nausea();
        bool get_fatigue();     
        array<string, 5> get_symptoms();

        void reset_symptoms();

    private:
        bool fever;
        bool cough;
        bool sore_throat;
        bool nausea;
        bool fatigue;
        std::unordered_map<std::string, array<string, 5>> wellness_suggestions;
};