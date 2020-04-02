# NoteBook
## 远程连接服务器端Jupyter Notebook
第一步:配置
 jupyter notebook --generate-config  生成配置文件
  jupyter notebook password 生成密码
  或者
  python3
  from notebook.auth import passwd
  passwd()
默认情况下，配置文件 ~/.jupyter/jupyter_notebook_config.py 并不存在，需要自行创建
  c.NotebookApp.ip='*' #允许访问的IP地址，设置为*代表允许任何客户端访问
  c.NotebookApp.password = u'sha1:8d...刚才生成密码时复制的密文'
  c.NotebookApp.open_browser = False
  c.NotebookApp.port =8888 #可自行指定一个端口, 访问时使用该端口
  c.NotebookApp.allow_remote_access = True
  c.NotebookApp.notebook_dir='/home/sanra123/jupyter'（指定打开目录）
  
第一步:端口绑定
 ssh -L 8888:127.0.0.1:8888 mll@XXXXXXX
 其中XXXXX代表address_of_remote(远程服务器IP) 
第二步:启动
 activate torch   切换环境
 jupyter notebook 启动notebook
