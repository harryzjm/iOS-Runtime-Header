//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPCloudRepeatableTask, MSPCloudSynchronizer, NSDate, NSError, NSUUID;
@protocol NSObject><NSCopying><NSCoding;

@protocol MSPCloudSynchronizerDelegate <NSObject>
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 didFailAttemptingTask:(MSPCloudRepeatableTask *)arg2 withError:(NSError *)arg3 reattemptingAfterDate:(NSDate *)arg4;
- (MSPCloudRepeatableTask *)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (MSPCloudRepeatableTask *)taskToMergeLocalAndCloudStoresForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewBoostDate:(NSDate *)arg2;
- (NSDate *)storedBoostDateForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewClientRegistrationIdentifier:(NSUUID *)arg2;
- (NSUUID *)storedClientRegistrationIdentifierForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewUserIdentity:(id <NSObject><NSCopying><NSCoding>)arg2;
- (id <NSObject><NSCopying><NSCoding>)storedUserIdentityForSynchronizer:(MSPCloudSynchronizer *)arg1;
@end
