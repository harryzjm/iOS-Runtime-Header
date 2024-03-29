//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDFetchedSettingsDriver, HMDPreferredMediaUserEventControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPreferredMediaUserEventController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <HMDFetchedSettingsDriver> _driver;
    id <HMDPreferredMediaUserEventControllerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(readonly) __weak id <HMDPreferredMediaUserEventControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <HMDFetchedSettingsDriver> driver; // @synthesize driver=_driver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)driverDidReload:(id)arg1;
- (void)driver:(id)arg1 didUpdatePrimaryUserInfo:(id)arg2;
- (void)driver:(id)arg1 didUpdateSettings:(id)arg2;
- (void)_postUpdateEventsIfDifferent:(id)arg1;
- (double)eventTimestamp;
- (id)eventSource;
- (void)updatePreferredMediaUserWithPrimaryUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2 driver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

