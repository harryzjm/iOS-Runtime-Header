//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSSet, NSUUID, SPBeacon, SPCommand;

@protocol SPOwnerSessionXPCProtocol <NSObject>
- (oneway void)waitForBeaconStoreAvailableWithCompletion:(void (^)(void))arg1;
- (oneway void)beaconStoreStatusWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)executeCommand:(SPCommand *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)rawSearchResultsForIdentifier:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)latestLocationsForIdentifiers:(NSArray *)arg1 fetchLimit:(NSDate *)arg2 sources:(NSSet *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (oneway void)removeBeacon:(SPBeacon *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)forceUpdateKeyAlignmentRecordForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceUpdateKeyMapsForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceDistributeKeysWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end
