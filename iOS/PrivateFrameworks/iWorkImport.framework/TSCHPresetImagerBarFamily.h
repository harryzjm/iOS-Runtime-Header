//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHPresetImagerBarFamily
{
}

- (struct CGPath *)roundedCornerClippingPathForPreset:(id)arg1 frame:(struct CGRect)arg2 isVertical:(_Bool)arg3;
- (_Bool)hasRoundedCornersForPreset:(id)arg1;
- (void)addRoundedCornerClipPathToContext:(struct CGContext *)arg1 forPreset:(id)arg2 frame:(struct CGRect)arg3 isVertical:(_Bool)arg4;
- (void)renderInRoundedCornerClippedContext:(struct CGContext *)arg1 forPreset:(id)arg2 stroke:(id)arg3 barRect:(struct CGRect)arg4 clipRect:(struct CGRect)arg5 isVertical:(_Bool)arg6 renderBlock:(CDUnknownBlockType)arg7;
- (void)p_drawBarInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2 stroke:(id)arg3 fill:(id)arg4;

@end

