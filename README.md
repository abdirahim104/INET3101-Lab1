# INET3101-Lab1 Database Interface
=====================================

Authors
--------
Abdirahim Abdullahi

Program Description
--------
A simple C program simulating database operations. It prompts for a database
name on startup, then displays a menu for record handling and keeps track of
database changes.

Overview
--------
The following functions are used to manage and display records in a simple C program:

1. PrintAllRecords
   Prints all the records the program currently has.

2. AddRecord
   Lets users add data (part number, part name, part size, etc.) to new records. 

3. DeleteRecord
   Informs the user that the last record has been deleted.

4. PrintNumRecords
   Displays a message indicating the number of records should be printed (though no actual data is shown yet).

5. PrintDatabaseSize
   Shows a message that the size of the database should be printed (again, no real data shown yet).

6. PrintNumChanges
   Keeps track of and increments the number of times the database has been changed.

Functions
---------
PrintAllRecords
- Input: None
- Output: Prints a placeholder message for all records.
- Algorithm: Displays a simple message (no actual record storage yet).

AddRecord
- Input: Prompts user for part data (int, string, float, etc.).
- Output: Echoes user input; increments the change counter.
- Algorithm: Uses scanf to read inputs, prints them, calls PrintNumChanges(false).

DeleteRecord
- Input: None
- Output: Prints a message indicating the last record is deleted.
- Algorithm: Placeholder (no actual deletion yet).

PrintNumRecords
- Input: None
- Output: Placeholder message about total records.
- Algorithm: Simple print statement only.

PrintDatabaseSize
- Input: None
- Output: Placeholder message about database size.
- Algorithm: Simple print statement only.

PrintNumChanges (bool print)
- Input: `print`: if true, display total changes; if false, increment changes.
- Output: Either current count or new count after increment.
- Algorithm: Maintains a static/global counter.

Files
-----
- myLab1.c (contains main and function definitions)
- README.txt (this design document)
