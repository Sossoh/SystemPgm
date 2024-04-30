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
                파일 타입: 일반 파일, 디렉터리, 블록 장치, 문자 장치 등
                파일 크기
                사용권한
                파일 소유자 및 그룹
                접근 및 갱신 시간
                데이터 블록에 대한 포인터(주소) 등
<img width="456" alt="스크린샷 2024-04-30 182438" src="https://github.com/Sossoh/SystemPgm/assets/128332587/77a602f0-b083-40bd-9667-a4cd50a7eb9a">
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
            <img width="516" alt="스크린샷 2024-04-30 182833" src="https://github.com/Sossoh/SystemPgm/assets/128332587/e667c90b-fcbb-4f6a-90d9-f8ad6f5dfd66">
            <ul>
                <li>파일 입출력 구현을 위한 커널 내 자료구조</li>
                파일 디스크립터 배열(Fd array)
                >>프로세스 당 하나씩 갖는다.
                >>파일 디스크립터 배열(열린 파일 테이블의 엔트리를 가리킨다.)
                >>파일 디스크립터( 파일 디스크립터 배열의 인덱스)
                열린 파일 테이블(Open File Table)
                >>파일 테이블 (file table)
                >>>커널 자료구조
                >>>열려진 모든 파일 목록
                >>파일 테이블 항목 (file table entry)
                >>>파일 상태 플래그(read, write, append, sync, nonblocking,…)
                >>>파일의 현재 위치 (current file offset)
                >>>i-node에 대한 포인터
                동적 i-노드 테이블(Active i-node table)
                >>동적 i-노드 테이블
                >>>커널 내의 자료 구조
                >>>Open 된 파일들의 i-node를 저장하는 테이블
                >>i-노드
                >>>하드 디스크에 저장되어 있는 파일에 대한 자료구조
                >>>한 파일에 하나의 i-node
                >>>하나의 파일에 대한 정보 저장(소유자, 크기,파일이 위치한 장치,파일 내용 디스크 블럭에 대한 포인터)
            </ul>
        </div>
    </div>
</body>
</html>
