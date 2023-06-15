//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class AMUISwitcherViewController;
@protocol AMUISwitcherItem, AMUISwitcherTransition;

@protocol AMUISwitcherDelegate <NSObject>

@optional
- (void)switcher:(AMUISwitcherViewController *)arg1 transitionDidUpdate:(id <AMUISwitcherTransition>)arg2 withProgress:(double)arg3;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitionDidEnd:(id <AMUISwitcherTransition>)arg2;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitionDidBegin:(id <AMUISwitcherTransition>)arg2;
- (void)switcher:(AMUISwitcherViewController *)arg1 didSettleOnItem:(id <AMUISwitcherItem>)arg2 interactive:(_Bool)arg3;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitioningFromItem:(id <AMUISwitcherItem>)arg2 toItem:(id <AMUISwitcherItem>)arg3 progress:(double)arg4;
@end

