//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostSupportObjectExtractor.h>

@interface SignpostSupportObjectExtractor (Notifications)
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 shouldCalculateAnimationFramerate:(_Bool)arg2 targetQueue:(id)arg3 errorOut:(id *)arg4;
- (void)_processStreamedOSLogEventProxy:(id)arg1 shouldCalculateFramerate:(_Bool)arg2;
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id *)arg2;
- (_Bool)processLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;
- (void)_processOSLogEventProxy:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType timedOutBeginEventProcessingBlock;
@end
