# Email Spam Classification (CS251 Project)

This project implements an end-to-end spam email filter using two supervised learning algorithms: **K-Nearest Neighbors (KNN)** and **Naive Bayes**. The classifier is trained and tested on the Enron spam email dataset, consisting of tens of thousands of real-world emails.

## 🎯 Objectives
- Implement K-Nearest Neighbors and Naive Bayes classifiers
- Preprocess email text data into numerical features
- Train and evaluate models on real spam vs. ham (not spam) classification
- Analyze model performance and make predictions on unseen email data
- Experience a full machine learning workflow from raw data to predictions

## 📂 Project Structure
- `email_preprocessor.py`: Prepares raw email data for training
- `knn.py`: Implementation of KNN classifier
- `naive_bayes.py`: Implementation of Naive Bayes classifier
- `classifier.py`: Shared functions and evaluation code
- `knn.ipynb`: Jupyter notebook for Week 1 (KNN)
- `naive_bayes.ipynb`: Jupyter notebook for Week 2 (Naive Bayes)
- `spam_email_preprocessing.ipynb`: Notebook for processing and cleaning email data

## 🗃️ Dataset
The project uses the **Enron Email Dataset**, including:
- `enron_dev.zip`
- `enron.zip`
- Optional spiral CSVs for training/testing additional models

## 🧪 Features
- Tokenization and word-frequency encoding of email text
- Handling of stopwords and irrelevant content
- Classification using KNN and Naive Bayes
- Accuracy comparison and performance analysis

## 📌 Notes
- Built using Python, NumPy, and Jupyter notebooks
- Focuses on text classification and real-world data handling
- Developed as part of Colby’s CS251 Data Analysis & Visualization course

