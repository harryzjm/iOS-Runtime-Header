//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout
{
    _Bool _showSideGroupPicker;
    double _avatarContainerAlpha;
    double _attributesContentViewExtraHeight;
    struct CGRect _avatarContainerFrame;
}

@property(readonly, nonatomic) double attributesContentViewExtraHeight; // @synthesize attributesContentViewExtraHeight=_attributesContentViewExtraHeight;
- (_Bool)showSideGroupPicker;
- (double)avatarContainerAlpha;
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
- (struct CGRect)sideGroupContainerFrame;
- (struct CGRect)groupDialContainerFrame;
- (unsigned long long)supportedLayoutOrientation;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 screenScale:(double)arg3 RTL:(_Bool)arg4 avatarViewContainerFrame:(struct CGRect)arg5 attributesContentViewFrameExtraHeight:(double)arg6 avatarViewAlpha:(double)arg7 showSideGroupPicker:(_Bool)arg8;

@end
