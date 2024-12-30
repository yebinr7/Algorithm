# [level 1] 짝수와 홀수 - 12937 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12937) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 12월 30일 09:42:18

### 문제 설명

<p>정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.</p>

<h5>제한 조건</h5>

<ul>
<li>num은 int 범위의 정수입니다.</li>
<li>0은 짝수입니다.</li>
</ul>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num</th>
<th style="text-align: center">return</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td style="text-align: center">"Odd"</td>
</tr>
<tr>
<td>4</td>
<td style="text-align: center">"Even"</td>
</tr>
</tbody>
      </table>

### 문제풀이 및 정리

분기문 스코프 내에서 string answer 다시 변수를 선언해버려서 문제가 생겼었다. 위의 string answer을 이용해야한다.

 std::string은 기본적으로 빈 문자열로 초기화되므로, 간단한 경우에는 선언만 해도 충분합니다.
예를 들어:
```cpp
std::string answer; // 암묵적 초기화 (빈 문자열)
```


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges
