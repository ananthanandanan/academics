create table client_master(
	Client_no varchar(6) primary key check(client_no like 'C%'),
	name varchar(10) not null,
	Address_1 varchar(10),
	Address_2 varchar(10),
	city varchar(10),
	pincode integer,
	state varchar(10),
	bal_due numeric(10,2)
);
create table product_master(
	Product_no varchar(6) primary key check(product_no like 'P%'),
	description varchar(10) not null,
	profit_percent numeric(2,2) not null,
	unit_measure varchar not null,
	qty_on_hand integer not null,
	reorder_lvl integer not null,
	sell_price numeric(8,2) not null check(sell_price!=0),
	cost_price numeric(8,2) not null check(cost_price!=0)
);
create table sales_master(
	salesman_no varchar(6) primary key check(salesman_no='S%'),
	salesman_name varchar(10) not null,
	address_1 varchar(10) not null,
	address_2 varchar(10),
	city varchar(10),
	pin_code integer,
	state varchar(10),
	sal_amt numeric(8,2) not null check(sal_amt!=0),
	Tgt_to_get numeric(6,2) not null check(Tgt_to_get!=0),
	remarks varchar(10) not null
);
create table sales_order(
	order_no varchar(6) primary key check(order_no='O%'),
	order_date date,
	client_no varchar(6) references client_master(client_no),
	dely_addr varchar(20),
	Salesman_no varchar(6) references sales_master(salesman_no),
	dely_type char check(dely_type='P' or dely_type='F'),
	billed_yn char check(billed_yn='Y' or billed_yn='N'),
	dely_date date check(dely_date>order_date),
	order_status varchar(10) check(order_status='In Process' or order_status='fulfilled' or 		order_status='Backorder' or order_status='Cancelled'),
	remarks varchar(10)
);
create table sales_order_details(
	order_no varchar(6) references sales_order(order_no),
	Product_no varchar(6) references product_master(product_no),
	qty_ordered integer,
	qty_disp integer,
	product_rate numeric(10.2)
);

select name from client_master where name='__a%';

select * from client_master where state='Bombay' or state='Delhi';

select * from client_master where name='%e%e%';

select * from product_master where sell_price>2000 and sell_price<5000;

update product_master 
set sell_price=0.15*sell_price
where sell_price>1500;

alter table product_master rename column sell_price to new_price;

select count(order_no) from sales_order;

select avg(new_price) from product_master;

select max(new_price) as max_price , min(new_price) as min_price from product_master;

select count(product_no) from product_master where new_price>=1500;

select * from product_master where qty_on_hand<reorder_lvl;

select description ,qty_on_hand from product_master;

select product_no,sum(qty_ordered*product_rate) from sales_order_details group by(product_no);


select product_no,avg(qty_ordered) from sales_order_details group by product_no;

 
