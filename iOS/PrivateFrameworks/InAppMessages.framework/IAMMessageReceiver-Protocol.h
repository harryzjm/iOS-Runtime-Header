//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InAppMessages/IAMTargetProvider-Protocol.h>

@class IAMMessage, UIView;

@protocol IAMMessageReceiver <IAMTargetProvider>
@property(readonly, nonatomic) unsigned long long inAppMessagesDisplayPreference;

@optional
- (void)receivedMessage:(IAMMessage *)arg1 withCallbackBlock:(void (^)(void))arg2;
- (void)receivedMessage:(IAMMessage *)arg1;
- (void)receivedMessage:(IAMMessage *)arg1 toDisplayWith:(UIView *)arg2;
@end
