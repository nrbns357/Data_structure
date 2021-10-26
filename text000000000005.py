# li=[]
# li.append('BTS')
# li.append('Black Pink')
# print(li)
# print(li[1])
#
#
# #가수 세 명을 입력 받기
# for i in range(0,3,1):
#     li.append(input('가수 이름을 쓰세요 : '))
#
# print('-' * 20)
# print(li)
# print(f'리스트 개수 {len(li)}')
#

#팩토리얼 구현
#5! = 120

# num = int(input("자연수 입력 : "))
# fac = 1 #초기값 설정
#
# for i in range(1, num +1):
#     fac = fac * i
# print(f"{num} 팩토리얼은 {fac}입니다.")

# import random
# a1="오늘도 행복하세요"
# a2 = "폭염 주의하세요"
# a3="오늘 로또를 사세요"
# a4="당신은 천재에요"
# a5="영화 무료 쿠폰을 보내드립니다."
# print(":::오늘의 운세:::")
# input("엔터를 누르면 시작됩니다.")
# c=random.randint(1,5)
# if c==1:
#     d=a1
# elif c==2:
#     d=a2
# elif c==3:
#     d=a3
# elif c==4:
#     d=a4
# else:
#     d=a5
#
# print('------------')
# print(d)
# print('------------')

# nation={'한국':'서울', '중국':'북경', '일본':'동경'}
# n=input('나라 이름 입력 : ')
# print(nation[n])

# from collections import deque
# queue=deque()
# queue.append(1)
# queue.append(2)
# queue.append(3)
# print(queue)
# print(queue.popleft())
# print(queue.popleft())
# print(queue.popleft())
# print(queue)
def main():
    n = int(input())
    if n == 0:
        print(1)
    else:
        a = solution(n)
        print(a)


def solution(n):
    if n == 1:
        return 1
    else:
        return n*solution(n-1)

main()
