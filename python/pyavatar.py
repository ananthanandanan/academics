import py_avataaars as pa
avatar = pa.PyAvataaar(
    style=pa.AvatarStyle.CIRCLE,
    skin_color=pa.SkinColor.LIGHT,
    hair_color=pa.HairColor.BLACK,
    facial_hair_type=pa.FacialHairType.BEARD_LIGHT,
    facial_hair_color=pa.FacialHairColor.BLACK,
    top_type=pa.TopType.SHORT_HAIR_THE_CAESAR_SIDE_PART,
    hat_color=pa.ClotheColor.BLACK,
    mouth_type=pa.MouthType.SMILE,
    eye_type=pa.EyesType.DEFAULT,
    eyebrow_type=pa.EyebrowType.DEFAULT,
    nose_type=pa.NoseType.DEFAULT,
    accessories_type=pa.AccessoriesType.PRESCRIPTION_01,
    clothe_type=pa.ClotheType.SHIRT_V_NECK,
    clothe_color=pa.ClotheColor.PASTEL_RED,
    clothe_graphic_type=pa.ClotheGraphicType.SKULL_OUTLINE,
)
avatar.render_png_file('avatar2.png')