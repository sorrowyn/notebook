# NoteBook
## 远程连接服务器端Jupyter Notebook
### 第一步:配置
*jupyter notebook --generate-config  生成配置文件
*jupyter notebook password 生成密码
*或者
  python3
  ```python
  from notebook.auth import passwd
  passwd()
  ```  
*默认情况下，配置文件 ~/.jupyter/jupyter_notebook_config.py 并不存在，需要自行创建

  ```python
  c.NotebookApp.ip='*' #允许访问的IP地址，设置为*代表允许任何客户端访问\
  c.NotebookApp.password = u'sha1:8d...刚才生成密码时复制的密文'\
  c.NotebookApp.open_browser = False\
  c.NotebookApp.port =8888 #可自行指定一个端口, 访问时使用该端口\
  c.NotebookApp.allow_remote_access = True\
  c.NotebookApp.notebook_dir='/home/sanra123/jupyter'（指定打开目录）\
  ``` 

  
### 第二步:端口绑定
  ```python
  ssh -L 8888:127.0.0.1:8888 mll@XXXXXXX
  ``` 
 *其中XXXXX代表address_of_remote(远程服务器IP) 
### 第三步:启动
 activate torch   切换环境
 jupyter notebook 启动notebook

## 工具
一、OPEN开源文档 http://www.open-open.com/doc/
网站主要提供项目和软件的开发文档，文档界的github。
  
二、虫部落 http://magnet.chongbuluo.com/
包含各种搜索引擎，同时还可以搜索小程序、表情包、gif图、图标等等，并且界面也比较简介，分类也十分明确，楼主最喜欢的网站之一，真的特别强大，这个网站涵盖了：有g/oo/gle，百度，必应，搜狗等搜索网站；网易云音乐、知乎、微博、旅游、电子书等等所属类网址。（话语不足以解释它的强大，谁用谁知道
   
4、NICETOO+ http://www.nicetool.net/
这里集合了641个实用小工具，包括生活常用、教育学院、效率办公、程序开发、网络工具等，相信一定有你需要的！
  
5、微博党 http://weibodang.cn/
支持多平台视频下载：可以下载到多个视频网站的视频，包括：网易公开课、腾讯视频，微博视频等等；下载简单：直接复制视频链接到网站中，就可以下载了；
  
6、莲山课件 https://www.5ykj.com/
教案资源丰富：教学课件非常多，适合中小学老师和家长；科目涵盖广：科目涵盖非常广，包括语文课件、数学课件、英语课件、等等；
  
7、下载街（目前靠使用者自愿赞助生存着） http://www.xiazaij.com/
资源丰富：这是一个资源合集类的网站，里面的资源丰富；各种视频教程一网打尽：不管是编程、职场、生活、还是学习视频，在这都能下载到哦。
  
8. 超高无损音乐：https://www.sq688.com/
承诺只有无损音乐，一款免费的超高无损音乐网站，想要听哪首歌，直接搜索歌手名或音乐名称即可，非常方便。
  
9. Pixabay: https://pixabay.com
免费无版权图片资源网站，很多朋友工作中需要用到一些图片，因为版权问题而感到棘手。Pixabay无版权，高清的大量图片，视频，矢量图，插画，任你选用！
  
10、91听歌网 http://www.91tingge.com/
老司机别乱想哦，这是91听歌网，如果你想听一些经典的音乐，你或许在这里能找到市面上找不到的音乐。这也是这里面唯一推荐的具有注册会员的网站。
