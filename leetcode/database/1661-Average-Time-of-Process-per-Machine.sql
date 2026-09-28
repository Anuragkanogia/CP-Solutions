# Write your MySQL query statement below
Select a1.machine_id  , ROUND(AVG(a2.timestamp - a1.timestamp), 3) as processing_time FROM Activity a1 JOIN Activity a2 on a1.machine_id = a2.machine_id AND a1.process_id = a2.process_id
 WHERE a1.activity_type = "start"  AND a2.activity_type = "end" GROUP BY a1.machine_id;

 #Round(value , 3) - round off the value tp 3 decimal digits;