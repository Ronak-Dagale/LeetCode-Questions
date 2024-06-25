select B.unique_id,A.name 
from Employees as A
left join 
EmployeeUNI as B
on A.id=B.id;