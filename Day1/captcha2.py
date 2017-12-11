def captcha(num_sequence):
    total = 0
    new_values = [int(i) for i in num_sequence]
    steps = int(len(new_values) / 2)
    
    value_dict = dict(enumerate(new_values))
    for key in value_dict.keys():
        if key == value_dict[(key + steps) % len(value_dict.keys())]:
            total += value_dict[key]
    return total
print(captcha('12131415'))

