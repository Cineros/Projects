min_candy = len(ratings)
        candy_counter = 1
        for i in range(0, len(ratings)):
            if i == 0:
                if ratings[i] > ratings[i+1]:
                    min_candy += 1
                    candy_counter += 1
                else:
                    candy_counter = 1
            elif i == len(ratings)-1:
                if ratings[i] > ratings[i-1]:
                    min_candy += 1
                    candy_counter += 1
                else:
                    candy_counter = 1
            else:
                if i != len(ratings)-1:
                    if ratings[i] > ratings[i-1] or ratings[i] > ratings[i+1]:
                        if ratings[i] > ratings[i-1]:
                            min_candy += candy_counter
                            candy_counter += 1
                        else:
                            if ratings[i-1] > ratings[i] and candy_counter == 1:
                                min_candy += 1
                            min_candy += 1
                            candy_counter = 2
                    else:
                        candy_counter = 1
        return min_candy
