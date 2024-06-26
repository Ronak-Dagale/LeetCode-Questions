# Write your MySQL query statement below
select A.customer_id,count(A.visit_id) as count_no_trans
from Visits as A
left join
Transactions as B
on
A.visit_id=B.visit_id
where B.transaction_id is NULL
group by A.customer_id;