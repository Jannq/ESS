# 
このコードは、SFMLライブラリを使用して、光速度での時間の歪みによって秒針が歪んだ時計を描画します。
定数cとローレンツ因子gammaは前の例と同様に定義されます。
時計は白い円形で表され、秒針は赤い長方形で表されます。
固有時刻t0は1秒に初期化され、観測時刻はメインループの各反復でローレンツ因子を使用して計算されます。
秒針の角度は、観測時刻から計算され、秒針の回転もそれに応じて更新されます。
メインループは、ウィンドウのイベントを処理し、時計を各反復で表示します。


This code uses the SFML library to draw a clock with a distorted second hand due to the time dilation at the speed of light. 
The constant c and the Lorentz factor gamma are defined as in the previous example. 
The clock is represented as a white circle, and the second hand is represented as a red rectangle. 
The proper time t0 is initialized to 1 second, and the observed time is calculated using the Lorentz factor in each iteration of the main loop. 
The angle of the second hand is calculated from the observed time and the rotation of the second hand is updated accordingly. 
The main loop processes window events and displays the clock in each iteration.