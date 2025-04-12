import yaml
import pandas as pd


def pivot_filtered_submissions(submissions: pd.DataFrame) -> pd.DataFrame:
    submissions["inTime"] = submissions["timeFromStart"] < MILISECONDS_IN_DAY * 6.5
    mask = submissions["verdict"] == "OK"
    df = submissions[mask].groupby(["author", "problemAlias", "inTime"]).agg({"score": "max"}).reset_index()
    return df.pivot(index='author', columns='problemAlias', values='inTime')


def add_scores(results: pd.DataFrame) -> None:
    results[results == True] = 1
    results[results == False] = 0.75
    results[pd.isna(results)] = 0
    results.loc[""] = {key: 1 for key in results.columns}
    results["sum"] = results.sum(axis=1) / len(results.columns)
    results.loc[""]["sum"] = len(results.columns)


def add_missed_students(submissions: pd.DataFrame, filename: str = "mapping.yaml") -> None:
    with open(filename, "r") as f:
        mapping = yaml.safe_load(f)
    missed_students = []
    students_names = [name for user, name in mapping.items() if user in submissions.index]
    for index, name in mapping.items():
        if index not in submissions.index and name not in students_names:
            missed_students.append(index)
            submissions.loc[index] = None


def remap_reorder_authors(submissions: pd.DataFrame, filename: str = "mapping.yaml") -> None:
    with open(filename, "r") as f:
        mapping = yaml.safe_load(f)
    new_indices_order = [""]
    new_indices_names = [""]
    for index, name in mapping.items():
        if index in submissions.index:
            new_indices_order.append(index)
            new_indices_names.append(name)
    df = submissions.reindex(new_indices_order)
    df.index = new_indices_names
