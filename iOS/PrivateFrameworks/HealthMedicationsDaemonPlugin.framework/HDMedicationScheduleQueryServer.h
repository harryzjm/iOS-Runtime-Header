//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleQueryServer : HDQueryServer
{
    unsigned long long _limit;
    NSArray *_sortDescriptors;
}

+ (Class)queryClass;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

