//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PAAccessPublisherPipelines : NSObject
{
}

+ (double)nextStartTimeForEndTime:(double)arg1 iteration:(double)arg2;
+ (id)findBeginningForPartialAccessRecord:(id)arg1 iteration:(double)arg2 nextStartTime:(CDUnknownBlockType)arg3 endTime:(double)arg4 accessPublisher:(CDUnknownBlockType)arg5;
+ (id)completeAccessRecordFromPartialAccessRecord:(id)arg1 nextStartTime:(CDUnknownBlockType)arg2 accessPublisher:(CDUnknownBlockType)arg3;
+ (id)completeAccessRecordFromPartialAccessRecord:(id)arg1 nextAccessPublisher:(CDUnknownBlockType)arg2;
+ (id)ongoingAccessRecordsFromPublisher:(id)arg1;
+ (id)accessRecordsFromPublisher:(id)arg1;

@end
