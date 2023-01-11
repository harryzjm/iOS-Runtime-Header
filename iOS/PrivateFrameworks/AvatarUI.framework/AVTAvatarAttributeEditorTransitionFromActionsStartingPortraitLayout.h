//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout
{
    double _attributesContentViewExtraHeight;
    struct CGRect _avatarContainerFrame;
}

@property(readonly, nonatomic) double attributesContentViewExtraHeight; // @synthesize attributesContentViewExtraHeight=_attributesContentViewExtraHeight;
- (struct CGRect)avatarContainerFrame;
- (id)backgroundColor;
- (struct UIEdgeInsets)attributesContentViewScrollIndicatorInsets;
- (struct UIEdgeInsets)attributesContentViewInsets;
- (struct CGRect)verticalRuleFrame;
- (double)verticalRuleAlpha;
- (struct CGRect)headerMaskingViewFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect)userInfoFrame;
- (struct CGRect)attributesContentViewFrame;
- (struct CGRect)groupDialContainerFrame;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 screenScale:(double)arg3 avatarViewContainerFrame:(struct CGRect)arg4 attributesContentViewFrameExtraHeight:(double)arg5;

@end
