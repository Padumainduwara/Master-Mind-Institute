# Master Mind Institute - Management System

This is a console-based application for the "Master Mind Institute," designed to manage student and course information. The system provides separate functionalities for Administrators and Staff members to handle administrative tasks efficiently.

## Features

Based on the System Requirement Specification, the application includes the following features:

* **Role-Based Access:** Secure login for both **Admin** and **Staff** roles.
* **Student Management:**
    * Add new student details.
    * Manage existing student records (Functionality planned but not implemented).
* **Course Management:**
    * Add new course details.
    * Manage existing course records (Functionality planned but not implemented).
* **Information Viewing:**
    * View all available training programs offered by the institute.
    * View the company's contact details.
* **Secure Logout & Exit:** Functionality for users to securely log out or exit the application.

## Technologies Used

* **C++:** The core application is built using C++.

## Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You will need a C++ compiler installed on your system. A popular choice is the GNU C++ Compiler (g++), which comes with the MinGW toolkit on Windows or is available through build-essentials on Linux.

### How to Compile and Run

1.  **Save the Code:**
    Save the code from the `CSE4002 _ Writ.txt` file as `main.cpp`.

2.  **Open a Terminal or Command Prompt:**
    Navigate to the directory where you saved `main.cpp`.

3.  **Compile the Code:**
    Run the following command to compile the source code. This will create an executable file named `mastermind`.
    ```sh
    g++ main.cpp -o mastermind
    ```

4.  **Run the Application:**
    Execute the compiled program by running the following command:
    ```sh
    ./mastermind
    ```
    On Windows, you might just run:
    ```sh
    mastermind
    ```
5.  **Login Credentials:**
    * **Admin Login:**
        * Username: `Ad01`
        * Password: `123`
    * **Staff Login:**
        * Username: `St01`
        * Password: `123`

## Project Structure

The project consists of a single C++ source file that includes all the logic for the management system. The main functions include user authentication, menu displays, and handling of student and course data.

## Testing

The system has undergone basic testing to ensure functionality. Test cases covered user login (both successful and failed attempts), adding students/courses, and viewing information. The test results confirm that most core features are working as expected, though some management functions are not yet implemented.
