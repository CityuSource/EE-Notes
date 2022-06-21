# SDSC3002 Project

## Info

Group: Minor in Data Science

Project Title: Credit Card Customer Segmentation

## Start Guide

### Installation Using conda

#### Install Conda

##### Windows / Mac

[Anaconda installer for Windows](https://www.anaconda.com/products/individual "Anaconda installer for Windows")

##### Linux

```bash
wget https://repo.anaconda.com/archive/Anaconda3-2021.11-Linux-x86_64.sh
bash Anaconda-latest-Linux-x86_64.sh
```

#### Set up for conda-forge

```bash
conda config --add channels conda-forge
```

#### Set up conda environment

```bash
conda create -n seg # with environment name r_env as example
conda activate seg
```

#### Install package

```bash
conda install -c anaconda seaborn pandas scikit-learn scipy
conda install -c conda-forge Jupyter matplotlib
conda install -c plotly plotly
```

### Installation Using pip (alternative)

#### Install package

```bash
pip install matplotlib
pip install seaborn
pip install pandas
pip install scikit-learn
pip install scipy
pip install plotly
```

### Run the code

1. Place ```3002project.ipynb``` and ```CC_GENERAL.csv``` in the same directory
2. Run with VScode (recommanded), or other IDE you like
