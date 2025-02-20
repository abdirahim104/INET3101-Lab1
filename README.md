# INET3101-Lab1 Database Interface

## Author
**Abdirahim Abdullahi**

## Program Description
A simple C program that simulates basic database operations. It prompts for a database
name upon execution, then displays a menu for record handling and tracks changes
to the database.

## Menu Definition & Usage
1. **Print all records**  
2. **Add record**  
3. **Delete the last record**  
4. **Print number of records**  
5. **Print database size**  
6. **Print number of changes**  
7. **Exit**

After selecting an option (1–7), the program executes the corresponding function and 
loops back to this menu until the user chooses **7 (Exit)**.

## Functions

### PrintAllRecords
- **Input**: None  
- **Output**: Placeholder message (no real data yet).  
- **Description**: Prints a message indicating the records would appear here.

### AddRecord
- **Input**: Interactive prompts for part data (int, string, float, etc.).  
- **Output**: Echoes user input and increments the change counter.  
- **Description**: Reads user input via `scanf`, prints out the collected data, 
  then calls `PrintNumChanges(false)` to update and display modifications.

### DeleteRecord
- **Input**: None  
- **Output**: Placeholder message indicating a record has been deleted.  
- **Description**: No real deletion yet; simply prints a message.

### PrintNumRecords
- **Input**: None  
- **Output**: A placeholder message about the record count.  
- **Description**: Prints the message "You have entered the Print number of records function."

### PrintDatabaseSize
- **Input**: None  
- **Output**: A placeholder message about the database size.  
- **Description**: Prints the message "You have entered the Print database size function."

### PrintNumChanges (bool print)
- **Input**: A boolean `print`.  
  - If `true`, displays the current number of modifications.  
  - If `false`, increments the change counter and prints the updated total.  
- **Output**: Either the current total changes or the incremented result.  
- **Description**: Uses a static/global counter to keep track of changes.

## Files
- **main.c**: Contains the main function, menu logic, and function definitions.  
- **README.txt** or **README.md**: This design document in plain text or Markdown format.

## Compilation & Execution
1. Compile the program:
   ```bash
   gcc main.c -o lab1
