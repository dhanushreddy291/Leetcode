SELECT t1.team_name AS home_team, t2.team_name AS away_team
FROM Teams t1
INNER JOIN Teams t2
WHERE NOT t1.team_name = t2.team_name;