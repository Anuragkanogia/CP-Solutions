# Write your MySQL query statement below
Select id,movie , description, rating FROM Cinema where id %2 = 1 AND description != "boring" 
ORDER BY rating DESC;