
 <h2> C언어의 파일종류</h2>
    <ul>
        <li>
            <strong>텍스트파일(text file)</strong>
            <ul>
                <li>사람들이 읽을 수 있는  <strong>문자들을 저장</strong>하고 있는 파일</li>
                <li>텍스트파일에서 “한줄의끝”을 나타내는 표현은 파일이 읽어들여질 때, C 내부의
방식으로 변환된다. </li>
            </ul>
        </li>
        <li>
            <strong>이진파일(binary file) </strong>
            <ul>
                <li>모든데이터는 있는그대로  <strong>바이트의 연속으로 저장</strong></li>
                <li>이진파일을 이용하여 메모리에 저장된 변수값 형태 그대로 파일에 저장할수있다. </li>
            </ul>
        </li>
    </ul>
<br>
<img width="320" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/a58943d5-d5d7-447b-b537-6729c9d6f064">
<br>

 <h2>파일 열기</h2>
    <ul>
        <li>
            <strong>파일을 열기 위해서는</strong>
            <ul>
                <li>반드시 먼저 파일 열기(fopen)을 해야한다.</li>
                <li>파일 열기를 하면<strong>FILE 구조체에 대한 포인터</strong>가 리턴되며 </li>
                <li><strong>FILE 포인터</strong>는 열린 파일을 나타낸다.</li>
            </ul>
        </li>
        <li>
            <strong>함수 fopen() </strong>
            <ul>
                <li>FILE *fopen(const char *filename, const char *mode); </li>
                <li> const char *filename: 파일명에 대한 포인터</li>
                 <li>const char *mode: 모드로 파일을 여는 형식</li>
            </ul>
        </li>
    </ul>
<img width="412" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/936e3007-656a-49d3-9f23-a2fecfa5bef2">
<br>
<h2>FILE 구조체</h2>
    <ul>
        <li>
            <strong>파일 관련 시스템 호출</strong>
            <ul>
                <li>파일디스크립터(file descriptor)</li>
            </ul>
        </li>
        <li>
            <strong>C 표준 입출력함수</strong>
            <ul>
                <li>open( ) 함수로 파일을 열면  <strong>FILE 포인터</strong>(FILE *)가 리턴됨</li>
                <li>  열린 파일을 가리키는 <strong>FILE 구조체에 대한 포인</strong></li>
                <li>FILE 포인터를 표준 입출력 함수들의 인수로 전달해야 함</li>
                <li>#include <stdio.h></li>
            </ul>
        </li>
                 <li>
            <strong>FILE 구조</strong>
            <ul>
                <li>하나의 스트림에 대한 정보를 포함하는 구조체</li>
                <li>버퍼에대한포인터, 버퍼크기</li>
                <li>파일 디스크립터</li>
            </ul>
        </li>
    </ul>
<img width="401" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/bc23a8b4-bf7b-4fa0-a4e3-33bb3aeea8e2">
<br>





<h1>100초동안 기다리기</h1><br>
<img width="410" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/971de452-03a0-475e-a9d6-750a79e03776">
<h1>포트넘버</h1><br>
<img width="329" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/c5eedb5e-be61-417f-a000-f5bc28e129dc">
<br>
<h4>프로세스들은 다 뒤에 & 붙여주면 된다 ! </h4><br>
<img width="416" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/f92b2f2d-fba7-4984-8c3f-b7c5903a9510">



 <h2> 프로그램 종료 </h2>
    <ul>
        <li>
            <strong> 정상 종료(normal termination)</strong>
            <ul>
                <li> main() 실행을 마치고 리턴하면 C 시작 루틴은 이리턴값을가지고exit()을호출</li>
                <li>프로그램 내에서 직접 exit()을 호</li>
            </ul>
        </li>
        <li>
            <strong>비정상종료(abnormal termination)</strong>
            <ul>
                <li><strong>abort() </strong> 프로세스에SIGABRT 시그널을 보내어 프로세스를 비정상적으로 종료</li>
                <li>시그널에 의한 종료</li>
            </ul>
        </li>
    </ul>
