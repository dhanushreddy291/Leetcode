CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      SELECT DISTINCT(e1.salary) FROM Employee e1
      WHERE (
        SELECT COUNT(DISTINCT(e2.salary)) FROM Employee e2
        WHERE e2.salary > e1.salary
      ) = N - 1
  );
END