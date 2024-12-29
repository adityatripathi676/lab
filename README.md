# Contents
1. ## Here we will be updating the programs taught by us in our collage lab and classes 
2. ## Added a prsonal portfolio website ("Not the topic of lab")



--------------------------------------------------------------------------------------------------------------------------------------------------
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



----------------------------------------------------------------------------------------------------------------------------------------------------
Okay, this clarifies things greatly! Thank you for the detailed responses. Based on your input, here's an updated understanding and plan:

**Updated Understanding**

*   **Admin Access:** The admin user has full access to all data within the Supabase database (read, create, update, delete). The application will implement this, allowing admin to modify user accounts and their associated data tables.

*   **Independent Faculty/Mentor Authentication:** Faculty/Mentor user will authenticate independently, with admin inputting their credentials initially, using the email as login details with password created.

*   **Unified Role:** The terms "Mentor," "Faculty," and "Teacher" are synonymous, and throughout the system, it will be "Mentor" (though the UI may show "Faculty"). This clarifies the general idea where Mentor = Teacher

*  **Student Tables:** Each student gets their table where their id is randomly generated which will be the same ID every time so that their records could be added for the next week accordingly by mentor based on date and the attendance is not in separate table now the weeks data is stored as row and days will be columns (we will have static week/day columns for the first 12 weeks (1-12) and 7 days(1-7)) inside each cell the amount of hours (decimal will work as for eg. 7.5 hrs will work. by default its 0 and when not updated it is 0), each record will have studentID (random id). And, Each Mentor table needs only their associated studentIDs so that while getting details, it could look for respective students in this studentID assigned table only and there will be the attendance.

*   **Attendance Table Structure:** The student table will directly stores each intern attendance using week and day of week for a period of 12 weeks where value would be number of hrs that mentor enters as data points

*   **Data Downloads:** Data is exported in CSV format. Mentors will download student attendance based on selecting student by selecting thier student id which would display only their specific table of each student.

*  **Password Update**: Instead of reset we give the admin panel option for user specific updates so we do not need reset as we can ask admin to change

**Revised Project Plan**

1.  **Supabase Setup:** We will focus on setting up Supabase and create schemas including user tables, mentor tables and student tables with specified properties
2.  **Backend Logic** Establish routes/API logic for data to be transferred into respective tables. Also will create a new teacher table which could work to have the details of teachers along with student assignees ids.
3.  **Frontend Development:** Build the React frontend to include login UI, Navbar (using React icons library), responsive behavior and forms based on mentor/ admin usage which are user-friendly UI elements to submit forms
4. **Complete integration and testing**. All these stages should complete step by step and tested out properly with admin logging and mentor logs with actual data

**Bolt AI Prompt**

Okay, here's a detailed prompt for Bolt AI to achieve a complete project:

```
Create a full-stack web application for an internship management system. The system should use Next.js for the frontend,  Supabase as the database backend and it's provided libraries in Javascript with typescript as required, and use Node.js/Express.js/NextJS API route/backend server for the logic part with  data transfers.

**Functionality:**

1.  **Authentication:**
    *   Implement a secure authentication system using Supabase auth for both Admin and Mentor roles. The admin will be added as one user which the details in dotenv file where as for faculty admin will be given an email with user generated password.
    *   Store the initial Admin's credentials in a `.env` file.
    *   Faculty credentials (email & initial password) will be generated/inputted by admin via a form using password hashing techniques by default for any faculty user who is not a default user
        
2.  **Database:**
    *   Use Supabase with the project details below:
       - URL: https://axhaiiobhymweovzcsko.supabase.co
        - Key:  eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImF4aGFpaW9iaHltd2Vvdnpjc2tvIiwicm9sZSI6ImFub24iLCJpYXQiOjE3MzUzMTY5NDUsImV4cCI6MjA1MDg5Mjk0NX0.AQykgiBC_9fM3azmE61CBjnzTlB88nlYJ78F7A0OXN8
        - Organization "MR"
        - Schema: "public".

    *   The database needs the following tables:
       *   **Admin** this table will only exist as 1 id, used for system-wide control where can perform crud operation for each user type with full database access
         
       * **Teacher** Contains columns for (id which is an email used to authenticate, name (displayed in user interface)), Email(also the Id to login), Employee Code, Department, University(MRIIRS/MRU)), password, assigned students in the id form as an array(studentIds array field). And there needs to be API Routes created for teacher details storage. and be independent with supabase. Also this should create it on the Admin end form based on details of a new user with email which is used for identification
       
        *   **Mentor/Faculty Tables:** (mentor1, mentor2, etc) where initially five will be created with each record related to their id for each of the students in "studentsId Array". Also their student should have one common ID in studentId
     
       *   **Student Table (individually per student):** with Columns, where id is a randomly generated ID used for student identification which should be linked to other teacher and the student array
             *   StudentID, Week1-7 to Week 12-7 column for each date of that particular week(eg Week1-1, week1-2 till week 12-7 ) the values stores should be float data type where it contains data for specific hours from time clock and the total sum hours in decimal point which needs to stored as hrs of study. (so in general will be 84 cells with decimal value and also on the admin part it can view each students details )
          
        * the above structure must ensure the record transfer from a form of mentor data should end up storing at this particular student id so if its mentor 1 and student 1 is to have that data transferred to then store all values under mentor 1 details under student ID student 1.

3. **Backend Logic**:
    * create specific API routes with authorization, for each user types, that include
         * creation and management of teacher using email. also all routes are protected using middleware
         * addition of students using teacher email to get the table name.
         * Data updation of teacher specific assigned student and respective weeks data points which are sent in a object format through a request
         * get operation should be only possible when the teacher logs in for his/her list of student in assigned section and admin view which fetches all students along with individual tables details
    * Ensure that when a new Faculty is added through admin user's option. There needs to be auto created tables related to new student also which is handled internally.
    
4.  **Frontend:**
    *   Use Next.js with TypeScript as needed
    *   Implement a responsive design.
    *   Dark Theme with a smooth and attractive font
    *   Navigation Bar which is having menu items related to their pages. Burger Menu for smaller devices
    *   Pages will have specific layout based on their functionalities.
    *   Authentication forms (admin login & faculty/mentor login with email for log in process).
    *   Admin UI:
        *   A page for adding/removing faculty with the following details: Name, Email(login id), Employee Code, Department, University, Create Password.
        *   A page for adding/removing students, linked with studentIds along with choice to the select the Mentor using Email (the faculty Id). Each time new students are assigned they must be given that student id which is to be auto generated in a secure and random format.
       
    *   Mentor UI (after login):
          * Navbar with the message for Welcome message like "Hello mentor1" (using mentor name after logged in)
        *   A form to update student details per week along with an hours format (or number input box where decimal hours is fine eg. 7.5 hr will work) along with day no(dropdown), also must make time as AM or PM on time clock for selected students from dropdown
        *   Option to view students associated to that user from dropdown and each should fetch respective database
        *    Download data as CSV for only related to this mentor. 
     * Create reusable form components which are used to maintain the consistancy with code base.
       
5.  **Security:**
    *   All API requests are validated using a middleware
    *   Ensure password security through hashing. There should not be any reset password method since admin will be managing password
    *   The random hash will be implemented on the backend

6.  **Data Handling:**
    *  Student Attendance data entered is associated with the related week data

**Additional Notes:**

*   Make it with proper naming and commenting the codes
*    Ensure the app is smooth in transition from different menus to options and page refreshes as seamless as possible

**Supabase Configuration (Steps for README.md):**
1. Start Supabase by going to  https://supabase.com/dashboard/ 
2.  Create New Project. Enter the organization as "MR" with any project name for ex. "CRC" and create with a given location
3.  Once inside a new project setup you should navigate to *Settings > API* and under project URL. Copy the project URL and API keys where one can find **anon** public API key for use.
4. Create `.env.local` with `SUPABASE_URL=PROJECTURL`,  `SUPABASE_KEY=APIKEY`, and  `ADMIN_USER = 'admin'`,`ADMIN_PASS = admin` with admin being `admin` for admin initial login.
5. Setup a tables to a database of `public schema` that includes `mentor` and `students` and  a admin users along with proper schema as described and link it via server APIs. Also the name of column must also include week days columns according to data schema as decsribed above. (you have created your custom tables here as we will work without any user roles as it is complicated )
   
```
This prompt should be sufficient for Bolt AI to create the basic structure. Please feel free to ask for modifications or extra feature if any


------------------------------------------------------------------------------------------------------------------------------------------------------



Okay, I understand. Let's create a comprehensive project report, designed for a beginner to understand and work through, and complete with setup, explanation, and database structure.

## Project Report: Internship Management System

**1. Introduction**

This document outlines the complete setup and functionality of a web application designed for managing internships. This application allows administrators to manage faculty/mentors and their students' data, along with a dedicated interface for mentors to log student's hours during internship for the duration of 12 weeks and specific dates during the week. The system prioritizes a user-friendly design with a dark theme, responsiveness for mobile devices, and secure user management through Supabase. The system's main functionality are designed to handle internship record through its 2 interfaces which is through admin interface and mentor interface along with API routes with security middlewares that protects each data transfer from vulnerabilities. This guide is created as if you're completely new and will make you through it with simple explanations.

**2. Technology Stack**

*   **Frontend:** Next.js (React framework) with TypeScript and  Javascript support for data communication.
*   **Backend/API:** Next.js API Routes / Node.js(can be done with both) with API logic and middleware with auth validations for protected routes
*   **Database:** Supabase (PostgreSQL) - For authentication, authorization and database requirements for persistent storage
*   **Version Control:** Git/Github

**3. System Requirements**

*   Node.js v18 or later
*   npm (or yarn)
*   A code editor (e.g., VS Code)
*   Git for version control
*   A Supabase Account
* Basic Javascript and typescript Knowledge
* Basic React Knowledge

**4. Setup and Installation**

**4.1. Supabase Setup**

   1. **Create a Supabase Project:**
      * Go to [https://supabase.com/dashboard/](https://supabase.com/dashboard/) and create a new project
      * When prompted select the name you like like (e.g. CRC), choose any location.
        and set the "organization" as "MR."

   2. **Retrieve Project Credentials:**
        * In the project dashboard, navigate to *Settings > API.*

        * Note down the following :
          *   **Project URL**
          *   **API Keys (anon key should work for public access)** This value we use as your`SUPABASE_KEY`.
    

   3. **Environment Variables Configuration:**
     *   In the root directory of the project you need to create a .env.local file
        *  Add the following contents inside the newly created file (.env.local)
          ```env
           SUPABASE_URL="your-supabase-project-url"
           SUPABASE_KEY="your-supabase-anon-key"
           ADMIN_USER="admin"
           ADMIN_PASS="admin"
         ```
        
         *Replace `"your-supabase-project-url"` and `"your-supabase-anon-key"` with their respective values from your supabase setup. We are hard coding `ADMIN_USER="admin"` and `ADMIN_PASS="admin"` so be carefull of when used
    

   4. **Database Setup**
      * Supabase utilizes Postgres SQL Database where user-interface to work. In left side you would see a tab for Table Editor, please click to open. Here will we creating each table for database. Here,  we will need to set up the database structure.

    * **Admin Table**:
        * Click "+New table" in "public" schema on Table editor page
         * name the Table `admin`. Add Columns  id(`int8` datatype auto increment and marked primary) also set the "Enable Row level security policy". Since this admin user should be only be one user it has 1 record by the admin
        

     * **Teacher/Faculty Table:**
         * Click "+New table".
        * Name the table: `teacher`
        * Add the following Columns:
              * `id` type `text`, marked Primary
              * `name` type `text`
              *  `employeeCode` type `text`
              * `department` type `text`
             *  `university` type `text`
             *   `password` type `text`
              *`assignedStudentsIds` type `text` ( this contains the student Ids assigned in form of string in array)
        *  enable the "Enable Row level security policy".
  
     * **Student Tables:** Each Student Table will have it's unique identifier, created after a new student assigned by a mentor.  Student IDs needs to be generated in random UUID format and the format as follow. each tables needs to created with respective structure per unique random student ids
        * In general terms every student ID will need
              *`studentId` type`uuid` and should be marked Primary to identify record specific data from different student table entries
               * `week1_1,week1_2 ... week1_7,... week12_1...week12_7`: float value where there should be numeric or float entry

           (we do this through a script when the new students is created and stored via our routes)

        *Example: A student ID might be '50df9a99-2a45-40f4-95f0-533823b0727d' a student table created by this id might look like`"student_50df9a99_2a45_40f4_95f0_533823b0727d"`

**4.2. Setting Up Local Project**
   1. **Create Project**: `npx create-next-app@latest internship-management-app --ts --use-npm`. you will need to confirm using --yes while in CLI. Or follow [documentation](https://nextjs.org/docs/getting-started/installation) to properly install the `next.js` and follow default installations instructions with typescript. If your choice for code structure differs, choose accordingly. The whole system is based on the basic javascript/typescript implementation so it's very important to know if it. After it created follow with `cd internship-management-app`. (also if not using --use-npm `npm install`)
     
    
  2.  **Install dependencies**: In the project terminal in your vscode you must add libraries
       *   Run : `npm install @supabase/supabase-js react-icons @chakra-ui/react @emotion/react @emotion/styled framer-motion` to add the libraries. `@chakra-ui` library makes design a bit quicker since it contains ready components

**4.3. Project Structure**

Here's a common structure (using Next.js):
```
 internship-management-app/
  ├── node_modules/       # Dependencies installed using NPM.
  ├── public/           # static assets (Images)
  ├── src/
  │    ├── app/            # Next.js files/routes with `page.tsx`,`layout.tsx` 
  |    |    ├──components #react reusable UI component such as buttons forms
  │    |     |--api       # all route related logic here
  |    |     |---types    # common types created
  │    │    └── pages       # Next.js routes files (where logic + HTML lives)
  |    |---contexts  # common state values shared with the whole app
  |   |---helpers #Helper code eg generating user IDs, or hashing codes
  │   └──  styles/         #  global CSS and for specific components styling using style or CSS or @emotion styling as chakra uses
  ├── .env.local           #  Envrironment configuration 
  ├── next.config.js    # Next.js configurations files.
  ├── package.json        #  All npm related dependencies  scripts configuration
  └── tsconfig.json #typescript based config file if used
```

**5. Explanation of Functionalities**

**5.1. Authentication**
 * The admin login is authenticated based on hard coded value specified on env with default email and password
* For faculties admin uses his control panel for adding users and uses `supabase.auth` based method to generate user emails along with user given password. So login can be independent
 * On each route will we implement auth middlewares to authenticate users

**5.2. Admin Dashboard**

    * **Faculty/Mentor Management**: This form where you fill name ,email ,dept, and the university will add users into a separate table for mentor. It handles the faculty creations based on input form. In terms it can remove and edit current details for each faculties. Each time a user is created, new email will work with random hashed passwords for security
    
    * **Student Management**: Admin interface where add students for all mentor where each assigned students in mentor's assigned list.

    * **Data Download**  There will be option for mentors from which admin can download in csc format as required per teacher

**5.3. Faculty Dashboard**
    
     * After Login a user is displayed the Faculty name with hello as heading in the menu area
        * Option to select students:
           * Option to choose from select menu/Dropdown which gives name to fetch particular tables associated for the data entry form for internship time management
        *Internship details are shown per week number using drop downs which also show the available week range, and day within the week based on their entry and each data record is associated to unique ids.

 **5.4 API**
  * APIs using middleware security for backend logic
      * protected Routes for fetching teacher data for UI components where admin role or teacher role based protected routing available.
        * API call which is triggered when faculty update hours form and stores related to each user database and their corresponding dates in float / number.
      * Admin operations routes where users can crud tables records.

**6.  Database Schema Visualization**

**Entity Relationship Diagram**

   ```mermaid
   erDiagram
      admin {
        int id PK
       }
       teacher{
            text id PK
          text name
          text email
         text employeeCode
         text department
           text university
            text password
            text assignedStudentIds
       }
       student_{UUID} {
            uuid id PK
         float week1_1
          float week1_2
           ...
          float week1_7
        float week2_1
        float week2_2
         ...
         float week12_7
         }

       admin ||--o{ teacher : Manages
       teacher  ||--o{ student_id : manages
     ```
    _Note that here_ student tables will always be unique per student with its own table. This svg displays all entities but students tables are dynamically generated each new records with a random UUID

**7. Development Workflow**

    1. Clone the repository.
    2. Install dependecies as explained above (`npm install` for frontend and backend routes in one terminal, so separate terminals will help).
    3. Set up Supabase (Step 4.1).
    4. configure your `.env.local` file with details collected form Step 4.1 Supabase Setups, if not in .gitignore you will not able to use environment based setups so do this always correctly.
    5. Use commands like `npm run dev` or your choosen project CLI run to launch in local browser and work step by step based on component UI.
    6.   Create your React Components using components and page folder as suggested above in this documentation. Ensure every page component renders using its respected component folder, using hooks where you might fetch server details.
    7.  For all data fetches add `api/routes.ts` for all methods based on requirement. For instance  if we need student, a create folder using student, using GET method to access those data points through component by fetch
    8. For protected data and access control each route API folder needs to have a `middlewares/auth`  where routes can be protected to only users who are validated based on Supabase authenticated details for security reasons, so only authorized users access backend api.
    9. Follow all the steps above and try working incrementally (one UI at time) and also data stores, making changes and commiting codes will be great for your code bases.
    10. Testing, after any development you have made try testing as it makes it reliable in long term. Try all inputs by form to validate functionality or server endpoints validation for all API requests with good request/responses.

**8. Additional Tips**

*   **Version Control:** Regularly commit your changes with git as `git commit -m "your message"`. And do `git add .` if anything is updated before committing
*   **Coding Style:** Maintain consistency throughout your code. Use Prettier extension on vscode to enforce proper formating by shift alt F or Command shift F
*   **Console Debug:** Use console logging for debugging your components. Also you may set breakpoints to pause code and check step by step variables in debug terminal. Also learn debugging with browser to access components' element view
*   **Read Documentation:** refer official documentation of [NextJS](https://nextjs.org/docs) and Supabase documentation for more understanding in any complex part in the application logic.

**9. Conclusion**
    * This comprehensive report should equip you, a beginner, to confidently start with this complex project. Remember, break down the task, always test as you work. If you face issue refer all documentation and reach for help. By reading the guide fully we ensure the complete design, system structure to start your coding and learning journey through this application system. If there are still confusions we are available to address any concerns you might face with steps to follow. The key is that this doc provides very detailed steps, always approach each issue separately and keep the process smooth

This detailed report and steps provided should get a beginner up and running. Good luck with the project! Let me know if you have further questions!
