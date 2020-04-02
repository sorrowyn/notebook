# NoteBook
## 远程连接服务器端Jupyter Notebook 
### 第一步:端口绑定
 ssh -L 8888:127.0.0.1:8888 mll@XXXXXXX
 其中XXXXX代表address_of_remote(远程服务器IP) 
### 第二步:启动
 activate torch   切换环境
 jupyter notebook 启动notebook
