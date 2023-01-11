//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKSourceStoreServer-Protocol.h>

@class NSString;

@interface HDSourceStoreServer <HKSourceStoreServer>
{
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_fetchOrderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchAllSourcesWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
