#include <iostream>
using namespace std;

// Variables
int accidents,
    northAccidents,
    southAccidents,
    eastAccidents,
    westAccidents,
    centralAccidents;

// Asks for number of accidents and validates input.
int getNumAccidents() {
    cout << "Enter the number of accidents "
            "during last year: ";
    cin >> accidents;
    while (accidents < 0) {
        cout << "Error: Accident amount cannot be less than 0.\n"
                "Enter a valid amount of accidents: ";
        cin >> accidents;
    }
}

// Compares region amounts
void findLowest() {
    // Prints results
    cout << "North region amount of accidents: " << northAccidents << endl;
    cout << "South region amount of accidents: " << southAccidents << endl;
    cout << "East region amount of accidents: " << eastAccidents << endl;
    cout << "West region amount of accidents: " << westAccidents << endl;
    cout << "Central region amount of accidents: " << centralAccidents << endl;

    // If North has least amount
    if (northAccidents < southAccidents &&
        northAccidents < eastAccidents &&
        northAccidents < westAccidents &&
        northAccidents < centralAccidents)
    {
        cout << "The North region had the lowest "
                "amount of accidents with ";
        cout << northAccidents << " accident(s).";
    }

    // If South has least amount
    else if (southAccidents < northAccidents &&
             southAccidents < eastAccidents &&
             southAccidents < westAccidents &&
             southAccidents < centralAccidents)
    {
        cout << "The South region had the lowest "
                "amount of accidents with ";
        cout << southAccidents << " accident(s).";
    }

    // If East has least amount
    else if (eastAccidents < northAccidents &&
             eastAccidents < southAccidents &&
             eastAccidents < westAccidents &&
             eastAccidents < centralAccidents)
    {
        cout << "The East region had the lowest "
                "amount of accidents with ";
        cout << eastAccidents << " accident(s).";
    }

    // If West has least amount
    else if (westAccidents < northAccidents &&
             westAccidents < southAccidents &&
             westAccidents < eastAccidents &&
             westAccidents < centralAccidents)
    {
        cout << "The West region had the lowest "
                "amount of accidents with ";
        cout << westAccidents << " accident(s).";
    }

    // If Central has least amount
    else {
        cout << "The Central region had the lowest "
                "amount of accidents with ";
        cout << centralAccidents << " accident(s).";
    }
}

// Adds the amount of accidents to each region.
int main() {
    // North
    cout << "For the north region:\n";
    getNumAccidents();
    northAccidents += accidents;

    // South
    cout << "For the south region:\n";
    getNumAccidents();
    southAccidents += accidents;

    // East
    cout << "For the east region:\n";
    getNumAccidents();
    eastAccidents += accidents;

    // West
    cout << "For the west region:\n";
    getNumAccidents();
    westAccidents += accidents;

    // Central
    cout << "For the central region:\n";
    getNumAccidents();
    centralAccidents += accidents;

    // Calls function to find which region had the lowest amount.
    findLowest();

    return 0;
}