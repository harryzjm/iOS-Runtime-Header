//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol MFAtomTextViewAtomLayout;

__attribute__((visibility("hidden")))
@interface _MFAtomLayoutView : UIView
{
    UIView<MFAtomTextViewAtomLayout> *_delegateView;
}

+ (id)layoutViewWithDelegateView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView<MFAtomTextViewAtomLayout> *delegateView; // @synthesize delegateView=_delegateView;
- (struct CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGRect)selectionBounds;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
@property(readonly, nonatomic) struct UIEdgeInsets atomInsets;
- (void)setMaskBounds:(struct CGRect)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegateView:(id)arg1;

@end

