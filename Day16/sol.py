import sys
import string


def solve(s):
    dances = s.split(',')
    programs = list(string.ascii_lowercase[:5])
    # programs = list(string.ascii_lowercase[:16])
    # move x programs from the end to the front.
    count = 0
    the_set = set()
    for dance in dances:
        if dance[0] == 's':
            value = dance[1:]
            print(value)
            # programs = programs[:-value] + programs[:len(programs)]
            # print(programs[-int(value):])
            # print(programs[:len(programs) - len(programs[-int(value):])])
            programs = programs[-int(value):] + programs[:len(programs) - len(programs[-int(value):])]
            print(programs)
    
    # swap program at position a with program at position b
        if dance[0] == 'x':
                # print(dance)
                if len(dance) == 6:
                    ind1 = int(dance[1:3])
                    ind2 = int(dance[4:])
                    # print(ind1, ind2)
                elif len(dance) == 5 and dance[3] == '/':
                    ind1 = int(dance[1:3])
                    ind2 = int(dance[4:5])
                    # print(ind1, ind2)
                elif len(dance) == 5 and dance[2] == '/':
                    ind1 = int(dance[1:2])
                    ind2 = int(dance[3:])
                    # print(ind1, ind2)
                else:
                    ind1 = int(dance[1:2])
                    ind2 = int(dance[3:4])
                # print(programs[ind1], programs[ind2])
                tmp1 = programs[ind1]
                tmp2 = programs[ind2]
                programs[ind1] = tmp2
                programs[ind2] = tmp1

    # swap program named A with program named B
        # if dance[0] == 'p':
        if dance[0] == 'p':
            first = dance[1]
            second = dance[3]
            for program in programs:
                if program == first:
                    ind1 = programs.index(program)
                elif program == second:
                    ind2 = programs.index(program)
            tmp1 = programs[ind1]
            tmp2 = programs[ind2]
            # print(programs[ind1], programs[ind2])
            programs[ind1] = tmp2
            programs[ind2] = tmp1

    # determine how many times it runs before a repeat shows
        while ''.join(programs) not in the_set:
            the_set.add(''.join(programs))
            count += 1

    print(''.join(programs))
    print(count)


def main():
    s = input()
    print(solve(s))

main()

