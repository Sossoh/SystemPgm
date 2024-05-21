
<h2>파일 및 레코드 잠금의 원리</h2>
    <ul>
        <li>
            <strong>파일 잠금 (File Locking)</strong> <br>
          <img width="284" alt="image" src="https://github.com/Sossoh/SystemPgm/assets/128332587/bfd315db-505d-4e57-9985-7ede3a449421">
          <br>
            <ul>
                <li><strong>목적</strong>: 여러 프로세스가 동시에 파일에 접근하여 읽기/쓰기 작업을 수행할 때 데이터의 일관성을 유지하고 충돌을 방지하기 위함.</li>
                <li><strong>유형</strong>:
                    <ul>
                        <li><strong>공유 잠금 (Shared Lock)</strong>: 여러 프로세스가 파일을 읽을 수 있지만 쓸 수는 없음.</li>
                        <li><strong>배타 잠금 (Exclusive Lock)</strong>: 한 프로세스만 파일에 읽기와 쓰기를 모두 수행할 수 있음.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>
            <strong>레코드 잠금 (Record Locking)</strong>
            <ul>
                <li><strong>목적</strong>: 파일 내 특정 레코드에 대해 다른 프로세스의 접근을 제어함으로써 데이터의 일관성을 유지.</li>
                <li><strong>유형</strong>:
                    <ul>
                        <li><strong>공유 잠금 (Shared Lock)</strong>: 여러 프로세스가 특정 레코드를 읽을 수 있지만 쓸 수는 없음.</li>
                        <li><strong>배타 잠금 (Exclusive Lock)</strong>: 한 프로세스만 특정 레코드에 읽기와 쓰기를 모두 수행할 수 있음.</li>
                    </ul>
                </li>
            </ul>
        </li>
    </ul>
    <h2>프로세스 간 데이터 전송 방법</h2>
    <ul>
        <li><strong>파일을 통한 통신</strong>: 한 프로세스가 파일에 데이터를 쓰고, 다른 프로세스가 그 파일을 읽는 방식.</li>
        <li><strong>파이프 (Pipes)</strong>:
            <ul>
                <li><strong>익명 파이프</strong>: 부모-자식 프로세스 간 통신에 사용.</li>
                <li><strong>이름 있는 파이프 (Named Pipes)</strong>: 관련 없는 프로세스 간 통신에 사용.</li>
            </ul>
        </li>
        <li><strong>메시지 큐 (Message Queues)</strong>: 프로세스 간 메시지를 보내고 받을 수 있도록 큐를 이용하는 방법.</li>
        <li><strong>공유 메모리 (Shared Memory)</strong>: 두 프로세스가 동일한 메모리 영역을 공유하여 데이터를 주고받는 방법.</li>
        <li><strong>소켓 (Sockets)</strong>: 네트워크를 통해 서로 다른 시스템에 있는 프로세스 간 통신에 사용.</li>
    </ul>
    <h2>문제점</h2>
    <ul>
        <li>
            <strong>한 프로세스가 파일 내용을 수정하는 동안에 다른 프로세스가 그 파일을 읽는 경우</strong>
            <ul>
                <li><strong>문제점</strong>: 데이터 일관성이 깨질 수 있음.</li>
                <li><strong>해결책</strong>: 파일 잠금 사용 - 파일을 수정하는 동안 다른 프로세스가 파일을 읽지 못하게 함.</li>
            </ul>
        </li>
        <li>
            <strong>두 개의 프로세스가 하나의 파일에 동시에 접근하여 데이터를 쓰는 경우</strong>
            <ul>
                <li><strong>문제점</strong>: 데이터 충돌이 발생할 수 있음.</li>
                <li><strong>해결책</strong>: 배타 잠금 사용 - 한 프로세스가 파일에 쓰는 동안 다른 프로세스가 파일에 접근하지 못하게 함.</li>
            </ul>
        </li>
    </ul>
