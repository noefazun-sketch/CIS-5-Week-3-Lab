#include <iostream>
#include <string>

// Lab 3 — Noe Zuniga
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO: declare and initialize on the same line
   std::string name = "Noe Zuniga";
  int age = 19;
  double height_m = 1.78;
  char initial = 'N';
  bool student = true;

  std::cout << "=== About me ===\n";
  // Lable Prints from the varible names + current_Year
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Height (m): " << height_m << "\n";
  std::cout << "Initial: " << initial << "\n";
  std::cout << "Student: " << student << "\n";
  std::cout << "Year: " << CURRENT_YEAR << "\n";
 
  
  return 0;
}
