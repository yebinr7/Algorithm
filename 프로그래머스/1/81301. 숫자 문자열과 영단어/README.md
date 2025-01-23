# [level 1] 숫자 문자열과 영단어 - 81301 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/81301) 

### 성능 요약

메모리: 3.68 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 2021 카카오 채용연계형 인턴십

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 01월 23일 09:44:18

### 문제 설명

<p><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/d31cb063-4025-4412-8cbc-6ac6909cf93e/img1.png" title="" alt="img1.png"></p>

<p><br-span><br-bold><br-fixation fixation-strength="1">네</br-fixation><br-fixation fixation-strength="2">오</br-fixation><br-fixation fixation-strength="3">와</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">프</br-fixation><br-fixation fixation-strength="2">로</br-fixation><br-fixation fixation-strength="3">도</br-fixation></br-bold><br-edge>가</br-edge> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">놀</br-fixation><br-fixation fixation-strength="4">이</br-fixation></br-bold><br-edge>를</br-edge> <br-bold><br-fixation fixation-strength="1">하</br-fixation><br-fixation fixation-strength="2">고</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">있</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>. <br-bold><br-fixation fixation-strength="1">네</br-fixation><br-fixation fixation-strength="2">오</br-fixation><br-fixation fixation-strength="3">가</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">프</br-fixation><br-fixation fixation-strength="2">로</br-fixation><br-fixation fixation-strength="3">도</br-fixation><br-fixation fixation-strength="4">에</br-fixation></br-bold><br-edge>게</br-edge> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">건</br-fixation><br-fixation fixation-strength="2">넬</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">때</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">일</br-fixation><br-fixation fixation-strength="2">부</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">릿</br-fixation><br-fixation fixation-strength="3">수</br-fixation></br-bold><br-edge>를</br-edge> <br-bold><br-fixation fixation-strength="1">영</br-fixation><br-fixation fixation-strength="2">단</br-fixation><br-fixation fixation-strength="3">어</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">바</br-fixation><br-fixation fixation-strength="2">꾼</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">카</br-fixation><br-fixation fixation-strength="2">드</br-fixation><br-fixation fixation-strength="3">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">건</br-fixation><br-fixation fixation-strength="2">네</br-fixation><br-fixation fixation-strength="3">주</br-fixation></br-bold><br-edge>면</br-edge> <br-bold><br-fixation fixation-strength="1">프</br-fixation><br-fixation fixation-strength="2">로</br-fixation><br-fixation fixation-strength="3">도</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">원</br-fixation><br-fixation fixation-strength="2">래</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">찾</br-fixation><br-fixation fixation-strength="2">는</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">게</br-fixation><br-fixation fixation-strength="2">임</br-fixation><br-fixation fixation-strength="3">입</br-fixation><br-fixation fixation-strength="4">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span><br><br><br-span>
<br-bold><br-fixation fixation-strength="1">다</br-fixation><br-fixation fixation-strength="2">음</br-fixation><br-fixation fixation-strength="3">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">일</br-fixation><br-fixation fixation-strength="2">부</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">릿</br-fixation><br-fixation fixation-strength="3">수</br-fixation></br-bold><br-edge>를</br-edge> <br-bold><br-fixation fixation-strength="1">영</br-fixation><br-fixation fixation-strength="2">단</br-fixation><br-fixation fixation-strength="3">어</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">바</br-fixation><br-fixation fixation-strength="2">꾸</br-fixation><br-fixation fixation-strength="3">는</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation><br-fixation fixation-strength="2">시</br-fixation><br-fixation fixation-strength="3">입</br-fixation><br-fixation fixation-strength="4">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></p>

<ul>
<li><br-span>1478 → "<br-bold><br-fixation fixation-strength="1">o</br-fixation><br-fixation fixation-strength="2">n</br-fixation><br-fixation fixation-strength="3">e</br-fixation></br-bold>4<br-bold><br-fixation fixation-strength="1">se</br-fixation><br-fixation fixation-strength="2">ve</br-fixation><br-fixation fixation-strength="3">ne</br-fixation><br-fixation fixation-strength="4">i</br-fixation></br-bold><br-edge>ght</br-edge>"</br-span></li>
<li><br-span>234567 → "23<br-bold><br-fixation fixation-strength="1">f</br-fixation><br-fixation fixation-strength="2">o</br-fixation><br-fixation fixation-strength="3">u</br-fixation></br-bold><br-edge>r</br-edge>5<br-bold><br-fixation fixation-strength="1">s</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">x</br-fixation></br-bold>7"</br-span></li>
<li><br-span>10203 → "1<br-bold><br-fixation fixation-strength="1">ze</br-fixation><br-fixation fixation-strength="2">ro</br-fixation><br-fixation fixation-strength="3">tw</br-fixation><br-fixation fixation-strength="4">oz</br-fixation></br-bold><br-edge>ero</br-edge>3"</br-span></li>
</ul>

<p><br-span><br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">렇</br-fixation><br-fixation fixation-strength="3">게</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">일</br-fixation><br-fixation fixation-strength="2">부</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">자</br-fixation><br-fixation fixation-strength="2">릿</br-fixation><br-fixation fixation-strength="3">수</br-fixation></br-bold><br-edge>가</br-edge> <br-bold><br-fixation fixation-strength="1">영</br-fixation><br-fixation fixation-strength="2">단</br-fixation><br-fixation fixation-strength="3">어</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">바</br-fixation><br-fixation fixation-strength="2">뀌</br-fixation><br-fixation fixation-strength="3">어</br-fixation><br-fixation fixation-strength="4">졌</br-fixation></br-bold><br-edge>거나</br-edge>, <br-bold><br-fixation fixation-strength="1">혹</br-fixation><br-fixation fixation-strength="2">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">바</br-fixation><br-fixation fixation-strength="2">뀌</br-fixation><br-fixation fixation-strength="3">지</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">않</br-fixation><br-fixation fixation-strength="2">고</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">그</br-fixation><br-fixation fixation-strength="2">대</br-fixation><br-fixation fixation-strength="3">로</br-fixation></br-bold><br-edge>인</br-edge> <br-bold><br-fixation fixation-strength="1">문</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">열</br-fixation></br-bold> </br-span><code><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></code><br-span><br-bold><br-fixation fixation-strength="1">가</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">매</br-fixation><br-fixation fixation-strength="2">개</br-fixation><br-fixation fixation-strength="3">변</br-fixation><br-fixation fixation-strength="4">수</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">주</br-fixation><br-fixation fixation-strength="2">어</br-fixation><br-fixation fixation-strength="3">집</br-fixation><br-fixation fixation-strength="4">니</br-fixation></br-bold><br-edge>다</br-edge>. </br-span><code><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></code><br-span><br-bold><br-fixation fixation-strength="1">가</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">의</br-fixation><br-fixation fixation-strength="2">미</br-fixation><br-fixation fixation-strength="3">하</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">원</br-fixation><br-fixation fixation-strength="2">래</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">t</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>rn</br-edge> <br-bold><br-fixation fixation-strength="1">하</br-fixation><br-fixation fixation-strength="2">도</br-fixation><br-fixation fixation-strength="3">록</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">so</br-fixation><br-fixation fixation-strength="2">lu</br-fixation><br-fixation fixation-strength="3">ti</br-fixation><br-fixation fixation-strength="4"></br-fixation></br-bold><br-edge>on</br-edge> <br-bold><br-fixation fixation-strength="1">함</br-fixation><br-fixation fixation-strength="2">수</br-fixation><br-fixation fixation-strength="3">를</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">완</br-fixation><br-fixation fixation-strength="2">성</br-fixation><br-fixation fixation-strength="3">해</br-fixation><br-fixation fixation-strength="4">주</br-fixation></br-bold><br-edge>세요</br-edge>.</br-span></p>

<p><br-span><br-bold><br-fixation fixation-strength="1">참</br-fixation><br-fixation fixation-strength="2">고</br-fixation><br-fixation fixation-strength="3">로</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">각</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">에</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">대</br-fixation><br-fixation fixation-strength="2">응</br-fixation><br-fixation fixation-strength="3">되</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">영</br-fixation><br-fixation fixation-strength="2">단</br-fixation><br-fixation fixation-strength="3">어</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">다</br-fixation><br-fixation fixation-strength="2">음</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">표</br-fixation><br-fixation fixation-strength="2">와</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></p>
<table class="table">
        <thead><tr>
<th><br-span><br-bold><br-fixation fixation-strength="1">숫</br-fixation><br-fixation fixation-strength="2">자</br-fixation></br-bold></br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">영</br-fixation><br-fixation fixation-strength="2">단</br-fixation><br-fixation fixation-strength="3">어</br-fixation></br-bold></br-span></th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">z</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">r</br-fixation></br-bold><br-edge>o</br-edge></br-span></td>
</tr>
<tr>
<td>1</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">o</br-fixation><br-fixation fixation-strength="2">n</br-fixation><br-fixation fixation-strength="3">e</br-fixation></br-bold></br-span></td>
</tr>
<tr>
<td>2</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">t</br-fixation><br-fixation fixation-strength="2">w</br-fixation><br-fixation fixation-strength="3">o</br-fixation></br-bold></br-span></td>
</tr>
<tr>
<td>3</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">t</br-fixation><br-fixation fixation-strength="2">h</br-fixation><br-fixation fixation-strength="3">r</br-fixation><br-fixation fixation-strength="4">e</br-fixation></br-bold><br-edge>e</br-edge></br-span></td>
</tr>
<tr>
<td>4</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">f</br-fixation><br-fixation fixation-strength="2">o</br-fixation><br-fixation fixation-strength="3">u</br-fixation></br-bold><br-edge>r</br-edge></br-span></td>
</tr>
<tr>
<td>5</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">f</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">v</br-fixation></br-bold><br-edge>e</br-edge></br-span></td>
</tr>
<tr>
<td>6</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">x</br-fixation></br-bold></br-span></td>
</tr>
<tr>
<td>7</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">v</br-fixation><br-fixation fixation-strength="4">e</br-fixation></br-bold><br-edge>n</br-edge></br-span></td>
</tr>
<tr>
<td>8</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">e</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">g</br-fixation><br-fixation fixation-strength="4">h</br-fixation></br-bold><br-edge>t</br-edge></br-span></td>
</tr>
<tr>
<td>9</td>
<td><br-span><br-bold><br-fixation fixation-strength="1">n</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">n</br-fixation></br-bold><br-edge>e</br-edge></br-span></td>
</tr>
</tbody>
      </table>
<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">제</br-fixation><br-fixation fixation-strength="2">한</br-fixation><br-fixation fixation-strength="3">사</br-fixation></br-bold><br-edge>항</br-edge></br-span></h5>

<ul>
<li>1 ≤ <code><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></code><br-span><br-bold><br-fixation fixation-strength="1">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">길</br-fixation><br-fixation fixation-strength="2">이</br-fixation></br-bold> ≤ 50</br-span></li>
<li><code><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></code><br-span><br-bold><br-fixation fixation-strength="1">가</br-fixation></br-bold> "<br-bold><br-fixation fixation-strength="1">z</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">r</br-fixation></br-bold><br-edge>o</br-edge>" <br-bold><br-fixation fixation-strength="1">또</br-fixation><br-fixation fixation-strength="2">는</br-fixation></br-bold> "0"<br-bold><br-fixation fixation-strength="1">으</br-fixation><br-fixation fixation-strength="2">로</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">시</br-fixation><br-fixation fixation-strength="2">작</br-fixation><br-fixation fixation-strength="3">하</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">경</br-fixation><br-fixation fixation-strength="2">우</br-fixation><br-fixation fixation-strength="3">는</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">주</br-fixation><br-fixation fixation-strength="2">어</br-fixation><br-fixation fixation-strength="3">지</br-fixation></br-bold><br-edge>지</br-edge> <br-bold><br-fixation fixation-strength="1">않</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
<li><br-span><br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">t</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>rn</br-edge> <br-bold><br-fixation fixation-strength="1">값</br-fixation><br-fixation fixation-strength="2">이</br-fixation></br-bold> 1 <br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">상</br-fixation></br-bold> 2,000,000,000 <br-bold><br-fixation fixation-strength="1">이</br-fixation><br-fixation fixation-strength="2">하</br-fixation><br-fixation fixation-strength="3">의</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">정</br-fixation><br-fixation fixation-strength="2">수</br-fixation><br-fixation fixation-strength="3">가</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">되</br-fixation><br-fixation fixation-strength="2">는</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">올</br-fixation><br-fixation fixation-strength="2">바</br-fixation><br-fixation fixation-strength="3">른</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">력</br-fixation><br-fixation fixation-strength="3">만</br-fixation></br-bold> </br-span><code><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></code><br-span><br-bold><br-fixation fixation-strength="1">로</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">주</br-fixation><br-fixation fixation-strength="2">어</br-fixation><br-fixation fixation-strength="3">집</br-fixation><br-fixation fixation-strength="4">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>

<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold></br-span></h5>
<table class="table">
        <thead><tr>
<th><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></th>
<th><br-span><br-bold><br-fixation fixation-strength="1">r</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">s</br-fixation><br-fixation fixation-strength="4">u</br-fixation></br-bold><br-edge>lt</br-edge></br-span></th>
</tr>
</thead>
        <tbody><tr>
<td><code><br-span>"<br-bold><br-fixation fixation-strength="1">o</br-fixation><br-fixation fixation-strength="2">n</br-fixation><br-fixation fixation-strength="3">e</br-fixation></br-bold>4<br-bold><br-fixation fixation-strength="1">se</br-fixation><br-fixation fixation-strength="2">ve</br-fixation><br-fixation fixation-strength="3">ne</br-fixation><br-fixation fixation-strength="4">i</br-fixation></br-bold><br-edge>ght</br-edge>"</br-span></code></td>
<td>1478</td>
</tr>
<tr>
<td><code><br-span>"23<br-bold><br-fixation fixation-strength="1">f</br-fixation><br-fixation fixation-strength="2">o</br-fixation><br-fixation fixation-strength="3">u</br-fixation></br-bold><br-edge>r</br-edge>5<br-bold><br-fixation fixation-strength="1">s</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">x</br-fixation></br-bold>7"</br-span></code></td>
<td>234567</td>
</tr>
<tr>
<td><code><br-span>"2<br-bold><br-fixation fixation-strength="1">t</br-fixation><br-fixation fixation-strength="2">h</br-fixation><br-fixation fixation-strength="3">r</br-fixation><br-fixation fixation-strength="4">e</br-fixation></br-bold><br-edge>e</br-edge>45<br-bold><br-fixation fixation-strength="1">si</br-fixation><br-fixation fixation-strength="2">xs</br-fixation><br-fixation fixation-strength="3">ev</br-fixation><br-fixation fixation-strength="4"></br-fixation></br-bold><br-edge>en</br-edge>"</br-span></code></td>
<td>234567</td>
</tr>
<tr>
<td><code>"123"</code></td>
<td>123</td>
</tr>
</tbody>
      </table>
<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">설</br-fixation><br-fixation fixation-strength="2">명</br-fixation></br-bold></br-span></h5>

<p><strong><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #1</br-span></strong></p>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">문</br-fixation><br-fixation fixation-strength="2">제</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation><br-fixation fixation-strength="2">시</br-fixation><br-fixation fixation-strength="3">와</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>

<p><strong><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #2</br-span></strong></p>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">문</br-fixation><br-fixation fixation-strength="2">제</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation><br-fixation fixation-strength="2">시</br-fixation><br-fixation fixation-strength="3">와</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>

<p><strong><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #3</br-span></strong></p>

<ul>
<li><br-span>"<br-bold><br-fixation fixation-strength="1">t</br-fixation><br-fixation fixation-strength="2">h</br-fixation><br-fixation fixation-strength="3">r</br-fixation><br-fixation fixation-strength="4">e</br-fixation></br-bold><br-edge>e</br-edge>"<br-bold><br-fixation fixation-strength="1">는</br-fixation></br-bold> 3, "<br-bold><br-fixation fixation-strength="1">s</br-fixation><br-fixation fixation-strength="2">i</br-fixation><br-fixation fixation-strength="3">x</br-fixation></br-bold>"<br-bold><br-fixation fixation-strength="1">는</br-fixation></br-bold> 6, "<br-bold><br-fixation fixation-strength="1">s</br-fixation><br-fixation fixation-strength="2">e</br-fixation><br-fixation fixation-strength="3">v</br-fixation><br-fixation fixation-strength="4">e</br-fixation></br-bold><br-edge>n</br-edge>"<br-bold><br-fixation fixation-strength="1">은</br-fixation></br-bold> 7<br-bold><br-fixation fixation-strength="1">에</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">대</br-fixation><br-fixation fixation-strength="2">응</br-fixation><br-fixation fixation-strength="3">되</br-fixation></br-bold><br-edge>기</br-edge> <br-bold><br-fixation fixation-strength="1">때</br-fixation><br-fixation fixation-strength="2">문</br-fixation><br-fixation fixation-strength="3">에</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">정</br-fixation><br-fixation fixation-strength="2">답</br-fixation><br-fixation fixation-strength="3">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #2<br-bold><br-fixation fixation-strength="1">와</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">은</br-fixation></br-bold> 234567<br-bold><br-fixation fixation-strength="1">이</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">됩</br-fixation><br-fixation fixation-strength="2">니</br-fixation><br-fixation fixation-strength="3">다</br-fixation></br-bold>.</br-span></li>
<li><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #2<br-bold><br-fixation fixation-strength="1">와</br-fixation></br-bold> #3<br-bold><br-fixation fixation-strength="1">과</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">이</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">같</br-fixation><br-fixation fixation-strength="2">은</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">정</br-fixation><br-fixation fixation-strength="2">답</br-fixation><br-fixation fixation-strength="3">을</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">가</br-fixation><br-fixation fixation-strength="2">리</br-fixation><br-fixation fixation-strength="3">키</br-fixation></br-bold><br-edge>는</br-edge> <br-bold><br-fixation fixation-strength="1">문</br-fixation><br-fixation fixation-strength="2">자</br-fixation><br-fixation fixation-strength="3">열</br-fixation></br-bold><br-edge>이</br-edge> <br-bold><br-fixation fixation-strength="1">여</br-fixation><br-fixation fixation-strength="2">러</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">가</br-fixation><br-fixation fixation-strength="2">지</br-fixation><br-fixation fixation-strength="3">가</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">나</br-fixation><br-fixation fixation-strength="2">올</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">수</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">있</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>

<p><strong><br-span><br-bold><br-fixation fixation-strength="1">입</br-fixation><br-fixation fixation-strength="2">출</br-fixation><br-fixation fixation-strength="3">력</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">예</br-fixation></br-bold> #4</br-span></strong></p>

<ul>
<li><code><br-span><br-bold><br-fixation fixation-strength="1">s</br-fixation></br-bold></br-span></code><br-span><br-bold><br-fixation fixation-strength="1">에</br-fixation><br-fixation fixation-strength="2">는</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">영</br-fixation><br-fixation fixation-strength="2">단</br-fixation><br-fixation fixation-strength="3">어</br-fixation></br-bold><br-edge>로</br-edge> <br-bold><br-fixation fixation-strength="1">바</br-fixation><br-fixation fixation-strength="2">뀐</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">부</br-fixation><br-fixation fixation-strength="2">분</br-fixation><br-fixation fixation-strength="3">이</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">없</br-fixation><br-fixation fixation-strength="2">습</br-fixation><br-fixation fixation-strength="3">니</br-fixation></br-bold><br-edge>다</br-edge>.</br-span></li>
</ul>

<hr>

<h5><br-span><br-bold><br-fixation fixation-strength="1">제</br-fixation><br-fixation fixation-strength="2">한</br-fixation><br-fixation fixation-strength="3">시</br-fixation></br-bold><br-edge>간</br-edge> <br-bold><br-fixation fixation-strength="1">안</br-fixation><br-fixation fixation-strength="2">내</br-fixation></br-bold></br-span></h5>

<ul>
<li><br-span><br-bold><br-fixation fixation-strength="1">정</br-fixation><br-fixation fixation-strength="2">확</br-fixation><br-fixation fixation-strength="3">성</br-fixation></br-bold> <br-bold><br-fixation fixation-strength="1">테</br-fixation><br-fixation fixation-strength="2">스</br-fixation><br-fixation fixation-strength="3">트</br-fixation></br-bold> : 10<br-bold><br-fixation fixation-strength="1">초</br-fixation></br-bold></br-span></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges