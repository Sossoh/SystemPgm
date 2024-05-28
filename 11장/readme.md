 <h2> 프로세스 생성</h2>
    <ul>
        <li>
            <strong>  fork() 시스템 호출</strong>
            <ul>
                <li> 부모 프로세스를 똑같이 복제하여 새로운 자식 프로세스를 생성</li>
               <li> <strong>자기복제(自己複製)</strong></li>
            </ul>
        </li>
    </ul>
<br>
<img width="401" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/06089d9f-5e48-448d-b680-cb05a199c84d">
<br>
<img width="293" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/63e5a165-9c41-42ba-911d-2b5688cc7bba">
<br>
 <h2> fork()는 한 번 호출되면 두 번 리턴한다</h2>
    <ul>
        <li>
           <ul>
                <li>자식 프로세스에게는 0을 리턴하고 부모 프로세스에게는 자식 프로세스ID를 리턴한다.</li>
             <li>부모 프로세스와 자식 프로세스는 병행적으로 각각 실행을 계속한다. </li>
             <li>fork함수는 자기자신을 복제하는 함수이다 </li>
            </ul>
        </li>
    </ul>
    <h2>부모 프로세스와 자식 프로세스 구분</h2>
    <br>
    <img width="472" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/960d86f9-21ee-4ca7-8de8-621e79527e78">
  <br>
 <h2>프로세스 기다리기: wait()</h2>
    <ul>
        <li>
            <strong> 자식 프로세스 중의 하나가 끝날 때까지 기다린다. </strong>
            <ul>
                <li>끝난 자식 프로세스의 종료 코드가 status에 저장되며</li>
              <li>끝난 자식 프로세스의 번호를 리턴한다. </li>
            </ul>
        </li>
    </ul>
    <br>
    <img width="458" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/1df38cea-bfed-4a91-b967-496879227429">
<br>
<h2>fork()</h2><br>
<img width="430" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/c71add17-23b8-4a1c-9fb3-339218af318d">
<br>



 <h2>fork1.c 실행</h2>
 <img width="255" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/f6ca5d48-7350-44a7-8775-c554b63f2900">
