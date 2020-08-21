select eno, ename, joiningdate 
from emp;

select *
from dept;

select eno
from emp
where dept_no='101';

INSERT INTO emp (eno, ename, basic_sal,incentive, dept_no,mgr_id,joiningdate)
VALUES ('e4', 'Jenny', 5066.00,2540.00, '104', 'e4','2009-02-27');

INSERT INTO emp (eno, ename, basic_sal,incentive, dept_no,mgr_id,joiningdate)
VALUES ('e3', 'Jessy', 5036.00,1540.00, '103', 'e3','2009-05-27');

INSERT INTO emp (eno, ename, basic_sal,incentive, dept_no,mgr_id,joiningdate)
VALUES ('e2', 'Jessica', 2034.00,1040.00, '102', 'e2','2008-05-23');

INSERT INTO emp (eno, ename, basic_sal,incentive, dept_no,mgr_id,joiningdate)
VALUES ('e1', 'Jessi', 2000.00,1000.00, '101', 'e1','2008-04-23');

INSERT INTO dept (dno, dname, emp_nos,hod)
VALUES ('101', 'AI', 18,'clifford');

INSERT INTO dept (dno, dname, emp_nos,hod)
VALUES ('102', 'EEE', 15,'Archibald');

INSERT INTO dept (dno, dname, emp_nos,hod)
VALUES ('103', 'ECE', 17,'James');

INSERT INTO dept (dno, dname, emp_nos,hod)
VALUES ('104', 'ELC', 25,'Reggi');

ALTER TABLE emp
add joiningdate date;
alter table dept
add hod varchar(50);

create table dept (
dno varchar(6)primary key,
dname varchar(20) not null,
emp_nos int 
);
create table emp(
eno varchar(6) primary key,
ename varchar(20) not null,
basic_sal numeric(6,2) default 5000,
incentive numeric(6,2) check (incentive>=basic_sal),
dept_no varchar(6),
foreign key (dept_no) references dept(dno),
mgr_id varchar(6),
foreign key (mgr_id) references emp(eno)
);




