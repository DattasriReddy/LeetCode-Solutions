# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary from employee e join department d
on e.departmentid=d.id
left join employee e1
on e1.departmentid = e.departmentid and e.salary < e1.salary
group by e.departmentid, e.name, e.salary
having count(distinct e1.salary) < 3
