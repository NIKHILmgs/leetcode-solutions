# Write your MySQL query statement below
SELECT EMPLOYEE_ID, IF(EMPLOYEE_ID%2!=0 AND NAME NOT LIKE "M%",SALARY,0) AS BONUS FROM EMPLOYEES ORDER BY EMPLOYEE_ID