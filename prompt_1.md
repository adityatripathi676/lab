Okay, this is a substantial project with a lot of interconnected parts! Let's break it down and make sure I understand everything correctly before we start.

Here's a summary of the requirements as I understand them, along with some clarifying questions to ensure we're aligned:

**Core Functionality:**

*   **Authentication:**
    *   Login system with options for Admin and Faculty.
    *   Admin and 5 initial Mentors with default credentials (stored in `.gitignore`d file)
    *   Secure password handling with random hashing.
    *   Use Supabase for authentication.
*   **Database:**
    *   Use Supabase as your database backend with "public" schema, project "CRC," and organization "MR."
    *   An "admin" database (not entirely sure of table structure).
    *   A "faculty" table that stores name, email, employee code, department, and university ("MRIIRS/MRU"). Faculty logins will also be based on their Email, Not the initial set of faculty credentials. 
    *   Each Faculty user will have a table based on his/her name when a new user signs up
    *   A table for each Mentor (Faculty). Initially 5 (Mentor 1, Mentor 2,...Mentor 5) with their student table based on the id
        *  Tables must include ability for admin to Add, edit, delete Students based on specific Mentors/faculties.
    *   Each mentor has a form for adding records associated with specific week, month, and date. This should only be for his own set of student. 
    *   Attendance tracking per student by week, day, time(using a clock) by faculties and can only be able to access thier assigned students only. 
    *   Admin must be able to view all tables data and Download them.
    *   Ability for admin to Add/Edit/Remove faculty, mentor, and students as needed
*   **User Interface (Frontend):**
    *   Dark theme.
    *   Responsive design.
    *   Navbar with a burger icon for small devices.
    *   Minimal design, smooth fonts with animations.
*   **Workflow:**
    1.  Set up Supabase.
    2.  Develop the front end user interface using javascript as reference with supabase libraries.
    3.  Connect with the backend database
*   **Project Structure:**
    *   You want a project structure overview.
    *   A README.md with database setup instructions for a beginner using the provided api-key
*   **Credentials and Security**
    * Store API KEY AND default logins for both admin and faculty users on the `.env` file and gitignore that

**Clarifying Questions:**

1.  **Admin Table:** You mention an "admin database". Could you specify what data this table will store? Is this to hold admin accounts information, configuration settings or are we refering that an administrator can acess and perform any of all table options in a data based?

2. **Faculty table** You mention in faculty table will there also be a place where user password will be stored while admin creates it and if we can login with the email given. Can i create the faculty authentication system as independent on the default user table? So we can create email as user credential during faculty creation form in Admin panel
   
3.  **Mentor and faculty Tables:** It looks like you need Mentor table at begining with default users. Also you require a general Faculty Table and a separate faculty table created per each Faculty. can I rename the table so to the general purpose table is the Teacher Table for general faculty details. And also should I change the name to Teacher instead of Faculty ?
    
4.  **Student assignment** Does the student information be on every table created per Teacher (Mentor). and each time new student be also a student record for faculty table too?

5.  **Attendance structure**: For attendance can we assign unique ID to each of these week-month and can the attendance table hold it's ID along with Student-ID and Faculty ID with boolean on if attendance was there?
   
6.  **Data Downloads:** What specific format for data downloads of all tables (e.g. CSV, JSON, or another) would be needed in the project? Also Should the tables be exported individually for all user role types (Teacher, admin) or will one overall format be okay for whole database as it might have all information
   
7. **Password Hashing** You've mentioned random password hashing for password. Would we need to handle any password reset? 
 
8.  **Bolt AI Prompt:**  For Bolt AI Prompt, do you need this for the initial project setup for any framework to follow? Can we take it as NextJS ?  Or just any generic command and code will also work. Also for password handling there will be no change if they don't log out since supabase will handle it through session based

Please provide these details and if you have anything else to add, I'll use that information to provide more accurate steps and resources. This way, you have something usable!
