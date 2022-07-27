SELECT Customers.name AS Customers
FROM Customers
Where Customers.id NOT IN (
    SELECT Customers.id
    FROM Customers
    INNER JOIN Orders
    ON Customers.id = Orders.customerID
)