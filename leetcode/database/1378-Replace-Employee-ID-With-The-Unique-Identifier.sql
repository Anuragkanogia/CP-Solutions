# Write your MySQL query statement below
Select eu.unique_id, e.name from Employees as e  LEFT JOIN EmployeeUNI as eu ON e.id = eu.id; 