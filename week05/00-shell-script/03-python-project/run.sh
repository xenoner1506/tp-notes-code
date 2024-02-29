#!/bin/bash
ENV_RUN=$1

if $ENV_RUN
then
  echo "Create environment and run main.py"
  python3 -m venv .venv
  source .venv/bin/activate
else
  echo "Run main.py without environment"
fi

echo "Install necessary libraries"
pip install -r requirements.txt

python3 main.py
