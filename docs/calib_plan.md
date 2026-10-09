# 土壤湿度校准与建模计划（calib_plan）

## 一、目标
基于 ESP32 采集的土壤传感器 ADC 原始值与环境温湿度，训练 RF（随机森林）模型，将 ADC 值映射为体积含水量（VWC%），实现边缘端高精度估算。

## 二、建模方案
- 模型：Random Forest Regressor（随机森林回归）
- 输入特征：soil_adc（核心）、temperature、humidity（辅助修正温漂）
- 输出目标：soil_vwc（体积含水量 %）
- 评估指标：MAE（平均绝对误差）、R²

## 三、数据采集（按 SOP 执行）
- 5 个含水量梯度（干土 ~ 饱和），每梯度 30 条样本
- 记录字段：timestamp, temperature, humidity, soil_adc, soil_vwc, notes
- 原始数据存入 `data/raw_sample.csv`

## 四、RF 模型进展（Week 1 记录）
- 已跑通 RF 基线模型（参考 `log_w1.md`）
- 当前状态：框架验证通过，等待硬件实测数据代入校准

## 五、后续步骤
1. 硬件到货后按 SOP 采集实测数据
2. 数据清洗 + 划分训练/测试集（8:2）
3. 调参（n_estimators, max_depth）并对比基线
4. 模型导出至 `model/` 目录，准备部署到 ESP32
