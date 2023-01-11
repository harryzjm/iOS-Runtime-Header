//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface SFAnalyticsMultiSampler : NSObject
{
    double _samplingInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
    CDUnknownBlockType _block;
    int _notificationToken;
    Class _clientClass;
    _Bool _oncePerReport;
    _Bool _activeTimer;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeSampling;
- (void)pauseSampling;
- (id)sampleNow;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (void)setupPeriodicTimer;
- (void)setupOnceTimer;
- (void)newTimer;
- (id)initWithName:(id)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3 clientClass:(Class)arg4;

@end

