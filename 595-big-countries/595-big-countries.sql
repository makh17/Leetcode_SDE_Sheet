# Write your MySQL query statement below
# select name,population,area from World where population >= 25000000 OR area >=3000000;

# Using union in sql
select name,population,area from World where population >= 25000000 
UNION
select name,population,area from World where area >=3000000;
