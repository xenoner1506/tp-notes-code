from argparse import ArgumentParser
from lib import create_session, get_submissions, pivot_filtered_submissions, add_missed_students, add_scores, remap_reorder_authors


def main(contest_id: int) -> None:
    session = create_session()
    submissions = get_submissions(contest_id, session)
    pivot_submissions = pivot_filtered_submissions(submissions)
    add_missed_students(pivot_submissions)
    add_scores(pivot_submissions)
    remap_reorder_authors(pivot_submissions)
    print(pivot_submissions.to_csv(sep="\t").replace(".", ","))


if __name__ == "__main__":
    parser = ArgumentParser()
    parser.add_argument("--contest-id", type=int)

    args = parser.parse_args()

    main(args.contest_id)

