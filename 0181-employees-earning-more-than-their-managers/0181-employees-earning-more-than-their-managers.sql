select m.name as Employee
from employee e
inner join employee m on e.id = m.managerid
where e.salary < m.salary; 