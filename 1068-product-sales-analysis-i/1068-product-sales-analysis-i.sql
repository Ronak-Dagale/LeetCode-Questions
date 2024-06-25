# Write your MySQL query statement below
select B.product_name,A.year,A.price
from Sales as A
join
Product as B
on
A.product_id=B.product_id;