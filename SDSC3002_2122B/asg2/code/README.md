# Core Number code running guide

All codes only tested on linux enviroment. So be fine on other OS.

## Running enviroment

### Using Conda

#### If you want to creat a new enviroment

```bash
conda create -n newenv
conda activate newenv
```

#### Else

```bash
conda install networkx
```

### Using PIP

```bash
pip install networkx.
```

## Running the code

1. Put ```DBLP.txt``` in the same path as the CA.py.
2. type ```python -u "/home/alex/Documents/_code/3002asg2py/CA.py"``` in the terminal
3. output file is located in the same path, and named ```output.txt```.

## Remarks

The algorithm running behind in this code is the The Cores Algorithm for Simple Undirected Graphs from paper "[An O(m) Algorithm forCores Decomposition of Networks](https://arxiv.org/pdf/cs/0310049.pdf "An O(m) Algorithm forCores Decomposition of Networks")".

(I tried other algorithms included trying my own, but the run time just can not beat this one.)
