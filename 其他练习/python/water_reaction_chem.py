def get_mass():
    h2mass = float(input("how many kilograms of hydrogen?\n"))
    o2mass = float(input("how many kilograms of oxygen?\n"))
    return h2mass, o2mass
    
def calculate_mole(h2mass, o2mass):
    h2mole = h2mass / 2
    o2mole = o2mass / 32
    return h2mole, o2mole
    
def result(h2mole, o2mole):
    if h2mole == o2mole * 2:
        watermole = h2mole
        watermass = watermole * 18
        return watermass
    elif h2mole > o2mole * 2:
        print("hydrogen is too much")
    else:
        print("oxygen is too much")

h2mass, o2mass = get_mass()
h2mole, o2mole = calculate_mole(h2mass, o2mass)
watermass = result(h2mole, o2mole)

if h2mole == o2mole * 2:
    print(f"u will get {watermass} kilograms water")