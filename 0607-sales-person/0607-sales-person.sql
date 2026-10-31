-- # Write your MySQL query statement below
-- select sp.name 
-- from SalesPerson sp 
-- left join Orders o on sp.sales_id = o.sales_id left 
-- join Company c on o.com_id = c.com_id and  c.name = 'RED'
-- where c.name is null;


SELECT sp.name
FROM SalesPerson sp
WHERE NOT EXISTS (
    SELECT 1
    FROM Orders o
    JOIN Company c
        ON o.com_id = c.com_id
    WHERE o.sales_id = sp.sales_id
      AND c.name = 'RED'
);