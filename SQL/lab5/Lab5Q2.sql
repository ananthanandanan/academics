

--a)
create table employee (
	ssn integer primary key,
	fname varchar(20),
	lname varchar(20),
	address varchar(20),
	sex char,
	salary numeric(8,2),
	superssn integer references employee(ssn),
	dno integer
);
create table department(
	dno integer primary key,
	dname varchar(20),
	mgrssn integer references employee(ssn),
	mgrstartdate date
);
create table dlocation (
	dno integer references department(dno),
	dloc varchar(20),
	primary key(dno,dloc)
);
create table project(
	pno integer primary key,
	pname varchar(20),
	plocation varchar(20),
	dno integer references department(dno)
);

create table works_on(
	ssn integer references employee(ssn),
	pno integer references project(pno),
	hours integer,
	primary key(ssn,pno)
);
alter table employee add constraint fk foreign key(dno) references department(dno);

--b)
insert into employee values
	(10,'Mike','ab','Roorkee','M',45000,30,12),
	(20,'Kevin','cd','delhi','M',28000,20,14),
	(30,'Kate','ef','kochi','F',92000,30,36),
	(40,'John','gh','Stafford','F',53000,20,38);

insert into department values
	(12,'science',10,'12-10-2009'),
	(14,'arts',20,'02-14-2010'),
	(36,'engineering',30,'02-06-2010'),
	(38,'research',40,'12-03-2010');

insert into dlocation values
	(12,'Noida'),
	(14,'kolkata'),
	(36,'bangalore'),
	(38,'kanpur');

insert into project values
	(492,'car','Noida',12),
	(423,'bike','delhi',14),
	(432,'bus','Stafford',36),
	(579,'auto','Roorkee',38);

insert into works_on values
	(10,492,146),
	(20,423,86),
	(30,432,176),
	(40,579,61);


select fname||' '||lname as name,address from employee natural join department
 where dname='research';


select pno,dno,lname,address from project natural join employee 
where plocation='Stafford';


select fname||' '||lname as name from employee where superssn is null;

select max(salary),min(salary),avg(salary) from employee 
natural join department where dname='research';


select dno,count(ssn),avg(salary) from employee
 natural join department group by dno;

select pno,pname,count(ssn) from project natural join works_on group by pno;


select pno,pname,count(ssn) from project 
natural join works_on group by pno having count(ssn)>2;


select dno,count(ssn) from employee
natural join department group by dno having count(ssn)>1;