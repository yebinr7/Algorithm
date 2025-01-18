# [level 1] 3진법 뒤집기 - 68935 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/68935?language=cpp) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 월간 코드 챌린지 시즌1

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 01월 18일 09:47:23

### 문제 설명

<p><br-span><br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">연</br-fixation><br-fixation fixation-strength="3">수</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">n</br-fixation><br-fixation fixation-strength="2">이</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">매</br-fixation><br-fixation fixation-strength="2">개</br-fixation><br-fixation fixation-strength="3">변</br-fixation><br-fixation fixation-strength="4">수</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">주</br-fixation><br-fixation fixation-strength="2">어</br-fixation><br-fixation fixation-strength="3">집</br-fixation><br-fixation fixation-strength="4">니</br-fixation></br-bold><br-edge>다</br-edge>. <br-bold><br-fixation fixation-strength="1">n</br-fixation><br-fixation fixation-strength="2">을</br-fixation></br-bold> 3<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">상</br-fixation><br-fixation fixation-strength="2">에</br-fixation><br-fixation fixation-strength="3">서</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">앞</br-fixation><br-fixation fixation-strength="2">뒤</br-fixation><br-fixation fixation-strength="3">로</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">뒤</br-fixation><br-fixation fixation-strength="2">집</br-fixation><br-fixation fixation-strength="3">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">후</br-fixation></br-bold>, <br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">다</br-fixation><br-fixation fixation-strength="2">시</br-fixation></br-bold> 10<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation><br-fixation fixation-strength="3">으</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">표</br-fixation><br-fixation fixation-strength="2">현</br-fixation><br-fixation fixation-strength="3">한</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">수</br-fixation><br-fixation fixation-strength="2">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">t</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>rn</br-edge> <br-bold><br-fixation fixation-strength="1">하</br-fixation><br-fixation fixation-strength="2">도</br-fixation><br-fixation fixation-strength="3">록</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">so</br-fixation><br-fixation fixation-strength="2">lu</br-fixation><br-fixation fixation-strength="3">ti</br-fixation><br-fixation fixation-strength="4"></br-fixation></br-bold><br-edge>on</br-edge> <br-bold><br-fixation fixation-strength="1">함</br-fixation><br-fixation fixation-strength="2">수</br-fixation><br-fixation fixation-strength="3">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">완</br-fixation><br-fixation fixation-strength="2">성</br-fixation><br-fixation fixation-strength="3">해</br-fixation><br-fixation fixation-strength="4">주</br-fixation></br-bold><br-edge>세요</br-edge>.</br-span></p>

<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">제</br-fixation><br-fixation fixation-strength="2">한</br-fixation><br-fixation fixation-strength="3">사</br-fixation></br-bold><br-edge>항</br-edge></br-span></h5>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation><br-fixation fixation-strength="2">은</br-fixation></br-bold> 1 <br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">상</br-fixation></br-bold> 100,000,000 <br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">하</br-fixation><br-fixation fixation-strength="3">인</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">연</br-fixation><br-fixation fixation-strength="3">수</br-fixation><br-fixation fixation-strength="4">입</br-fixation></br-bold><br-edge>니다</br-edge>.</br-span></li>
</ul>

<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold></br-span></h5>
<table class="table">
        <thead><tr>
<th><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation></br-bold></br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">s</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>lt</br-edge></br-span></th>
</tr>
</thead>
        <tbody><tr>
<td>45</td>
<td>7</td>
</tr>
<tr>
<td>125</td>
<td>229</td>
</tr>
</tbody>
      </table>
<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">설</br-fixation><br-fixation fixation-strength="2">명</br-fixation></br-bold></br-span></h5>

<p><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #1</br-span></p>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">답</br-fixation><br-fixation fixation-strength="2">을</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">도</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">하</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">과</br-fixation><br-fixation fixation-strength="2">정</br-fixation><br-fixation fixation-strength="3">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">다</br-fixation><br-fixation fixation-strength="2">음</br-fixation><br-fixation fixation-strength="3">과</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>
<table class="table">
        <thead><tr>
<th><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation></br-bold> (10<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold>)</br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation></br-bold> (3<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold>)</br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">앞</br-fixation><br-fixation fixation-strength="2">뒤</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">반</br-fixation><br-fixation fixation-strength="2">전</br-fixation></br-bold>(3<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold>)</br-span></th>
<th><br-span>10<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation><br-fixation fixation-strength="3">으</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">표</br-fixation><br-fixation fixation-strength="2">현</br-fixation></br-bold></br-span></th>
</tr>
</thead>
        <tbody><tr>
<td>45</td>
<td>1200</td>
<td>0021</td>
<td>7</td>
</tr>
</tbody>
      </table>
<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">따</br-fixation><br-fixation fixation-strength="2">라</br-fixation><br-fixation fixation-strength="3">서</br-fixation></br-bold> 7<br-bold><br-fixation fixation-strength="1">을</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">t</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>rn</br-edge> <br-bold><br-fixation fixation-strength="1">해</br-fixation><br-fixation fixation-strength="2">야</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">합</br-fixation><br-fixation fixation-strength="2">니</br-fixation><br-fixation fixation-strength="3">다</br-fixation></br-bold>.</br-span></li>
</ul>

<p><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #2</br-span></p>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">답</br-fixation><br-fixation fixation-strength="2">을</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">도</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">하</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">과</br-fixation><br-fixation fixation-strength="2">정</br-fixation><br-fixation fixation-strength="3">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">다</br-fixation><br-fixation fixation-strength="2">음</br-fixation><br-fixation fixation-strength="3">과</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>
<table class="table">
        <thead><tr>
<th><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation></br-bold> (10<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold>)</br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation></br-bold> (3<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold>)</br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">앞</br-fixation><br-fixation fixation-strength="2">뒤</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">반</br-fixation><br-fixation fixation-strength="2">전</br-fixation></br-bold>(3<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation></br-bold>)</br-span></th>
<th><br-span>10<br-bold><br-fixation fixation-strength="1">진</br-fixation><br-fixation fixation-strength="2">법</br-fixation><br-fixation fixation-strength="3">으</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">표</br-fixation><br-fixation fixation-strength="2">현</br-fixation></br-bold></br-span></th>
</tr>
</thead>
        <tbody><tr>
<td>125</td>
<td>11122</td>
<td>22111</td>
<td>229</td>
</tr>
</tbody>
      </table>
<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">따</br-fixation><br-fixation fixation-strength="2">라</br-fixation><br-fixation fixation-strength="3">서</br-fixation></br-bold> 229<br-bold><br-fixation fixation-strength="1">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">t</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>rn</br-edge> <br-bold><br-fixation fixation-strength="1">해</br-fixation><br-fixation fixation-strength="2">야</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">합</br-fixation><br-fixation fixation-strength="2">니</br-fixation><br-fixation fixation-strength="3">다</br-fixation></br-bold>.</br-span></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges