//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface AVTStickerImageProp
{
    struct UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(struct UIImage *)arg1 size:(struct CGSize)arg2 scale:(struct SCNVector3)arg3 position:(struct SCNVector3)arg4 renderLast:(_Bool)arg5 orientToCamera:(_Bool)arg6 rotation:(struct SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;

@end
