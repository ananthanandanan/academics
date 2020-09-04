create table department(
	deptno integer primary key,
	dname Varchar(14) not null,
	loc Varchar(20)

);

create table employee(
	empno integer primary key,
	ename Varchar(20) not null,
	job Varchar(10),
	mgr_id integer,
	hired_date date,
	basic_sal numeric(8,2) default 1000,
	incentive numeric(8,2) check(incentive<basic_sal),
	deptno integer,
	FOREIGN KEY (deptno) REFERENCES department(deptno)
	

);

INSERT INTO department(deptno, dname, loc)VALUES 
(10, 'ACCOUNTING','NEW YORK'),
 (20, 'RESEARCHER','DALLAS'),
 (30, 'SALES','CHICAGO'),
 (40, 'OPERATIONS','BOSTON');
 
 insert into employee values
(7369,'SMITH','CLERK',7902,'1980-12-17',6800,NULL,20),
(7499,'ALLEN','SALESMAN',7698,'1981-02-20',11600,300,30),
(7521,'WARD','SALESMAN',7689,'1981-02-22',11250,500,30),
(7566,'JONES','MANAGER',7839,'1981-04-02',22975,NULL,20),
(7654,'MARTIN','SALESMAN',7689,'1981-09-28',11250,1400,30),
(7698,'BLAKE','MANAGER',7839,'1981-05-01',22850,NULL,30),
(7782,'CLARK','MANAGER',7839,'1981-06-09',22450,NULL,10),
(7788,'SCOTT','ANALYST',7566,'1982-12-09',13000,NULL,20);

SELECT * FROM DEPARTMENT
SELECT * FROM EMPLOYEE

SELECT * FROM EMPLOYEE
WHERE ENAME = 'BLAKE'

SELECT EMPNO, ENAME
FROM EMPLOYEE
WHERE JOB = 'MANAGER';

SELECT JOB
FROM EMPLOYEE
WHERE JOB LIKE '_A%';

select job from employee where job like '_a%';
	
select concat(concat(ename,' '),job) from employee;

	select ename,deptno,hired_date from employee;

	select * from employee order by ename;

	select ename from employee where ename like 'S%' or ename like'J%';

	select max(basic_sal)from employee;

	select ename, deptno from employee where basic_sal between 10000 and 25000;

	select deptno, count(*) from employee group by deptno order by deptno ;

	select ename,hired_date from employee where job='MANAGER' or job='CLERK' and incentive = null;

	delete from employee where deptno=10;

	select ename,job from employee where job!='ANALYST';

	select ename from employee where basic_sal>21000;

	select ename from employee where basic_sal=13000;

	select  ename, deptno, hired_date from employee where deptno=20 or deptno=30;