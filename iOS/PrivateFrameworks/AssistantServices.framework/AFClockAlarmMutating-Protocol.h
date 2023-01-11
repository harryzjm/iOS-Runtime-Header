//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@protocol AFClockAlarmMutating <NSObject>
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setIsSnoozed:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)setRepeatOptions:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setIsFiring:(_Bool)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end

