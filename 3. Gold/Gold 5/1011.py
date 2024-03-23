def min_hop(prev_hop, distance):
    if distance == 0 and prev_hop == 1:
        return 0
    elif prev_hop - 1 > distance:
        return -1
    else:
        next_num = min_hop(prev_hop + 1, distance - (prev_hop + 1))
        if next_num == -1:
            next_num = min_hop(prev_hop, distance - prev_hop)
            if next_num == -1:
                next_num = min_hop(prev_hop - 1, distance - (prev_hop - 1))
                if next_num == -1:
                    return -1
                else:
                    return 1 + next_num
            else:
                return 1 + next_num
        else:
            return 1 + next_num

def min_hop2(distance):
    if distance == 0:
        return 0
    hops = [1]
    total = sum(hops)
    while not (total == distance and hops[-1] == 1):
        if total < distance:
            hops.append(hops[-1] + 1)
        else:
            while hops[-2] - 1 == hops[-1]:
                hops.pop()
            hops[-1] -= 1

        total = sum(hops)

    return len(hops)

def min_hop3(distance):
    max_hop = 1
    total_dist = 0
    hop_num = 0
    while True:
        total_dist += max_hop
        hop_num += 1
        if total_dist >= distance:
            return hop_num
        total_dist += max_hop
        hop_num += 1
        if total_dist >= distance:
            return hop_num
        max_hop += 1


if __name__ == "__main__":
    test_num = int(input())
    for i in range(test_num):
        (x, y) = input().split(" ")
        x = int(x)
        y = int(y)
        distance = y - x
        print(min_hop3(distance))


