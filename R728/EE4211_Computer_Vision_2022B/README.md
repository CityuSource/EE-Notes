# Proj Title

## Title

Will be updated later.

## Setting up running environment

### Install Conda

#### Windows/ Mac

[Anaconda installer for Windows](https://www.anaconda.com/products/individual "Anaconda installer for Windows")

#### Linux

```bash
wget https://repo.anaconda.com/archive/Anaconda3-2021.11-Linux-x86_64.sh
bash Anaconda-latest-Linux-x86_64.sh
```

### Set up for conda-forge

```bash
conda update --all
conda config --add channels conda-forge
```

### Set up conda environment

```bash
conda create -n r_env # with environment name r_env as example
conda activate r_env
```

### Install package

```bash
conda install -c conda-forge r-recommended r-essentials r-irkernel r-languageserver radian
conda install -c conda-forge Jupyter
```

If installation fails as following:

```console
Collecting package metadata (current_repodata.json): done
Solving environment: failed with initial frozen solve. Retrying with flexible solve.
Solving environment: failed with repodata from current_repodata.json, will retry with next repodata source.
Collecting package metadata (repodata.json): done
```

#### Fixing in Linux

```bash
!!
```

#### Fixing in Windows or mac

Repeat the last command

### Console log the path of R and Radian in Linux

```bash
which r
which radian
```

### Console log the path of R and Radian in Windows or mac

They are usually in the following path

```console
R: ".../anaconda3/envs/r_env/bin/radian",
Radian: ".../anaconda3/envs/r_env/lib/R/bin",
```

### Assign Radian as the default R in Linux

```bash
alias r="radian"
```

### Setup the R kernel for Jupyter for Linux Only

```bash
radian
```

```R
IRkernel::installspec()
quit()
```

### Set up for VScode

```bash
git https://github.com/AlexLeungZ/SDSC2102-project.git
```

Open the repository with VScode

#### You may also install the following extendsion in VScode

```console
ms-python.python
ms-toolsai.jupyter
Ikuyadeu.r
donjayamanne.python-environment-manager
```

#### You may also add the following settings to your working directory

1. Create folder called ```.vscode```
2. Create file called ```settings.json```
3. edit ```settings.json``` with the following

    ```json
    {
        "r.source.focus": "terminal",
        "r.rterm.linux": "/home/xxx/anaconda3/envs/r_env/bin/radian",
        "r.rpath.linux": "/home/xxx/anaconda3/envs/r_env/lib/R/bin",

        "r.bracketedPaste": true,
        "r.lsp.debug": true,
        "r.lsp.diagnostics": false,
        "r.rterm.option": ["--no-site-file"],
        "r.sessionWatcher": true,
        "r.source.encoding": ""
    }
    ```

4. Change the setting for ```r.rterm.linux``` and ```r.rpath.linux``` to windows or mac if you are not using linux, also update the path to your R and Radian path.

### Create New Blank Notebook

1. ```ctrl``` + ```shift``` + ```p```
2. Jupyter: Create New Blank Notebook
3. Click on the button right below ellipsis in upper right corner to choose kernel
4. Choose the one with R installed, e.g. ```R ~/anaconda3/envs/r_env/lib/R/bin/R Jupyter kernel``` or just ```R R Jupyter kernel```

### Try running a test code

1. Run the code ```r-test-lib.ipynb```

## Credits

[Conda Docs](https://docs.conda.io/projects/conda/en/latest/user-guide/install/index.html "Conda Docs")

[Conda-forge](https://conda-forge.org/docs/user/introduction.html "Conda-forge")

[Radian](https://github.com/randy3k/radian "Radian")
