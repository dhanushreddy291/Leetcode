SELECT DISTINCT(c1.seat_id)
FROM Cinema c1
JOIN Cinema c2
ON abs(c2.seat_id - c1.seat_id) = 1 AND c1.free and c2.free
ORDER BY c1.seat_id;