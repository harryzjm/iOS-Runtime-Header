//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface _MKStackingContentView
{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_topView;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)updateConstraints;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

