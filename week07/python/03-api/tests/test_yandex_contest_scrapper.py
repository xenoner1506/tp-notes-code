import json
import unittest
from lib import get_standings
from unittest.mock import Mock


data = """
{
  "rows": [
    {
      "participantInfo": {
        "id": 0,
        "login": "string",
        "name": "string",
        "startTime": "string",
        "uid": "string"
      },
      "placeFrom": [
        0
      ],
      "placeTo": [
        0
      ],
      "problemResults": [
        {
          "score": "12",
          "status": "string",
          "submissionCount": "string",
          "submitDelay": 0
        }
      ],
      "score": "string"
    }
  ],
  "statistics": {
    "lastSubmit": {
      "participantId": 0,
      "participantName": "string",
      "problemTitle": "string",
      "submitTime": 0
    },
    "lastSuccess": {
      "participantId": 0,
      "participantName": "string",
      "problemTitle": "string",
      "submitTime": 0
    }
  },
  "titles": [
    {
      "id": "string",
      "name": "string",
      "title": "string"
    }
  ]
}
"""

class Result:
    ok = True

    def __init__(self, data):
        self.data = data

    def json(self):
        return json.loads(self.data)

class DummySession:
    status_code = 200

    def get(self, endpoint: str, params: dict) -> Result:
        return Result(data)

class TestStandings(unittest.TestCase):

    def test_get_standings_dummy(self):
        standings = get_standings(1, DummySession())

    def test_get_standings_mock(self):
        mock_session = Mock()
        mock_session.get.return_value.status_code = 200
        mock_session.get.return_value.json.return_value = json.loads(data)
        standings = get_standings(1, mock_session)
        self.assertEqual(mock_session.get.return_value.json.called, 1)

