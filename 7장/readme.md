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
            <h1>파일 시스템 구조</h1>
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
        </div>
    </div>
</body>
</html>
