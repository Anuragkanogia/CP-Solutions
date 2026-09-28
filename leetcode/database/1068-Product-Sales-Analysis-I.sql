# Write your MySQL query statement b
Select p.product_name, s.year,s.price FROM Sales as s INNER JOIN PRODUCT AS p ON s.product_id =  p.product_id;