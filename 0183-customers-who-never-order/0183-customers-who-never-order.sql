# Write your MySQL query statement below

-- select p.name as Customers
-- from customers p left join 
--  orders o on p.id=o.id
--  where o.customerId is null;

SELECT name as Customers
from Customers
where id not in (
    select customerId
    from Orders
);