SELECT employee_id, (
    SELECT COUNT(team_id)
    FROM Employee e2
    WHERE e1.team_id = e2.team_id
) AS team_size
FROM Employee e1;