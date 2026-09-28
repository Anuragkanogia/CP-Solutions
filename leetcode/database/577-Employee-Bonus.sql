# Write your MySQL query statement below
Select e.name , b.bonus FROM Employee as e LEFT JOIN Bonus as b on e.empID = b.empId 
where b.bonus < 1000 OR b.bonus IS NULL