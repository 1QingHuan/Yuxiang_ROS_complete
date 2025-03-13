builtin_interfaces/Time stamp  # 时间戳，记录该数据的采集时间
string host_name               # 采集该数据的计算机的主机名
float32 cpu_percent            # CPU 使用率（百分比）
float32 memory_percent         # 内存使用率（百分比）
float32 memory_total           # 计算机的总内存（MB 或 GB，取决于实现）
float32 memory_available       # 可用内存大小（MB 或 GB）
float64 net_sent               # 网络已发送数据量（单位：字节或 MB，取决于实现）
float64 net_recv               # 网络已接收数据量（单位：字节或 MB，取决于实现）
