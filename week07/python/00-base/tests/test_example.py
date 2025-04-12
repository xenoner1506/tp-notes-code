import pytest


def test_ok():
    assert 1 == 1


def test_not_ok():
    assert 1 != 1


@pytest.mark.parametrize("a", [1, 2])
@pytest.mark.parametrize("b", [1, 2])
def test_parametrized(a, b):
    assert a == b


def test_fixture(data):
    data_for_check = data

    assert data_for_check == (1, 2, 3)


def test_fixture2(data):
    data_for_check = data

    assert data_for_check == (1, 2, 3)

