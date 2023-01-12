//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKSharedSummaryCloudSyncManagerClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKSharedSummaryCloudSyncManager : NSObject <_HKXPCExportable, HKSharedSummaryCloudSyncManagerClientInterface>
{
    HKProxyProvider *_proxyProvider;
}

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)pullWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAccountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
