create table department(
deptno integer primary key,
dname varchar(14) not null,
loc varchar(20)
);

create table employee(
empno integer primary key,
ename varchar(20) not null,
job varchar(10),
mgr_id integer,
hired_date date,
basic_sal numeric(8,2) default 1000,
incentive numeric(8,2) check(incentive<basic_sal),
deptno integer references department(deptno)
);

insert into department values
(10,'ACCOUNTING','NEW YORK'),
(20,'RESEARCH','DALLAS'),
(30,'SALES','CHICAGO'),
(40,'OPERATIONS','BOSTON');

insert into employee values
(7369,'SMITH','CLERK',7902,'12/17/1980',6800,null,20),
(7499,'ALLEN','SALESMAN',7698,'02/20/1981',11600,300,30),
(7521,'WARD','SALESMAN',7698,'02/22/1981',11250,500,30),
(7566,'JONES','MANAGER',7839,'04/02/1981',22975,null,20),
(7654,'MARTIN','SALESMAN',7698,'09/28/1981',11250,1400,30),
(7698,'BLAKE','MANAGER',7839,'05/01/1981',22850,null,30),
(7782,'CLARK','MANAGER',7839,'06/09/1981',22450,null,10),
(7788,'SCOTT','ANALYST',7566,'12/09/1982',13000,null,20);

select * from department;

select * from employee;

select * from employee where ename='BLAKE';

select empno,ename from employee where job='MANAGER';

select distinct job from employee where job like '_A%';

select ename||job from employee;

select ename,deptno,hired_date from employee;

select ename from employee order by ename asc;

select ename from employee where ename like 'S%' or ename like 'J%';

select max(basic_sal) from employee;

select ename,deptno from employee where basic_sal>=10000 and basic_sal<=25000;

select deptno,count(ename) as no_emp from employee group by deptno;

select ename,hired_date from employee where job='MANAGER' or job='CLERK' and incentive=null;

delete from employee where deptno=10;

select ename,job from employee where job!='ANALYST';

select ename from employee where basic_sal>21000;

select ename from employee where basic_sal=13000;

select ename,deptno,hired_date from employee where deptno=20 or deptno=30;


