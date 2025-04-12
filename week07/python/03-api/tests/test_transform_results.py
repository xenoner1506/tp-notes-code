import unittest
import pandas as pd
from lib import pivot_filtered_submissions, add_missed_students, add_scores, remap_reorder_authors


class TestSubmissions(unittest.TestCase):

    def setUp(self):
        self.submissions = pd.read_csv("tests/inputs/submissions.csv")

    def test_pivot_filtered_submissions(self):
        pass


def test_add_missed_students():
    pass


def test_add_scores():
    pass


def test_remap_reorder_authors():
    pass

