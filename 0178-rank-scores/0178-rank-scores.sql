# Write your MySQL query statement below
-- dense rank


    select score,
    dense_rank() over
    (order by score desc) as `rank`
from scores
