players = 463
last_marble = 71787
test_players = 10
test_last_marble = 1618
list_of_marbles = []
current_index = 0
score = 0

player_dict = {x + 1: 0 for x in range(test_players)}
print(player_dict.items())

for x in range(last_marble):
    score = 0
    # add the value to the right
    if x == 0 or x == 1:
        list_of_marbles.append(x)
        current_index += 1
    list_of_marbles[current_index % len(list_of_marbles)]
    if x // 23 == 1:
        score += 23
        score += list_of_marbles[-7 % len(list_of_marbles)]

print(score)
