//Programmer: Sophia Bhoria
//Date: 09/09/2024
//Purpose: To create a C++ program that guides users through life lessons while applying key programming concepts like calculations, string handling, and formatted output.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Chapter 1:
const double PI = 3.14159265;
const double EARTH_GRAVITY = 9.80665; // m/s^2
const string WISDOM = "Love, Kindness, and Integrity. And always eat your vegetables!";

//Chapter 2:
int main(){
  int strs;

  cout << "How many stories did your grandparents tell you? ";
  cin >> strs;

  int hrs = 5;
  int mins = 20;
  int ttl_mins = strs *(hrs*60 + mins);
  int ttl_hrs = ttl_mins/60;
  int min_lef = ttl_mins % 60;

  cout << "The total story telling was " << ttl_hrs << " hours and " << min_lef << " minutes long." << endl;

  //chapter 3: 
  double dia;

  cout << "Enter the diameter of the life's circle that you would like to draw: ";
  cin >> dia;

  double rad = dia/2;
  double circum = 2 * PI * rad;
  double area = PI * rad * rad;

  cout << "Circumference of circle: " << circum << endl;
  cout << "Area of the circle:  " << area << endl;

  // chapter 4:
  char the_char;
  cout << "Please enter a character: ";
  cin >> the_char;

  int ascii_val = static_cast<int>(the_char);

  cout << "THe ASCII value of " << the_char << " is " << ascii_val << "." << endl;
  cin.ignore();

  string sentence;
  cout << "Please make a sentence using the give character of '" << the_char << "' and its ASCII value of " << ascii_val << ".";
  getline(cin, sentence);
  cout << "\t" << sentence << endl;

  // chapter 5:
  bool truth;
  int user_input;

  cout << "Enter a number. Let's see how true it is in the world: ";
  cin >> user_input;

  truth = (user_input != 0);

  cout << "Truthiness of " << user_input << " in the computer world: " << (truth * EARTH_GRAVITY) << endl;

  // chapter 6:
  string first_word;

  cout << "What's your child's first word going to be? ";
  cin.ignore();
  getline(cin, first_word);

  string legacy_message = "Your child's legacy will be tied with " + first_word + " and the " + WISDOM + " values.";
  cout << legacy_message << endl;

  //chapter 7;
  int usd_amt;

  cout << "Please enter the USD amount that you want to convert to ACD: ";
  cin >> usd_amt;

  double acd_amt = (usd_amt / 2) * 0.85;

  cout << fixed << setprecision(2);

  cout << "Your " << usd_amt << " USD is equal to " << acd_amt << " ACD in Academia world." << endl;

  return 0;
  
}
