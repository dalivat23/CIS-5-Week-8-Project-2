#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 54; // change this number c, keep at line 5

// Project 2 — Tristan Daliva
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 72; // change this number c, keep at line 15

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 41; // change this number c, keep at line 20

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 60; // change this number c, keep at line 27
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  int A = 0;
  int B = 0;
  int C = 0;
  int D = 0;
  int F = 0;

  // TODO: print each index and scores[i]
  
  std::cout << "Student Scores" << std::endl;
  for (int i = 0; i < N; i++) 
    {
      std::cout << "[" << i << "] " << scores[i] << " " << std::endl;
    }


  // TODO: one for loop. Count A, B, C, D, and failing.
 for (int i = 0; i < N; i++)
    {
      if ( scores[i] >= 90)
        {
          A++;
        }
      
      else if ( scores[i] >= 80)
        {
          B++;
        }
      
      else if ( scores[i] >= 70)
        {
          C++;
        }

      else if ( scores[i] >= 60)
        {
          D++;
        }
      
      else
        {
          F++;
        }
    }
    
  // 90 and up is A. 80 to 89 is B. 70 to 79 is C. 60 to 69 is D.
  // Below 60 is failing. A score of 60 is a D.
  // Print A:, B:, C:, D:, and F:. The five totals add up to 30.
  
  std::cout 
    << std::endl
    << "Grade Totals" << std::endl
    << "A: " << A << std::endl 
    << "B: " << B << std::endl 
    << "C: " << C << std::endl 
    << "D: " << D << std::endl 
    << "F: " << F << std::endl
    << std::endl
    << "The " << F << " Students who need to go to office hours" << std::endl;

  // TODO: one while loop. If scores[i] is under 60, print:
    int i = 0;
  while (i < 30)
    if (scores[i] < 60)
      {
        std::cout << "Student at index " << i << " needs to come to office hours" << std::endl;
        ++i;
      }
    else
      {
        ++i;
      }
  // Student at index i needs to come to office hours.
  
 
  // Put ++i in the loop or it never ends.

  return 0;
}
