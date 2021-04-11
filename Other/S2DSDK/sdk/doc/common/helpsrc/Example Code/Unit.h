#ifndef _UNIT_H_
#define _UNIT_H_


// standard headers
//#include <stdio.h>
#include <math.h>

//tmath headers
#include "tmath.h"
#include "c.hpp"



/** \unit "UnitGert"
!Unit: A place to describe and list related free functions.
From time to time functions or enums or other symbols need to be accessible in 
the global namespace. Sometimes these symbols are needed by a single class and 
should therefore be defined in the header file of the class. In this case the 
symbols will be reflected in the class documentation on the "Related" tab.

Sometimes however, symbols form a logical unit, offering functionality used by a 
number of classes in or even outside the library. In this case, the symbols should 
be defined in their own header file, and this file }could} be documented using the 
$\\unit$ tag. 

This will cause an entry to be created in the Units section of the 
navigation bar and separate pages containing description, lists of the various symbol 
types and pages for each symbol in the unit to be created and reachable through the 
Unit entry. }#This is also very useful for ANSI C programs!}#


!Here is how to do it:
\code
/*
\unit
!Headline introducing the unit.
This unit contains  ... etc.
\endds_doc

/// Typedef in a unit
typedef std::vec<int>   TypedefInUnit;
 
/// Function in a unit 1
void UnitFunction1();

/// Function in a unit 2
void UnitFunction2();


/// Class in a unit, also on normal classlist
class ClassInUnit
{};
\endcode


\note Members belonging to a unit is still shown on the "Globals"-tab as well as
      on the units "Overview"-tab.
\note A unit may even contain classes, in which case the classes will still 
      appear in the classes list and on the navigation menu to the right.
*/

/// Typedef in a unit
typedef std::vec<int>   TypedefInUnit;
 
/// Function in a unit 1, also on directorys "Global"-tab
void UnitFunction1();

/// Function in a unit 2, also on directorys "Global"-tab
void UnitFunction2();


/// Class in a unit, also on normal directorys nav.-bar and "Overview"-tab
class ClassInUnit
{};
