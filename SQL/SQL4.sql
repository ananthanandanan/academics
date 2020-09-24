1. 
create table branch(
branch_name varchar(20) primary key,
branch_city varchar(20),
assets numeric(8,2)
);

create table account(
accno int primary key,
branch_name varchar(20) references branch(branch_name),
balance numeric(8,2)
);

create table customer(
customer_name varchar(20) primary key,
customer_street varchar(25),
customer_city varchar(10)
);

create table loan(
loan_number int primary key,
branch_name varchar(20) references branch(branch_name),
amount numeric(8,2)
);

create table depositer(
customer_name varchar(20) references customer(customer_name),
accno int references account(accno),
primary key(customer_name,accno)
);

create table borrower(
customer_name varchar(20) references customer(customer_name),
loan_number int references loan(loan_number),
primary key(customer_name,loan_number)
);

2. 
insert into branch values
('Kollam-SBI','Kollam',60000.00),
('Alapuzha-SBI','Alapuzha',70000.00),
('Kochi-SBI','Kochi',40000.00);

insert into account values
(123,'Alapuzha-SBI',15000),
(456,'Kochi-SBI',9000),
(789,'Kollam-SBI',12000);

insert into customer values
('Dinesh','Lake Darshan Nagar','Kollam'),
('Remmy','Marine Drive','Kochi'),
('Ananthan','Vimala Nagar','Alapuzha');

insert into loan values
(1111,'Alapuzha-SBI',70000.00),
(2222,'Kochi-SBI',50000.00),
(3333,'Kollam-SBI',130000.00);

insert into depositer values
('Dinesh',789),
('Remmy',456),
('Ananthan',123);

insert into borrower values
('Dinesh',3333),
('Remmy',2222),
('Ananthan',1111);

3.
select depositer.customer_name 
from (depositer natural full outer join account) 
where branch_name='Kollam-SBI(main)' group by depositer.customer_name
having count(accno)>=2;

4.
select avg(balance) 
from account 
where branch_name='Kollam-SBI(main)';

5.
select count(depositer.customer_name) 
from (depositer natural full outer join account) 
group by depositer.customer_name ;

6.
select branch_name 
from account 
group by branch_name having avg(balance)>1200;

7.
update account 
set balance =(balance*1.6) 
where balance>10000;

8.
update account 
set balance =(balance*1.5) 
where balance<10000;

9.
select customer_name 
from (depositer natural full outer join borrower) 
where accno is not null or loan_number is not null;

10.
select customer_name 
from (depositer natural full outer join borrower) 
where accno is not null and loan_number is not null;

11.
select count(distinct branch_name) 
from loan;

12.
select avg(amount) 
from loan 
group by branch_name;

13.
select customer_name 
from borrower 
group by customer_name having count(loan_number)>1 ;

14.
select sum(amount) 
from loan;