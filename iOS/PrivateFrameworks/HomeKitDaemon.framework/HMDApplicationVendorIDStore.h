//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDApplicationVendorIDStore : HMFObject
{
    NSMutableDictionary *_applicationVendorIdMapping;
    NSMutableDictionary *_applicationMachUUIDMapping;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedStore;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping; // @synthesize applicationMachUUIDMapping=_applicationMachUUIDMapping;
@property(readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping; // @synthesize applicationVendorIdMapping=_applicationVendorIdMapping;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)__handleUninstalledApplication:(id)arg1;
- (id)_machUUIDsForApplication:(id)arg1;
- (id)machUUIDsForApplication:(id)arg1;
- (void)_save;
- (void)removeVendorIDForApplicationBundleId:(id)arg1;
- (_Bool)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;
- (void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(_Bool)arg3;
- (void)_extractVendorIDForApplication:(id)arg1;
- (id)_vendorIDForApplication:(id)arg1;
- (id)vendorIDForApplication:(id)arg1;
- (void)checkCorrectness;
- (id)init;

@end

