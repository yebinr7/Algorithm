# [level 1] 최대공약수와 최소공배수 - 12940 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12940) 

### 성능 요약

메모리: 4.15 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 01월 17일 14:35:00

### 문제 설명

<p><br-span><br-bold><br-fixation fixation-strength="1">두</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">수</br-fixation><br-fixation fixation-strength="2">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">력</br-fixation><br-fixation fixation-strength="3">받</br-fixation></br-bold><br-edge>아</br-edge> <br-bold><br-fixation fixation-strength="1">두</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">수</br-fixation><br-fixation fixation-strength="2">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">대</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">약</br-fixation></br-bold><br-edge>수와</br-edge> <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">소</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">배</br-fixation></br-bold><br-edge>수를</br-edge> <br-bold><br-fixation fixation-strength="1">반</br-fixation><br-fixation fixation-strength="2">환</br-fixation><br-fixation fixation-strength="3">하</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">함</br-fixation><br-fixation fixation-strength="2">수</br-fixation></br-bold>, <br-bold><br-fixation fixation-strength="1">so</br-fixation><br-fixation fixation-strength="2">lu</br-fixation><br-fixation fixation-strength="3">ti</br-fixation><br-fixation fixation-strength="4"></br-fixation></br-bold><br-edge>on을</br-edge> <br-bold><br-fixation fixation-strength="1">완</br-fixation><br-fixation fixation-strength="2">성</br-fixation><br-fixation fixation-strength="3">해</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">보</br-fixation><br-fixation fixation-strength="2">세</br-fixation><br-fixation fixation-strength="3">요</br-fixation></br-bold>. <br-bold><br-fixation fixation-strength="1">배</br-fixation><br-fixation fixation-strength="2">열</br-fixation><br-fixation fixation-strength="3">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">맨</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">앞</br-fixation><br-fixation fixation-strength="2">에</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">대</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">약</br-fixation></br-bold><br-edge>수</br-edge>, <br-bold><br-fixation fixation-strength="1">그</br-fixation><br-fixation fixation-strength="2">다</br-fixation><br-fixation fixation-strength="3">음</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">소</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">배</br-fixation></br-bold><br-edge>수를</br-edge> <br-bold><br-fixation fixation-strength="1">넣</br-fixation><br-fixation fixation-strength="2">어</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">반</br-fixation><br-fixation fixation-strength="2">환</br-fixation><br-fixation fixation-strength="3">하</br-fixation></br-bold><br-edge>면</br-edge> <br-bold><br-fixation fixation-strength="1">됩</br-fixation><br-fixation fixation-strength="2">니</br-fixation><br-fixation fixation-strength="3">다</br-fixation></br-bold>. <br-bold><br-fixation fixation-strength="1">예</br-fixation><br-fixation fixation-strength="2">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">들</br-fixation><br-fixation fixation-strength="2">어</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">두</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">수</br-fixation></br-bold> 3, 12<br-bold><br-fixation fixation-strength="1">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">대</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">약</br-fixation></br-bold><br-edge>수는</br-edge> 3, <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">소</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">배</br-fixation></br-bold><br-edge>수는</br-edge> 12<br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">므</br-fixation><br-fixation fixation-strength="3">로</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">so</br-fixation><br-fixation fixation-strength="2">lu</br-fixation><br-fixation fixation-strength="3">ti</br-fixation><br-fixation fixation-strength="4"></br-fixation></br-bold><br-edge>on</br-edge>(3, 12)<br-bold><br-fixation fixation-strength="1">는</br-fixation></br-bold> [3, 12]<br-bold><br-fixation fixation-strength="1">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">반</br-fixation><br-fixation fixation-strength="2">환</br-fixation><br-fixation fixation-strength="3">해</br-fixation></br-bold><br-edge>야</br-edge> <br-bold><br-fixation fixation-strength="1">합</br-fixation><br-fixation fixation-strength="2">니</br-fixation><br-fixation fixation-strength="3">다</br-fixation></br-bold>.</br-span></p>

<h5><br-span><br-bold><br-fixation fixation-strength="1">제</br-fixation><br-fixation fixation-strength="2">한</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">사</br-fixation><br-fixation fixation-strength="2">항</br-fixation></br-bold></br-span></h5>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">두</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">수</br-fixation><br-fixation fixation-strength="2">는</br-fixation></br-bold> 1<br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">상</br-fixation></br-bold> 1000000<br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">하</br-fixation><br-fixation fixation-strength="3">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">연</br-fixation><br-fixation fixation-strength="3">수</br-fixation><br-fixation fixation-strength="4">입</br-fixation></br-bold><br-edge>니다</br-edge>.</br-span></li>
</ul>

<h5><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold></br-span></h5>
<table class="table">
        <thead><tr>
<th><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation></br-bold></br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">m</br-fixation></br-bold></br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">t</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>rn</br-edge></br-span></th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>12</td>
<td>[3, 12]</td>
</tr>
<tr>
<td>2</td>
<td>5</td>
<td>[1, 10]</td>
</tr>
</tbody>
      </table>
<h5><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">설</br-fixation><br-fixation fixation-strength="2">명</br-fixation></br-bold></br-span></h5>

<p><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #1</br-span><br><br-span>
<br-bold><br-fixation fixation-strength="1">위</br-fixation><br-fixation fixation-strength="2">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">설</br-fixation><br-fixation fixation-strength="2">명</br-fixation><br-fixation fixation-strength="3">과</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></p>

<p><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #2</br-span><br><br-span>
<br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">연</br-fixation><br-fixation fixation-strength="3">수</br-fixation></br-bold> 2<br-bold><br-fixation fixation-strength="1">와</br-fixation></br-bold> 5<br-bold><br-fixation fixation-strength="1">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">대</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">약</br-fixation></br-bold><br-edge>수는</br-edge> 1, <br-bold><br-fixation fixation-strength="1">최</br-fixation><br-fixation fixation-strength="2">소</br-fixation><br-fixation fixation-strength="3">공</br-fixation><br-fixation fixation-strength="4">배</br-fixation></br-bold><br-edge>수는</br-edge> 10<br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">므</br-fixation><br-fixation fixation-strength="3">로</br-fixation></br-bold> [1, 10]<br-bold><br-fixation fixation-strength="1">을</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">리</br-fixation><br-fixation fixation-strength="2">턴</br-fixation><br-fixation fixation-strength="3">해</br-fixation></br-bold><br-edge>야</br-edge> <br-bold><br-fixation fixation-strength="1">합</br-fixation><br-fixation fixation-strength="2">니</br-fixation><br-fixation fixation-strength="3">다</br-fixation></br-bold>.</br-span></p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges