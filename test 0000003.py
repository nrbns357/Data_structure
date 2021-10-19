# #매개변수 한 개인 함수 만들어보기
#
# def Hello(name):
#     print('Hi',name)
#
# Hello('Kim')
#
# def Hello1(name):
#     print(f'Hello, {name}') #f-string 방식으로 출력, f 접두사
#
# def Hello2(name, hobby):
#     print(f'Hi, My name is {name},'
#           f'My hobby is {hobby}')
#
# Hello1('Kim')
# Hello2('Kim' , 'soccer')
#
# # [문제] 매개변수로 넘긴 문자열 3개를 출력하는 프로그램을 만들어보시오.
#
# def info(name, address, phone): #이름 주소 전화번호
#     print(f'제 이름은 {name}이고, 주소는 {address}'
#           f'제 전화번호는 {phone}에요')
#     info('금현호','ㄴㅇㅁㅇㄴ','01231')
#
#
# #[기초 문제] Hello() 함수에 'Kim'과 18숫자를 매개변수 값으로 넘겨줄 때
# #'Hi, KIm,you are 18 yrats old.' 이 되도록 출력하새요
#
# def Hello(name, age):
#     print(f'Hi, {name},you are {age} yrats old.')
#
# Hello('Kim',18)
#
# # [문제] 자신이 좋아하는 가수 이름을 3개 입력(input())받고, 출력하는 함수 만들기
# #함수이름 : singer(a,b,c)
#
#
#
# def singer(a,b,c)
#     print(f'내가 좋아하는 가수 {a},{b},{c}입니다.')
#
#
#
# a = input('좋아하는 첫 번째 가수 : ')
# b = input('좋아하는 첫 번째 가수 : ')
# c = input('좋아하는 첫 번째 가수 : ')
#
# singer(a,b,c)
#
#
#
# n1,n2= map(int,input().split()) #공책 메모
# print(n1,n2)

# [믄제] 두 수를 한 줄에 입력받아 두 변수의 값을 교환하여 출력하도록 하시오.
# [입력] 9 7
# [출력] 7 9

# a,b = map(int, input().split()) #공책 메모
# print(a,b)
# a,b = a,b #두 변수의 값을 교환
# print(a,b)
#ㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣ
# #제어문 : if문 #공책 메모
# a=5
# if a >= 3:
#     print('3이상')
# elif a > 1:
#     print('3미만 1초과')
# else:
#     print('1이하')
#
#
# # 더 큰수를 출력하는 프로그램
# #8 3
# #8
#
#
# a,b = map(int ,input().split())
# if a>b:
#     print(a)
# else:
#     print(b)


#숫자를 하나 입력바다 70정 이상이면 최우수
#그외 50점 이상이면 우수
#그외 20점 이상이면 보통
#그외 노력필요를 출력하는 프로그램 작성

# a = int(input())
#
# if a>=70:
#     print("최우수")
# elif a>=50:
#     print("우수")
# elif a>=20:
#     print("보통")
# else:
#     print("노력필요")


#리스트에 주어진 알파벳을 오름차순으로 정렬하라
# arr = ['b','c','a','f','t','e']
# arr.sort()
# print(arr)
# print(arr[2])
# print(len(arr)) #len은 길이를 출력한다(배열의 길이)

# arr = ['b','c','a','f','t','e']
# arr.sort(reverse=True) #내림차순 정렬
# print(arr[-1]) #가장 마지막 요소 출력
# # print(arr[len(arr)-1])


# 주어진 점수 리스트에서 최고점과 최저점을 출력하시오.
# score = [55,78,99,34,87]
#
# score.sort()
# print(score[-1],score[0])
#
# print(max(score)) #최고점
# print(min(score)) #최저점


#for
for i in range(10):
    print(i,end=" ")
    print(i) #한 칸씩 내려가면서 세로로 출력 (enter가 기본값)

# 1에서 100이하까지 홀수를 한줄로 출력하시오.
for i in range(1,101,2):
    print(i,end=' ')
