//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSUUID;
@protocol HDSampleSaving, HDTaskServer, HDTaskServerObserver;

@protocol HDTaskServerDelegate <NSObject>
- (void)removeTaskServerObserver:(id <HDTaskServerObserver>)arg1;
- (void)removeObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (void)addObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (id <HDTaskServer>)taskServerWithUUID:(NSUUID *)arg1;
- (void)taskServerDidInvalidate:(id <HDTaskServer>)arg1;
- (void)taskServerDidFailToInitializeForUUID:(NSUUID *)arg1;
- (void)taskServerDidFinishInitialization:(id <HDTaskServer>)arg1;

@optional
- (id <HDSampleSaving>)sampleSavingDelegate;
@end
