#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  char userChoice;
  int luckyStrikes = 5, camels = 7, gauloises = 1, pallMalls = 6;
  int quarters = 0;
  float machine = 24.50;
  bool cont = true;
  cout << "s - report the machine status" << endl;
  cout << "d - drop in a quarter" << endl;
  cout << "1 - pull the 1st knob" << endl;
  cout << "2 - pull the 2nd knob" << endl;
  cout << "3 - pull the 3rd knob" << endl;
  cout << "4 - pull the 4th knob" << endl;
  cout << "r - restock the machine" << endl;
  cout << "q - quit" << endl;
  while (cont) {
    cin >> userChoice;
    if (userChoice == 's') {
      cout << "1: " << luckyStrikes << " packs of Lucky Strikes" << endl;
      cout << "2: " << camels << " packs of Camels" << endl;
      cout << "3: " << gauloises << " packs of Gauloises" << endl;
      cout << "4: " << pallMalls << " packs of Pall Malls" << endl;
      cout << "You have " << quarters << " quarters to spend" << endl;
      cout << "There is $" << fixed << setprecision(2) << machine << " in the machine" << endl;
    } else if (userChoice == 'd') {
      cout << "ching" << endl;
      quarters = (quarters + 1);
    } else if (userChoice == 'r') {
      cout << "A grouchy-looking attendant shows up and restocks the machine." << endl;
      luckyStrikes = 10;
      camels = 10;
      gauloises = 10;
      pallMalls = 10;
      quarters = 0;
      machine = 0.00;

    } else if (userChoice == 'q') {
      cout << "So long!" << endl;
      cont = false;
    }
    else if (userChoice == '1') {
      if (quarters >= 3 && luckyStrikes != 0) {
        cout << "A pack of Lucky Strikes slides into view. It's your lucky day!" << endl;
        luckyStrikes--;
        machine = machine + (quarters * .25);
        quarters = 0;
      } else if (quarters < 3) {
        cout << "(nothing happens)" << endl;
      } else if (luckyStrikes == 0) {
        cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        machine = machine + (quarters * .25);
        quarters = 0;
      }
    }
    else if (userChoice == '2') {
      if (quarters >= 3 && camels != 0) {
        cout << "A pack of Camels slides into view. Watch out, they spit!" << endl;
        camels--;
        machine = machine + (quarters * .25);
        quarters = 0;
      } else if (quarters < 3) {
        cout << "(nothing happens)" << endl;
      } else if (camels == 0) {
        cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        machine = machine + (quarters * .25);
        quarters = 0;
      }
    }
    else if (userChoice == '3') {
      if (quarters >= 3 && gauloises != 0) {
        cout << "A pack of Gauloises slides into view. Gauloises? Really?" << endl;
        gauloises--;
        machine = machine + (quarters * .25);
        quarters = 0;
      } else if (quarters < 3) {
        cout << "(nothing happens)" << endl;
      } else if (gauloises == 0) {
        cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        machine = machine + (quarters * .25);
        quarters = 0;
      }
    }
    else if (userChoice == '4') {
      if (quarters >= 3 && pallMalls != 0) {
        cout << "A pack of Pall Malls slides into view. They rhyme!" << endl;
        pallMalls--;
        machine = machine + (quarters * .25);
        quarters = 0;
      } else if (quarters < 3) {
        cout << "(nothing happens)" << endl;
      } else if (pallMalls == 0) {
        cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        machine = machine + (quarters * .25);
        quarters = 0;
      }
    }
    else{
      cout << "I do not understand." << endl;
    }
  }

  return 0;
}
