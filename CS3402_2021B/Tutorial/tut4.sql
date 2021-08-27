alter session set nls_date_language='american';

DROP TABLE EMP;
DROP TABLE DEPT;
DROP TABLE SALGRADE;

-- create table - DEPT
CREATE TABLE Dept (Deptno NUMBER(2) NOT NULL, Dname VARCHAR (15), Loc VARCHAR(15));

-- create tabel - SALGRADE
CREATE TABLE Salgrade (Grade NUMBER, Lowsal NUMBER, highsal NUMBER);

-- create table - Emp
CREATE TABLE EMP (Empno NUMBER(4) NOT NULL, Ename VARCHAR(15), Job VARCHAR(15), Mgr NUMBER(4), Hiredate DATE, Sal NUMBER(7, 2), Comm NUMBER(7, 2), Deptno NUMBER(2));


-- insert records into DEPT
INSERT INTO Dept VALUES (10, 'Accounting', 'New York');
INSERT INTO Dept VALUES (20, 'Research', 'Dallas');
INSERT INTO Dept VALUES (30, 'Sales', 'Chicago');
INSERT INTO Dept VALUES (40, 'Operations', 'Boston');

-- insert records into SALGRADE
INSERT INTO Salgrade VALUES (1, 700, 1200);
INSERT INTO Salgrade VALUES (2, 1201, 1400);
INSERT INTO Salgrade VALUES (3, 1401, 2000);
INSERT INTO Salgrade VALUES (4, 2001, 3000);
INSERT INTO Salgrade VALUES (5, 3001, 9000);

-- insert records into EMP
INSERT INTO Emp VALUES (7369, 'Smith', 'Clerk', 7902, '17-Dec-80', 800, NULL, 20);
INSERT INTO Emp VALUES (7499, 'Allen', 'Salesman', 7698, '20-Feb-81', 1600, 300, 30);
INSERT INTO Emp VALUES (7521, 'Ward', 'Salesman', 7698, '22-Feb-81', 1250, 500, 30);
INSERT INTO Emp VALUES (7655, 'Jones', 'Manager', 7839, '2-Apr-81', 2975, NULL, 20);
INSERT INTO Emp VALUES (7654, 'Martin', 'Salesman', 7698, '28-Sep-81', 1250, 1400, 30);
INSERT INTO Emp VALUES (7698, 'Blake', 'Manager', 7839, '1-May-91', 2850, NULL, 30);
INSERT INTO Emp VALUES (7782, 'Clark', 'Manager', 7839, '9-Jun-81', 2450, NULL, 10);
INSERT INTO Emp VALUES (7788, 'Scott', 'Analyst', 7655, '21-Mar-87', 3000, NULL, 20);
INSERT INTO Emp VALUES (7839, 'King', 'President', NULL, '12-Nov-81', 5000, 0, 10);
INSERT INTO Emp VALUES (7844, 'Turner', 'Salesman', 7698, '18-Sep-81', 1500, NULL, 30);
INSERT INTO Emp VALUES (7876, 'Adams', 'Clerk', 7788, '24-Apr-87', 1100, NULL, 20);
INSERT INTO Emp VALUES (7900, 'James', 'Clerk', 7698, '3-Dec-81', 950, NULL, 30);
INSERT INTO Emp VALUES (7902, 'Ford', 'Analyst', 7655, '3-Dec-81', 3000, NULL, 20);
INSERT INTO Emp VALUES (7934, 'Miller', 'Clerk', 7782, '3-Jan-81', 1300, NULL, 10);

COMMIT;

