#!/bin/bash
#SBATCH -J Classification
#SBATCH -o log/Train_log.out    
#SBATCH -e error.err
#SBATCH --gres=gpu:1
#SBATCH -w node3

echo "Submitted from:"$SLURM_SUBMIT_DIR" on node:"$SLURM_SUBMIT_HOST
echo "Running on node "$SLURM_JOB_NODELIST 
echo "Allocate Gpu Units:"$CUDA_VISIBLE_DEVICES

source /home/xiaoqiguo2/.bashrc

conda activate torch020

cd /home/xiaoqiguo2/EE4146/
python -u ./train.py --resume 'checkpoints/densenet121-a639ec97.pth'