one_num = int(input())

if one_num <= 99 : print(one_num)
else : 
    cnt = 99
    for i in range(100, one_num + 1):
        j_cnt = 0
        list_i = list(str(i))
        d = int(list_i[0]) - int(list_i[1])
        for j in range(len(list_i) - 1):
            if int(list_i[j]) - int(list_i[j+1]) == d : 
                j_cnt += 1
                if j_cnt == len(list_i) - 1: cnt += 1   
    print(cnt)