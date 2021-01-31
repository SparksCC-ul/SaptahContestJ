no_tests = int(input())
for i in range(no_tests):
    inputnumbers = input()
    lstofnums = inputnumbers.split(" ")
    srt_nums = sorted([int(lstofnums[0]),int(lstofnums[1]),int(lstofnums[2])])
    if(srt_nums[1]==srt_nums[2]):
        print(srt_nums[0])
    else:
        print(srt_nums[1])
