-- Sample answer of the SQL practice system
-- 126. Query information and course scores of students with higher grades in the "01" course than in the "02" course 
select
	a.*,
	b.s_Sc as o1_Sc,
	c.s_Sc as o2_Sc
from
	student a,
	Sc b,
	Sc c
where
	a.s_id = b.s_id
	and a.s_id = c.s_id
	and b.c_id = '01'
	and c.c_id = '02'
	and b.s_Sc > c.s_Sc;

-- 127. Query information and course scores of students whose grades in "01" courses are lower than those in "02" courses  
select
	a.*,
	b.s_Sc as o1_Sc,
	c.s_Sc as o2_Sc
from
	student a
	left join Sc b on a.s_id = b.s_id
	and b.c_id = '01'
	or b.c_id = NULL
	join Sc c on a.s_id = c.s_id
	and c.c_id = '02'
where
	b.s_Sc < c.s_Sc;

-- 128. Query the number of teachers surnamed "Li" 
select
	count(t_id)
from
	teacher
where
	t_name like 'Li%';

-- 129. Query the information of the classmates who have studied courses taught by "Zhang San" 
select
	a.*
from
	student a
	join Sc b on a.s_id = b.s_id
where
	b.c_id in(
		select
			c_id
		from
			course
		where
			t_id =(
				select
					t_id
				from
					teacher
				where
					t_name = 'Zhang San'
			)
	);

-- 130. Query the information of the students who have not studied courses taughted by "Zhang San" 
select
	*
from
	student c
where
	c.s_id not in(
		select
			a.s_id
		from
			student a
			join Sc b on a.s_id = b.s_id
		where
			b.c_id in(
				select
					a.c_id
				from
					course a
					join teacher b on a.t_id = b.t_id
				where
					t_name = 'Zhang San'
			)
	);

-- 131. Query the information of students who have studied the course with id "01" and "02" 
select
	a.*
from
	student a,
	Sc b,
	Sc c
where
	a.s_id = b.s_id
	and a.s_id = c.s_id
	and b.c_id = '01'
	and c.c_id = '02';

-- 132. Query the information of students who have studied the course with id "01" but have not studied the course with id "02" 
select
	a.*
from
	student a
where
	a.s_id in (
		select
			s_id
		from
			Sc
		where
			c_id = '01'
	)
	and a.s_id not in(
		select
			s_id
		from
			Sc
		where
			c_id = '02'
	);

-- 133. Query the information of students who have not studied all courses 
select
	*
from
	student
where
	s_id not in(
		select
			s_id
		from
			Sc t1
		group by
			s_id
		having
			count(*) =(
				select
					count(distinct c_id)
				from
					course
			)
	);
 
-- 134. Query the information of at least one class that is the same as the student whose student ID is "01" 
select
	*
from
	student
where
	s_id in(
		select
			distinct a.s_id
		from
			Sc a
		where
			a.c_id in(
				select
					a.c_id
				from
					Sc a
				where
					a.s_id = '01'
			)
	);

-- 135. Query the information of other students who are learning the same course as the student with id "01" 
SELECT
	Student.*
FROM
	Student
WHERE
	s_id IN (
		SELECT
			s_id
		FROM
			Sc
		GROUP BY
			s_id
		HAVING
			COUNT(s_id) = (
				-- find the count of the courses taken by stu '01'
				SELECT
					COUNT(c_id)
				FROM
					Sc
				WHERE
					s_id = '01'
			)
	)
	AND s_id NOT IN (
		SELECT
			s_id
		FROM
			Sc
		WHERE
			c_id IN(
				-- find courses not taken by stu '01'
				SELECT
					DISTINCT c_id
				FROM
					Sc
				WHERE
					c_id NOT IN (
						SELECT
							c_id
						FROM
							Sc
						WHERE
							s_id = '01'
					)
			)
		GROUP BY
			s_id
	)
	AND s_id NOT IN ('01');

-- 136. Query the names of students who have not studied any course taught by teacher "Zhang San" 
select
	a.s_name
from
	student a
where
	a.s_id not in (
		select
			s_id
		from
			Sc
		where
			c_id = (
				select
					c_id
				from
					course
				where
					t_id =(
						select
							t_id
						from
							teacher
						where
							t_name = 'Zhang San'
					)
			)
	);

-- 137. Retrieve information about students whose scores of "01" course are less than 60, sorted in descending order 
select
	a.*,
	b.c_id,
	b.s_Sc
from
	student a,
	Sc b
where
	a.s_id = b.s_id
	and b.c_id = '01'
	and b.s_Sc < 60
ORDER BY
	b.s_Sc DESC;

-- 138. Display the grades and average grades of all the courses of all students in descending order of grade point average (format: Chinese, Math, English, Average)
select
	a.s_id,
	(
		select
			s_Sc
		from
			Sc
		where
			s_id = a.s_id
			and c_id = '01'
	) as Chinese,
	(
		select
			s_Sc
		from
			Sc
		where
			s_id = a.s_id
			and c_id = '02'
	) as Math,
	(
		select
			s_Sc
		from
			Sc
		where
			s_id = a.s_id
			and c_id = '03'
	) as English,
	round(avg(s_Sc), 2) as Average
from
	Sc a
GROUP BY
	a.s_id
ORDER BY
	Average DESC;
 
-- 139. Query the number of students enrolling for each course 
select
	c_id,
	count(s_id)
from
	Sc a
GROUP BY
	c_id;

-- 140. Query s_id and s_name of students who enroll only 2 courses
select
	s_id,
	s_name
from
	student
where
	s_id in(
		select
			s_id
		from
			Sc
		GROUP BY
			s_id
		HAVING
			COUNT(c_id) = 2
	);

-- 141. Display the number of male and female
select
	s_sex,
	COUNT(s_sex)
from
	student
GROUP BY
	s_sex;

-- 142. Query student information with "Feng" in the name 
select
	*
from
	student
where
	s_name like '%Feng%';

-- 143. Query the list of same-sex students with the same name and count the number of people with the same name 
select
	a.s_name,
	a.s_sex,
	count(*)
from
	student a
	JOIN student b on a.s_id != b.s_id
	and a.s_name = b.s_name
	and a.s_sex = b.s_sex
GROUP BY
	a.s_name,
	a.s_sex;

-- 144. Query the list of students born in 1990
select
	s_name
from
	student
where
	s_birth like '1990%';

-- 145. Query the average score of each course, and sort the results in descending order of the average score. When the average score is the same, sort them in ascending order by the course number 
select
	c_id,
	ROUND(AVG(s_Sc), 2) as avg_Sc
from
	Sc
GROUP BY
	c_id
ORDER BY
	avg_Sc DESC,
	c_id ASC;

-- 146. Query the names and scores of students whose course name is "Math" and whose score is lower than 60 
select
	a.s_name,
	b.s_Sc
from
	Sc b
	join student a on a.s_id = b.s_id
where
	b.c_id =(
		select
			c_id
		from
			course
		where
			c_name = 'Math'
	)
	and b.s_Sc < 60;
 
-- 147. Query the number of students in each course 
select
	count(*)
from
	Sc
GROUP BY
	c_id;

-- 148. Query the s_id, c_id, and s_Sc of the students that has top two scores in each course.
select
	a.s_id,
	a.c_id,
	a.s_Sc
from
	Sc a
where
	(
		select
			COUNT(1)
		from
			Sc b
		where
			b.c_id = a.c_id
			and b.s_Sc >= a.s_Sc
	) <= 2
ORDER BY
	a.c_id;

-- 149. Query information about students who have taken all courses 
select
	*
from
	student
where
	s_id in(
		select
			s_id
		from
			Sc
		GROUP BY
			s_id
		HAVING
			count(*) =(
				select
					count(*)
				from
					course
			)
	);