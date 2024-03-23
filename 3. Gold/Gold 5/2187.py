def first(N, A, B, dots, hor, ver):
    maxdiff = 0
    for j in range(1, ver - A + 2):
        for i in range(1, hor - B + 2):
            maxnum = 0
            minnum = 2000000
            for dot in dots:
                if dot[0] >= j and dot[0] < j + A and dot[1] >= i and dot[1] < i + B:
                    if dot[2] > maxnum:
                        maxnum = dot[2]
                    if dot[2] < minnum:
                        minnum = dot[2]

            if maxnum - minnum > maxdiff:
                maxdiff = maxnum - minnum
    return maxdiff

def second(N, A, B, dots, hor, ver):
    maxdiff = 0
    for (j, i, _) in dots:
        maxnum = 0
        minnum = 2000000
        for dot in dots:
            if dot[0] >= j and dot[0] < j + A and dot[1] >= i and dot[1] < i + B:
                if dot[2] > maxnum:
                    maxnum = dot[2]
                if dot[2] < minnum:
                    minnum = dot[2]

        if maxnum - minnum > maxdiff:
            maxdiff = maxnum - minnum

    for (j, i, _) in dots:
        maxnum = 0
        minnum = 2000000
        for dot in dots:
            if dot[0] <= j and dot[0] > j - A and dot[1] >= i and dot[1] < i + B:
                if dot[2] > maxnum:
                    maxnum = dot[2]
                if dot[2] < minnum:
                    minnum = dot[2]

        if maxnum - minnum > maxdiff:
            maxdiff = maxnum - minnum

    return maxdiff

(N, A, B) = [int(i) for i in input().split(' ')]
dots = []
hor = 0
ver = 0
for i in range(0, N):
    dots.append([int(i) for i in input().split(' ')])
    if hor < dots[-1][1]:
        hor = dots[-1][1]
    if ver < dots[-1][0]:
        ver = dots[-1][0]

#print(first(N, A, B, dots, hor, ver))
print(second(N, A, B, dots, hor, ver))

