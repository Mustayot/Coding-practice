overworld = ["grass", "tree", "dirt", "villager", "village", "flower", "sheep", "cow", "trees"]
nether = ["lava", "netherrack", "ghast", "soul", "fungus", "piglin"]
the_end = ["ender", "end", "pearl", "void","tower", "dragon"]
ocean = ["water", "ocean", "kelp", "fish", "dolphin", "turtle"]
punctuation = ''':;!?/)(+-&_$#@*,.，。？-：；"'''
    
def get_input():
    result = ""
    sentence = input("plz write ur adventure note\n")
    sentence = sentence.lower().strip()
    for _ in sentence:
        if _ not in punctuation:
            result = result + _
    return result
                
def if_a_sentence(result):
    while True:                    
        result = result.split()     
        lengths = len(result)  
        if lengths < 2:           
            print("it must be a sentence")  
            result = get_input()            
        else:                    
            break                                 

def confirm_dimension(result):
    score_overworld = 0
    score_nether = 0
    score_end = 0
    score_ocean = 0
    max_score = 0
    result = result.split()
    for keywords in result:
        if keywords in overworld:
            score_overworld = score_overworld + 1
        elif keywords in nether:
            score_nether = score_nether + 1
        elif keywords in the_end:
            score_end = score_end + 1
        elif keywords in ocean:
            score_ocean = score_ocean + 1
    scores = {
    "overworld": score_overworld,
     "nether": score_nether, 
     "the_end": score_end, 
     "ocean": score_ocean
     }
    for dimension in scores:
        score = scores[dimension]
        if score > max_score:
            max_score = score
            max_score_dimension = dimension
    return max_score, max_score_dimension
    

    

result = get_input()
if_a_sentence(result)
max_score, max_score_dimension = confirm_dimension(result)

print(result)
print(max_score,max_score_dimension)