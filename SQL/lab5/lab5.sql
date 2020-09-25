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
('Alapuzha-MAIN','Alapuzha',70000.00),
('Kochi-SBI','Kochi',40000.00);

insert into account values
(123,'Alapuzha-MAIN',15000),
(456,'Kochi-SBI',9000),
(789,'Kollam-SBI',12000);

insert into customer values
('Mekha','Lake Darshan Nagar','Kollam'),
('Remmy','Marine Drive','Kochi'),
('Ananthan','Vimala Nagar','Alapuzha');

insert into loan values
(1111,'Alapuzha-MAIN',70000.00),
(2222,'Kochi-SBI',50000.00),
(3333,'Kollam-SBI',130000.00);

insert into depositer values
('Mekha',789),
('Remmy',456),
('Ananthan',123);

insert into borrower values
('Mekha',3333),
('Remmy',2222),
('Ananthan',1111);

select accno, branch.branch_name, branch_city
from branch, account
where branch.branch_name = account.branch_name;

select b.customer_name, b.loan_number
from borrower as b, loan as l
where b.loan_number=l.loan_number;

select b.customer_name, b.loan_number, l.amount
from borrower as b, loan as l
where b.loan_number=l.loan_number;

ALTER TABLE loan
RENAME COLUMN loan_number TO loan_id;

select branch_name
from branch 
where assets > some(select assets from branch
where branch_city = 'Kochi');

select b.customer_name
from borrower as b, loan as l
where l.branch_name = 'Kollam-SBI' and b.loan_number=l.loan_id
order by b.customer_name;

select customer_name 
from account 
natural join depositer
where branch_name = 'Alapuzha-MAIN' 
group by customer_name
having count(accno)>=2;

select balance
from account a,depositor d
where a.accno=d.accno and d.customer_name ='Mekha';

select b.customer_name, count(b.customer_name)
from loan as l, borrower as b
where b.loan_number=l.loan_id
group by b.customer_name;

select customer_name
from (depositor natural  join borrower )
where accno is null or loan_number is null;

select ac.branch_name, count(d.customer_name)
from depositer as d, account as ac
where d.accno = ac.accno
group by ac.branch_name;

select *
from loan
cross join borrower;



