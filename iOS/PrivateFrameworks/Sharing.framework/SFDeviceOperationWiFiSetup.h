//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject
{
    _Bool _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    SFSession *_sfSession;
}

@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_complete:(id)arg1;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

@end

