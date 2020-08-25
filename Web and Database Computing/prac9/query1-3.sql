SELECT customer.first_name, customer.last_name, MIN(rental.rental_date) AS rental_date
FROM customer
INNER JOIN rental ON customer.customer_id = rental.customer_id
AND rental.return_date IS NULL
GROUP BY customer.customer_id
ORDER BY rental_date
LIMIT 1;