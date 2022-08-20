SELECT IFNULL(EmployeeUNI.unique_id, null) AS unique_id, Employees.name
FROM EmployeeUNI
RIGHT JOIN Employees
ON EmployeeUNI.id = Employees.id;