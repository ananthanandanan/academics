create table category_details (category_id integer,category_name varchar(10));
create table sub_category_details(sub_category_id integer, category_id integer,sub_category_name varchar(10));
create table product_details(Product_id integer, category_id integer,sub_category_id integer, product_name varchar(10));
alter table category_details add primary key(category_id);
alter table sub_category_details add constraint pk_sub_category_id primary key(sub_category_id);
alter table sub_category_details add constraint fk_category_id foreign key(category_id) references category_details(category_id);
alter table product_details add constraint pk_product_id primary key(product_id),add constraint fk_category_id foreign key(category_id) references category_details(category_id),add constraint fk_sub_category_id foreign key(sub_category_id) references sub_category_details(sub_category_id);
alter table product_details add column price numeric(6,2);
insert into category_details values
(01,'Soup'),
(02,'eggs'),
(03,'ramen'),
(04,'Mochi');
insert into sub_category_details values
(10,01,'pkg'),
(20,02,'imp'),
(30,03,'exp'),
(40,04,'local');
insert into product_details values
(101101,01,10,'Soup',5000),
(303301,03,30,'apple',2500),
(202201,02,20,'egg',1000),
(404401,04,40,'chips',500);
alter table product_details add column BRANDNAME varchar(20) default 'empty';
alter table category_details rename to cat_dt;
