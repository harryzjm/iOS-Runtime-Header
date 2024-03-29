//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_MKUIViewControllerRootView.h"

@class NSLayoutConstraint, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _MKStackingContentView : _MKUIViewControllerRootView
{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_topView;
    UIView *_bottomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (id)vibrancyGroupName;
- (void)updateConstraints;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

