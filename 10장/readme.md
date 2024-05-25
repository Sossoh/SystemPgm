
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
    
