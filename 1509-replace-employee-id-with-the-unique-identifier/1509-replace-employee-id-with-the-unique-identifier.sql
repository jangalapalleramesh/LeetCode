# Write your MySQL query statement below
select eu.unique_id as unique_id,e.name as name from Employees as E left join EmployeeUNI as EU on E.id = EU.id;
