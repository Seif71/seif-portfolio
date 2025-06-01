# Data Analysis with Custom CSV Parser (CS251 Project)

This project implements a Python class called `Data` that reads and processes data from `.csv` files. It provides functionality for handling both numeric and categorical data and is designed to support real-world datasets for analysis and visualization.

## 🔍 Objectives
- Parse and work with numeric and categorical data in CSV format
- Handle missing data gracefully
- Perform data selection by variable name (not just column index)
- Use `numpy` for efficient computation
- Create data visualizations with `matplotlib`
- Practice writing clean, vectorized Python code

## 🧠 Features
- Reads CSV files with headers and type rows
- Stores numeric and categorical variables
- Maps headers to indices
- Retrieves individual samples or multiple column indices by name
- Handles missing values
- Supports a variety of test cases via separate test scripts

## 🧪 Testing
The following test scripts were used to validate the implementation:
- `test01_read_numeric_data.py`
- `test02_read_data_errors.py`
- `test03_read_cat_data.py`
- `test04_read_missing_data.py`
- `test05__str__.py`
- `test06_get.py`

These tests check for correct parsing, error handling, and data retrieval.

## 📊 Tools Used
- Python 3.13+
- NumPy
- Matplotlib

## 📁 Dataset Examples
- Iris Dataset
- Anscombe Quartet
- Spotify Data
- Custom test datasets (numeric, categorical, and mixed)

## 🚀 Final Step
In the final phase of the project, the `Data` class was used to analyze a real-world dataset using a Jupyter notebook.

## 📌 Note
This project was completed as part of Colby's CS251 course to reinforce data handling, computational thinking, and practical analysis with Python.

