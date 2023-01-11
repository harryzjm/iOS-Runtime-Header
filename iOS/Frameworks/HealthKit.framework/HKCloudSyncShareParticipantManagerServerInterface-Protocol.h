//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKProfileIdentifier;

@protocol HKCloudSyncShareParticipantManagerServerInterface <NSObject>
- (void)remote_tearDownHealthSharingForProfile:(HKProfileIdentifier *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_revokeAccessForAllShareParticipantsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchSharingParticipantStatus:(void (^)(long long))arg1;
@end
