SELECT CAST(
    (
        SELECT COUNT(*)
        FROM Delivery
        WHERE order_date = customer_pref_delivery_date
    ) * 100 / (SELECT COUNT(*) FROM Delivery) AS DECIMAL(10, 2)
) AS immediate_percentage;
