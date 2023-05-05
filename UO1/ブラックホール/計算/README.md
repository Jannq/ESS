# インテリジェンスアーティフィシエル
このコードは、質量に基づいてブラックホールのイベントホライゾンを計算するためにSchwarzschildの式、`r_s = 2GM/c^2`、を使用します。
重力定数`G`、光速`c`、およびブラックホールの質量`M`はコンストラクタで初期化されます。
イベントホライゾンは計算され、メートル単位でユーザーに表示されます。イベントホライゾンがゼロより大きい場合、光はブラックホールから脱出できないことを意味します。
イベントホライゾンがゼロより小さい場合、光はブラックホールから脱出できることを意味します。
なお、この計算はブラックホールの正確な質量を提供するものではありませんが、単にその質量に基づいたイベントホライゾンに関する情報を提供します。


This code uses the Schwarzschild formula, `r_s = 2GM/c^2`, to calculate the event horizon of a black hole based on its mass. 
The gravitational constant `G`, speed of light `c`, and mass of the black hole `M` are initialized in the constructor. 
The event horizon is calculated and displayed to the user in meters. 
If the event horizon is greater than zero, it means that light cannot escape from the black hole. 
If the event horizon is less than zero, it means that light can escape from the black hole. 
Note that this calculation does not provide the exact mass of the black hole, but simply information about the event horizon based on its mass.
