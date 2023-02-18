# UI_emotionRecognition

Combining the API that recognizes six emotions (neutral, angry, happy, sad, disgust, and surprise respectively), the task that we have done by using Qt is creating a label which connects with the API & face tracking system. Aiming to track and analyze the user's emotion every x seconds (x can be defined by the user).

Following shows the interface of our UI designed by Qt.
![image](https://user-images.githubusercontent.com/71891722/219869673-97454d22-f4c2-4a4a-aa59-fb4f23aa6afc.png)

The button *Camera ON* and *Camera OFF* turns the camera on and off without closing the window, while *Goodbye World* shut the program.

The upright figure presents what the main expression the user shows within x seconds. If a certain expression (except for neutral) shows above a threshold (which can also be defined by the user), the figure will present that expression instead of neutral.

Demonstration : https://youtu.be/0aJ6uKC0LIM
