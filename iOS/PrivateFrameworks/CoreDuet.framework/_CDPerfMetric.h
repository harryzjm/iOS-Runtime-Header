//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface _CDPerfMetric : NSObject
{
    struct XSPerfCollection *_stats;
    NSString *_name;
    NSDictionary *_userInfo;
}

+ (id)perfMetricWithName:(id)arg1 userInfo:(id)arg2;
+ (id)perfMetricForFetchRequest:(id)arg1;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)elapsedTimeHistogram;
@property(readonly) unsigned long long errorCount;
@property(readonly) unsigned long long lastResultCount;
@property(readonly) NSDate *lastUpdate;
@property(readonly) double averageElapsedTime;
@property(readonly) double maximumElapsedTime;
@property(readonly) double minimumElapsedTime;
@property(readonly) double lastElapsedTime;
@property(readonly) unsigned long long count;
- (void)dealloc;
- (id)initWithName:(id)arg1 userInfo:(id)arg2 sharedMemoryRegion:(struct cdpm_shared_memory_region_s *)arg3;

@end

