"""
校准脚本骨架：后期输入 data/raw_*.csv + 烘干法真值
输出：线性/RF校准对比
"""
import pandas as pd

def load_raw(path):
    # TODO: 到货后解析ESP32输出CSV
    return pd.read_csv(path)

if __name__ == "__main__":
    print("calib skeleton ready, waiting data")
