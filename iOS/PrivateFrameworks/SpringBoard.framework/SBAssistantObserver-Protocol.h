//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAssistantController, SBWindowScene;

@protocol SBAssistantObserver <NSObject>

@optional
- (void)assistantDidDisappear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
- (void)assistantWillDisappear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
- (void)assistantDidAppear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
- (void)assistantWillAppear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
@end

