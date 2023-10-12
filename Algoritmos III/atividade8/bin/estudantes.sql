create database BDAlg3; 
use BDAlg3; 
show databases;

create table estudantes
(
	estudanteNome varchar(255), 
	estudanteRGA varchar(255), 
    estudanteID int not null auto_increment,
    primary key (estudanteID)
);

show tables;

insert into estudantes (estudanteNome, estudanteRGA)
values ("Maria Ribeiro", "202311310002");

select * from estudantes;
drop table estudantes;
drop database BDAlg3;