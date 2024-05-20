 <h1>파일의 종류</h1>
    <h2>일반파일(ordinary file)</h2>
    <ul>
        <li>데이터를 가지고 있으면서 디스크에 저장된다.</li>
    </ul>
    <h2>디렉터리(directory)/폴더(folder)</h2>
    <ul>
        <li>디렉터리(폴더) 자체도 하나의 파일로, 한 디렉터리는 다른 디렉터리들을 포함함으로써 계층 구조를 이룬다.</li>
        <li>부모 디렉터리는 다른 디렉터리들을 서브디렉터리로 갖는다.</li>
    </ul>
    <h2>특수파일(special file)</h2>
    <ul>
        <li>물리적인 장치에 대한 내부적인 표현</li>
        <li>키보드(stdin), 모니터(stdout), 프린터 등도 파일처럼 사용</li>

  <br>
<img width="533" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/548d2941-7a32-494b-8fcb-79fce5b86985">
<h1>디렉터리 종류</h1>
    <h2>홈디렉터리(home directory)</h2>
    <ul>
        <li>각 사용자마다 별도의 홈디렉터리가 있음</li>
        <li>사용자가 로그인하면 홈디렉터리에서 작업을 시작함</li>
    </ul>
    <h2>현재작업디렉터리(current working directory)</h2>
    <ul>
        <li>현재 작업 중인 디렉터리</li>
        <li>로그인하면 홈디렉터리에서부터 작업이 시작된다.</li>
<br>
  <img width="410" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/34ccbf3a-cda5-4da9-a51c-97eb459d2048">
<br>
<h1>디렉터리 관련 명령</h1>
    <h2>pwd (print working directory)</h2>
    <ul>
        <li>현재 작업 디렉터리를 프린트</li>
        <li><code>$ pwd</code></li>
    </ul>
    <h2>cd (change directory)</h2>
    <ul>
        <li>현재 작업 디렉터리를 이동</li>
        <li><code>$ cd [디렉터리]</code></li>
    </ul>
    <h2>mkdir (make directory)</h2>
    <ul>
        <li>새 디렉터리를 만듬</li>
        <li><code>$ mkdir 디렉터리</code></li>
 <h1>경로명</h1>
    <ul>
        <li>파일이나 디렉터리에 대한 정확한 이름</li>
    </ul>
    <h2>절대경로명(absolute pathname)</h2>
    <ul>
        <li>루트 디렉터리로부터 시작하여 경로 이름을 정확하게 적는 것</li>
    </ul>
    <h2>상대경로명(relative path name)</h2>
    <ul>
        <li>현재 작업 디렉터리부터 시작해서 경로 이름을 적는 것</li>
    </ul>


        
