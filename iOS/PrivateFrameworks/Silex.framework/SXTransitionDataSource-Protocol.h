//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class UIView;

@protocol SXTransitionDataSource <NSObject>
@property(readonly, nonatomic) _Bool isTransitionable;
@property(readonly, nonatomic) struct CGRect transitionContentFrame;
@property(readonly, nonatomic) struct CGRect transitionContainerFrame;
@property(readonly, nonatomic) struct CGRect transitionVisibleFrame;
@property(readonly, nonatomic) _Bool transitionViewShouldFadeInContent;
@property(readonly, nonatomic) _Bool transitionViewIsVisible;
@property(readonly, nonatomic) _Bool transitionViewUsesThumbnail;
@property(readonly, nonatomic) UIView *transitionContentView;
@property(readonly, nonatomic) UIView *transitionContainerView;
- (void)prepareForTransitionType:(unsigned long long)arg1;
@end

