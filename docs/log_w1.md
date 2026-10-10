# W1 周记（硬件未到）

## 本周完成

- [x] 仓库初始化（GitLab / GitHub）
- [x] 确定技术路线：ESP32 + 随机森林（RF）做土壤湿度边缘估算
- [x] RF 基线模型跑通（基于仿真数据验证流程可行）
- [x] 硬件清单确认并下单：ESP32、电容式土壤湿度传感器 v1.2、DHT22
- [x] 采集 SOP 定稿（见 docs/data_collection_sop.md）
- [x] 标定计划定稿（见 docs/calibration_plan.md）
- [x] ESP32 采集代码骨架完成并通过编译（hardware/soil_collect/）
- [x] 环境依赖文档完成（hardware/dependencies.md）

## 本周产出

| 类型 | 文件 |
|---|---|
| 采集代码 | hardware/soil_collect/soil_collect.ino |
| 依赖说明 | hardware/dependencies.md |
| 数据样本 | data/raw_sample.csv |
| 采集规范 | docs/data_collection_sop.md |
| 标定方案 | docs/calibration_plan.md |
| 项目说明 | README.md |

## 遇到的问题

- 硬件未到齐（万用表和焊接套装待发货），暂时无法实测
- RF 模型目前仅基于仿真数据，需真实采集数据后重新训练

## 下周计划（W2）

- 硬件全部到货后开始接线
- 按 SOP 采集第一批真实数据（≥10 条空采）
- 跑通 ESP32 → 串口 → CSV 完整链路
- 数据喂入 RF 模型，对比仿真 vs 真实效果
