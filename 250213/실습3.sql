-- 전체 조회
SELECT * FROM ssafy.member LIMIT 1000;

-- username과 age만 가져오기
SELECT username, age FROM ssafy.member LIMIT 1000;

-- member_id가 3인 member를 가져오기
SELECT * FROM ssafy.member WHERE member_id = 3;

-- username이 가나다 순인 것으로 정렬
SELECT * FROM ssafy.member ORDER BY username LIMIT 1000;

-- age가 내림차순으로 정렬
SELECT * FROM ssafy.member ORDER BY age DESC;

-- 모두 민호가 되어버림
UPDATE ssafy.member
    SET username = '민호', age = 10;

-- 아래로 수정, member_id가 1인 사람만 민호로 수정.
UPDATE ssafy.member
  SET username = '민호', age = 10
  WHERE member_id = 1;

SELECT * FROM ssafy.member;

DELETE FROM ssafy.member
    WHERE member_id = 1;

SELECT * FROM ssafy.member;
