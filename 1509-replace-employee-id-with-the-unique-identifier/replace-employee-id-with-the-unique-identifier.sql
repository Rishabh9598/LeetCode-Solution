# Write your MySQL query statement below
select m.unique_id, e.name 
from Employees e
Left Join EmployeeUNI m
    On e.id=m.id;