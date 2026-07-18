## **Student Data Management System (Singly Linked List)**
 
A simple, menu-driven Student Data Management application written in C using a singly linked list. The program demonstrates dynamic memory allocation, modular programming, and binary file handling to perform CRUD operations on student records.

---

  **Contents:**

- Features
- Data Structure 
- Project Structure 
- Modules & Algorithms 
- Sample Menu 
- Future Enhancements 
- Author 
- License

 

  **Features:**

- Add student record (automatic roll-number generation)
- Display all student records
- Modify a student record (by roll number)
- Delete a student record (by roll number)
- Sort records by name or percentage
- Reverse the linked list
- Save/load records to/from a binary file
- Delete all records

 

  **Data Structure:**

Each student record is represented by the following struct:

 
typedef struct student
{
    int rollno;
    char name[30];
    float percentage;
    struct student *next;
} ST;
 

Nodes are dynamically allocated using malloc() and freed with free() when deleted.
 
  **Project Structure:**

```
Student-Data-Management-System/

├─ src/               
│  ├─ main.c
│  ├─ stud_add.c
│  ├─ stud_show.c
│  ├─ stud_mod.c
│  ├─ stud_del.c
│  ├─ stud_sort.c
│  ├─ stud_reverse.c
│  ├─ stud_save.c
│  ├─ stud_load.c
│  ├─ stud_deleteall.c
│  └─ generate_roll.c

├─ include/
│  └─ student.h

├─ student.data         
├─ README.md
 
```

> Note: The repository may organize files differently; the above is a suggested structure based on the original project layout.

---

  **Modules & Algorithms:**

- Add Student
  1. Generate the smallest available roll number.
  2. Allocate memory for a new node.
  3. Read student details from the user.
  4. Insert the node at the end of the list.

- Display Students
  - Traverse the linked list and print each node.

- Modify Student
  - Find the node by roll number and update fields.

- Delete Student
  - Locate the node, re-link the list, and free memory.

- Sort Records
  - Implement sorting by name or percentage (simple O(n²) algorithms such as bubble sort or selection sort on list data, or convert to array for easier sorting).

- Reverse Linked List
  - Iterate once with three pointers (previous, current, next) and flip the next pointers.

- Save / Load Records
  - Save: open a binary file and fwrite() each record.
  - Load: fread() records and rebuild the linked list in memory.

- Delete All Records
  - Traverse and free every node, then reset head to NULL

 
  **Sample Menu**
 
 Student Management System
 ---------------------------
A - Add Student
S - Show Students
M - Modify Student
D - Delete Student
T - Sort Records
R - Reverse Records
V - Save Records
L - Delete All Records
E - Exit
Enter Your Choice :
 
 
  **Future Enhancements:**

- Login / authentication
- Search by name (case-insensitive)
- Export records to CSV
- GUI front-end (e.g., using GTK or a simple web UI)
- Database integration (SQLite/MySQL)
- Doubly linked list version for simpler bidirectional traversal

  **Author:**

P. Tharun Reddy

B.Tech Student

  **License:**

This project was developed for educational purposes as part of the Mini Project "Student Data Management Using Linked List Data Structure." You may use and modify the code for learning and non-commercial projects.
