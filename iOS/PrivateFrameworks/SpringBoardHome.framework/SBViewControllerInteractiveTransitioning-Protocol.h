//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBViewControllerPercentDrivenTransitionUpdating-Protocol.h>
#import <SpringBoardHome/SBViewControllerReversibleTransitioning-Protocol.h>
#import <SpringBoardHome/UIViewControllerInteractiveTransitioning-Protocol.h>

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerInteractiveTransitioning <UIViewControllerInteractiveTransitioning, SBViewControllerPercentDrivenTransitionUpdating, SBViewControllerReversibleTransitioning>
- (void)finishInteractiveTransition;
- (void)startInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1;
@end
