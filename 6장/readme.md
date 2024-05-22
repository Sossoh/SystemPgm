<h1>시스템호출</h1>
<br>
<img width="500" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/b7f1db83-83da-4391-a6b8-e6fe39ec3de8"><br>
<h1>시스템 호출 과정</h1>
<br>
<img width="413" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/9711a1c8-d03a-4c93-ab4c-9ad05c09acfe">
<br>
<img width="511" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/5267089f-beda-4d19-a38a-e5f3cb357673">
<br>
<h1>레코드 수정 과정</h1>
<br>
<img width="463" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/93a679e4-94d6-4129-9444-7603f54603a4">

<br>

<h1>파일 시스템 구조</h1>
<br>
<img width="293" alt="스크린샷 2024-04-16 171025" src="https://github.com/Sossoh/SystemPgm/assets/128332587/69202fe3-59a5-4943-bed1-e82190f41b09">
<br>
<ul>
  <li> 부드 블록 (Boot block): 파일 시스템 시작부에 위치하고, 보통 첫번째 섹터를 차지 <br> 부드 스트랩 코드가 저장되는 블록 </li>
  <li> 슈퍼 블록 (Super block): 전체 파일 시스템에 대한 정보를 저장 (ex. 총 블록 수 사용 가능한 블록 비트 맵 등)</li>
  <li> i -리스트 (i-list): 각 파일을 나타내는 모든 i-노드들의 리스트 <br> 한 블록은 40개정도의 i-노드 포함</li>
  <li> 데이터 블록 (Data block): 파일의 내용(데이터)을 저장하기 위한 블록들</li>
</ul>
