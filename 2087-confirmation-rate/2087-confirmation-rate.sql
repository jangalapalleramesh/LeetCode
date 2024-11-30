# Write your MySQL query statement below
select s.user_id,
round(COALESCE((coalesce(sum(case when c.action = "confirmed" then 1 else 0 end),0)/nullif(count(c.action),0)),0),2) as confirmation_rate
from Signups s
left join Confirmations c
on s.user_id = c.user_id
group by s.user_id;