from pyecharts.charts import Map
from pyecharts.options import VisualMapOpts


map = Map()
data = [
    ("广西壮族自治区", 990),
    ("四川省", 299),
    ("北京市", 99)
]

map.add("地图", data, "china")

map.set_global_opts(
    visualmap_opts=VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces=[
            {"min": 1, "max": 99, "label":"1~99", "color": "#CCFFFF"},
            {"min": 100, "max": 599, "label":"100~599", "color": "#FF6666"},
            {"min": 600, "max": 999, "label":"600~999", "color": "#990033"}
        ]
    )
)







map.render()