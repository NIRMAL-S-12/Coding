select p.product_name, s.year, s.price from Sales as s
Join Product as p
On s.product_id = p.product_id