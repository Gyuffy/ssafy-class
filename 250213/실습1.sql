CREATE TABLE `ssafy`.`member` (
    `member_id` INT NOT NULL AUTO_INCREMENT,
    `username` VARCHAR(20) NOT NULL,
    `age` INT NULL,
    PRIMARY KEY (`member_id`));

DESC ssafy.member;

SELECT * FROM ssafy.member;