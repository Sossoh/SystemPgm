
 <h2> 쉘(Shell)이란 무엇인가?</h2>
    <ul>
        <li>
            <strong> 쉘의역할</strong>
            <ul>
                <li>쉘은 사용자와 운영체제 사이에 창구역할을 하는 소프트웨어</li>
                <li>명령어처리기(command processor)</li>
                <li>사용자로부터 명령어를 입력받아 이를 처리한다</li>
            </ul>
        </li>
    </ul>
    
 <h2> 쉘의실행절차</h2> <br>
 <img width="356" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/4adc3935-2258-4566-9215-6ec41f083307">
<br>

 <h2> 전면처리 vs 후면처리</h2>
    <ul>
        <li>
            <strong> 전면 처리</strong>
            <ul>
                <li>명령어를입력하면명령어가전면에서실행되며명령어실행이끝날때까지쉘이기다려준다</li>
            </ul>
        </li>
        <li>
            <strong> 후면 처리 </strong>
            <ul>
                <li> 명령어들을후면에서처리하고전면에서는다른작업을할수있으면동시에여러작업을수행할수있다</li>
                <li> $ 명령어 & </li>
            </ul>
        </li>
    </ul>

 <h2>프로그램 실행 시작</h2>
    <ul>
        <li>
            <strong>  exec 시스템 호출</strong>
            <ul>
                <li> C 시작 루틴에 명령줄인수와 환경변수를 전달하고</li>
               <li> 프로그램을실행시킨다</li>
            </ul>
        </li>
        <li>
            <strong>  C 시작 루틴(start-up routine)</strong>
            <ul>
                <li>  main 함수를 호출하면서 명령줄인수, 환경변수를전달</li>
                <li> 실행이끝나면반환값을받아exit 한다.  </li>
               <li> exit( main( argc, argv) );  </li>
            </ul>
        </li>
    </ul>
    
 <h2>프로그램 실행 시작</h2> <br>
<img width="329" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/971abee9-654a-4032-9850-d04d29b67ab4">
<br>

<h2>명령줄인수/환경변수</h2> <br>
<img width="535" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/ef78f807-ea5a-4bf5-8b6c-fc8985e9434b">
<br>

<h2>프로그램 종료</h2> <br>
<img width="515" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/704e8d25-b44a-4675-954a-71732500f4c8">
<br>
    <h2>프로그램 실행 시작</h2>
    <ul>
        <li>
            <strong>정상종료(normal termination)</strong>
            <ul>
                <li> main() 실행을 마치고 리턴하면 C 시작 루틴은 이리턴값을 가지고exit()을호출</li>
               <li> 프로그램 내에서 직접exit()을 호</li>
              <li> 프로그램 내에서 직접_exit()을 호출</li>
            </ul>
        </li>
        <li>
            <strong>비정상종료(abnormal termination)</strong>
            <ul>
                <li> <strong> abort() </strong> 프로세스에SIGABRT 시그널을 보내어 프로세스를 비정상적으로 종료</li>
                <li> 시그널에 의한 종료 </li>
            </ul>
        </li>
    </ul>

 <h2>프로그램 종료</h2><br>
   <img width="494" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/3c8d87cd-912d-4c35-94f0-ce00aa0e1aac"><br>

  <h2> C 프로그램 시작 및 종료</h2><br>
<img width="392" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/40c27e64-062a-4072-a5a4-680ed3a746b3">
<br>

 <h2> 프로세스 ID</h2><br>
<img width="401" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/42525ecb-49ca-4bbb-9afe-ef352323073f">
<br>

 <h2> 프로세스의 사용자 ID</h2><br>
<img width="382" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/63cd3f68-0116-4cc4-add8-f254e4309cf0">
<br>

  <h2>프로세스의 사용자 ID</h2>
    <ul>
        <li>
            <strong>프로세스의 실제 사용자 ID(real user ID)</strong>
            <ul>
                <li> 그 프로세스를 실행한 원래 사용자의 사용자 ID로 설정된다.</li>
               <li> 예를들어 chang이라는 사용자ID로 로그인하여 어떤프로그램을 실행 시키면 그
프로세스의 실제 사용자ID는 chang이 된다</li>
            </ul>
        </li>
        <li>
            <strong> 프로세스의 유효 사용자 ID(effective user ID)</strong>
            <ul>
                <li> 현재 유효한 사용자ID로 새로 파일을 만들 때나 파일에 대한 접근권한을 검사할
 때주로 사용된다. </li>
                <li> 보통 유효 사용자ID와 실제 사용자ID는 특별한 실행파일을 실행할 때를 제외하고
는 동일하다 </li>
            </ul>
        </li>
    </ul>
 <h2> 프로세스의 사용자 ID</h2><br>
<img width="394" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/1226d281-ff43-4939-93f7-d032bfa9f37c">
<br>
<h2> set-user-id 실행 파일</h2>
    <ul>
        <li>
            <strong>특별한 실행 권한set-user-id(set user ID upon execution)</strong>
            <ul>
                <li> set-user-id 설정된 실행파일을 실행하면</li>
               <li> 이 프로세스의 유효사용자ID는 그 실행파일의 소유자로 바뀜</li>
              <li> 이 프로세스는 실행되는 동안 그 파일의 소유자권한을 갖게 됨.</li>
            </ul>
        </li>
        <li>
            <strong>  예: /usr/bin/passwd 명령어</strong>
            <ul>
                <li> set-user-id 실행권한이 설정된 실행파일이며 소유자는 root</li>
                <li>일반 사용자가 이 파일을 실행하게 되면 이 프로세스의 유효 사용자ID는 root가 됨 </li>
             <li> /etc/passwd처럼 root만 수정할 수 있는 파일의 접근 및 수정가능</li>
            </ul>
        </li>
    </ul>

<h2> 프로세스</h2><br>
<img width="394" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/140b5bb6-b669-4853-b36e-514638c8d8dd">
<br>

<h2> 프로세스 구</h2><br>
<img width="190" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/004072dc-faba-415e-bcae-3ea664bcc277">
<br>

<h2> 프로세스 구조</h2>
    <ul>
        <li>
            <strong>텍스트(text)</strong>
            <ul>
                <li>  프로세스가실행하는실행코드를저장하는영역이다.</li>
            </ul>
        </li>
        <li>
            <strong>  데이터(data</strong>
            <ul>
                <li> 전역변수(global variable) 및 정적 변수(static variable)를 위한 메모리 영역이다.</li>
            </ul>
        </li>
     <li>
            <strong>힙(heap)</strong>
            <ul>
                <li>  동적 메모리 할당을 위한 영역이다. C 언어의malloc 함수를 호출하면 이 영역에서 동적으로 메모리를 할당해준다. </li>
            </ul>
        </li>
     <li>
            <strong>스택(stack area)</strong>
            <ul>
                <li> 함수 호출을 구현하기 위한 실행 시간스택(runtime stack)을 위한 영역으로 활성
레코드(activation record)가 저장된다.</li>
            </ul>
        </li>
      <li>
            <strong>U-영역(user-area)</strong>
            <ul>
                <li> 열린 파일 디스크립터, 현재 작업 디렉터리등과 같은 프로세스의 정보를 저장하는
영역이다</li>
            </ul>
        </li>
    </ul>



