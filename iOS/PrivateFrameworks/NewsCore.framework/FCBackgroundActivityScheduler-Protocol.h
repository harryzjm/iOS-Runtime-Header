//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCBackgroundActivityScheduler <NSObject>
- (void)requestBackgroundAppRefreshStartingAfter:(NSDate *)arg1 before:(NSDate *)arg2;
- (void)cancelRepeatingTaskWithIdentifier:(NSString *)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(NSString *)arg2 task:(void (^)(void (^)(long long), _Bool (^)(void)))arg3;
@end
