//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadHWR_Portrait
{
}

- (void)setupLayoutSegments;
- (double)controlColumnWidthFactor;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (_Bool)_displaysAsControlKeyStyle:(id)arg1;
- (_Bool)shouldUseRoundCornerForKey:(id)arg1;
- (struct CGPoint)_controlKeyOffset;
- (_Bool)_anchorControlKeys;
- (struct UIEdgeInsets)symbolFrameInsets;
- (id)messagesWriteboardKeyImageName;
- (struct CGPoint)spaceReturnKeyTextOffset;
- (struct CGPoint)dismissKeyOffset;
- (double)dismissKeyFontSize;
- (double)spaceKeyFontSize;
- (double)dictationKeyFontSize;
- (double)internationalKeyFontSize;
- (double)moreKeyFontSize;
- (double)deleteKeyFontSize;
- (double)keyCornerRadius;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;

@end
