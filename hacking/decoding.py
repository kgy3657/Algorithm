import csv
import subprocess

# CSV 파일 경로
csv_file_path = "output.csv"

# CSV 파일을 쓰기 모드로 열고 CSV writer 생성
with open(csv_file_path, mode="w", newline="", encoding="utf-8") as file:
    writer = csv.writer(file)

    # 제목 행 작성
    writer.writerow(["chr(i)", "chr(j)", "result.stdout"])

    # 결과를 CSV 파일에 작성
    for i in range(32, 127):
        for j in range(32, 127):
            command = ["./a.out", chr(i) + chr(j)]
            result = subprocess.run(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
            writer.writerow([chr(i), chr(j), result.stdout])
