//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _CDPerfMetricFamily;

@interface _CDPerfMetric : NSObject
{
    struct os_unfair_lock_s _lock;
    unsigned long long _count;
    double _lastElapsedTime;
    double _minimumElapsedTime;
    double _maximumElapsedTime;
    double _totalElapsedTime;
    double _lastUpdateTime;
    unsigned long long _lastResultCount;
    unsigned long long _errorCount;
    NSString *_name;
    NSString *_string;
    _CDPerfMetricFamily *_family;
}

- (void).cxx_destruct;
@property(readonly) __weak _CDPerfMetricFamily *family; // @synthesize family=_family;
@property(readonly) double totalElapsedTime; // @synthesize totalElapsedTime=_totalElapsedTime;
@property(readonly) NSString *string; // @synthesize string=_string;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long errorCount;
@property(readonly) unsigned long long lastResultCount;
@property(readonly) NSDate *lastUpdate;
@property(readonly) double averageElapsedTime;
@property(readonly) double maximumElapsedTime;
@property(readonly) double minimumElapsedTime;
@property(readonly) double lastElapsedTime;
@property(readonly) unsigned long long count;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;

@end
