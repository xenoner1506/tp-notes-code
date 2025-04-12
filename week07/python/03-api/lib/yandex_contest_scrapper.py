import pandas as pd
import requests


API_URL = "https://api.contest.yandex.net/api/public/v2"
TOKEN = ""
HEADERS = {"Authorization": f"OAuth {TOKEN}"}
MILISECONDS_IN_DAY = 3.6e+5 * 24


def create_session() -> requests.Session:
    session = requests.Session()
    session.headers.update(HEADERS)
    session.base_url = API_URL
    return session


def get_problems_scores(problems):
    problems_scores = {}
    for i, problem in enumerate(problems):
        problems_scores[chr(65 + i)] = int(problem["score"]) if problem["score"] else 0
    return problems_scores


def get_standings(contest_id: int, session: requests.Session) -> pd.DataFrame:
    params = {"forJudge": "true", "showExternal": "true", "showVirtual": "true"}
    response = session.get(f"/contests/{contest_id}/standings", params=params)
    if not response.ok:
        raise Exception(response.text)
    data = response.json()
    rows = data["rows"]
    standings = {}
    for row in rows:
        participant_login = row["participantInfo"]["login"]
        standings[participant_login] = get_problems_scores(row["problemResults"])
    return pd.DataFrame(standings)


def get_submissions(contest_id: int, session: requests.Session) -> pd.DataFrame:
    params = {"pageSize": 500}
    response = session.get(f"/contests/{contest_id}/submissions", params=params)
    data = response.json()
    submissions = data["submissions"]
    return pd.DataFrame(submissions)

