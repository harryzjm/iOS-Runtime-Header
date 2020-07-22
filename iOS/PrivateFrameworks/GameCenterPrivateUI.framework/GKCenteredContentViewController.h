//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterPrivateUI/UIScrollViewDelegate-Protocol.h>

@class GKCenteringScrollView, NSString, UIView;

@interface GKCenteredContentViewController <UIScrollViewDelegate>
{
    GKCenteringScrollView *_scrollView;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) GKCenteringScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

