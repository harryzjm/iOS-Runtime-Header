//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSKBroadcast : NSObject
{
}

+ (void)syncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;
+ (void)syncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;
+ (void)asyncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;
+ (void)asyncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;
+ (void)twoPhaseNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;
+ (void)twoPhaseNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;

@end

