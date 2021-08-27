UPDATE EMP SET Sal = Sal + 100;
SELECT * from EMP where not (JOB = 'Manager' or JOB = 'Clerk') and DEPTNO = 10;

