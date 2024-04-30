<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <h1>7장</h1>
</head>
<body>
    <div class="container">
        <div class="content">
            <h4>파일 시스템 구조</h4>
           <ul>
        <li>부트블록</li>
        파일 시스템 시작부에 위치하고 보통 첫 번째 섹터를 차지
        부트스트랩 코드가 저장되는 블록
        <li>슈퍼 블록</li>
             전체 파일 시스템에 대한 정보를 저장
             총 블록 수, 사용 가능한 i-노드 개수, 사용 가능한 블록 비트 맵, 블록의 크기, 사용 중인 블
             록 수, 사용 가능한 블록 수 등
        <li>i-리스트(i-list)</li>
             각 파일을 나타내는 모든 i-노드들의 리스트
             한 블록은 약 40개 정도의 i-노드를 포함
        <li>데이터 블록</li>
             파일의 내용(데이터)을 저장하기 위한 블록들
    </ul>
            <h3>i-노드(i-Node)</h3>
            <ul>
                <li>한 파일은 하나의 i-노드를 갖는다.</li>
                <li>파일에 대한 모든 정보를 가지고 있다</li>
                파일 타입: 일반 파일, 디렉터리, 블록 장치, 문자 장치 등<br><br>
<img width="456" alt="스크린샷 2024-04-30 182438" src="https://github.com/Sossoh/SystemPgm/assets/128332587/77a602f0-b083-40bd-9667-a4cd50a7eb9a"><br>
        <h4>블록 포인터</h4>
        <ul>
        <li>데이터 블록에 대한 포인터</li>
            파일의 내용을 저장하기 위해 할당된 데이터 블록의 주소
        <li>하나의 i-노드 내의 블록 포인터</li>
            직접 블록 포인터 10개
            간접 블록 포인터 1개
            이중 간접 블록 포인터 1개
        </ul>       
            </ul>
            <h4>파일 입출력 구현</h4>
            <img width="516" alt="스크린샷 2024-04-30 182833" src="https://github.com/Sossoh/SystemPgm/assets/128332587/e667c90b-fcbb-4f6a-90d9-f8ad6f5dfd66"><br>
            <ul>
                <li>파일 입출력 구현을 위한 커널 내 자료구조</li>
                파일 디스크립터 배열(Fd array)<br>
                >>프로세스 당 하나씩 갖는다.<br>
                >>파일 디스크립터 배열(열린 파일 테이블의 엔트리를 가리킨다.)<br>
                >>파일 디스크립터( 파일 디스크립터 배열의 인덱스)<br>
                열린 파일 테이블(Open File Table)<br>
                >>파일 테이블 (file table)<br>
                >>>커널 자료구조<br>
                >>>열려진 모든 파일 목록<br>
                >>파일 테이블 항목 (file table entry)<br>
                >>>파일 상태 플래그(read, write, append, sync, nonblocking,…)<br>
                >>>파일의 현재 위치 (current file offset)<br>
                >>>i-node에 대한 포인터<br>
                동적 i-노드 테이블(Active i-node table)<br>
                >>동적 i-노드 테이블<br>
                >>>커널 내의 자료 구조<br>
                >>>Open 된 파일들의 i-node를 저장하는 테이블<br>
                >>i-노드<br>
                >>>하드 디스크에 저장되어 있는 파일에 대한 자료구조<br>
                >>>한 파일에 하나의 i-node<br>
                >>>하나의 파일에 대한 정보 저장(소유자, 크기,파일이 위치한 장치,파일 내용 디스크 블럭에 대한 포인터)<br>
            </ul>
            <h4>파일 상태</h4>
            <h5>
                파일에 대한 모든 정보<br>
                블록수, 파일 타입, 사용 권한, 링크수, 파일 소유자의 사용자 ID,
                그룹 ID, 파일 크기, 최종 수정 시간 등<br>
            </h5>
            <img width="511" alt="스크린샷 2024-04-30 183717" src="https://github.com/Sossoh/SystemPgm/assets/128332587/38c118aa-9c0d-4e3e-8b82-704e83a04f2e">
            <br>
<img width="512" alt="스크린샷 2024-04-30 183726" src="https://github.com/Sossoh/SystemPgm/assets/128332587/0fc60ff2-3291-4a61-ada2-c65a95144ca7"><br>
            
        </div>
    </div>
</body>
</html>
