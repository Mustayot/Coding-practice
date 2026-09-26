import square

def test_square():
    assert square.square(3) == 9
    assert square.square(-2) == 4
    assert square.square(2) == 4
    assert square.square(0) == 0
    assert round(square.square(1.1), 2) == 1.21
