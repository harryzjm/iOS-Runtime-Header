//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSString;

@protocol FCAppleAccount <NSObject>
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
@property(readonly, nonatomic, getter=iCloudAccountChanged) _Bool iCloudAccountChanged;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) _Bool isContentStoreFrontSupported;
@property(readonly, nonatomic) NSString *contentStoreFrontID;
@property(readonly, nonatomic) NSString *userStoreFrontID;
@property(readonly, nonatomic) NSString *DSID;
- (_Bool)isPrimaryAccountEmailAddress;
- (NSString *)currentStoreFrontID;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)loadStoreFrontIfNeededWithCompletion:(void (^)(void))arg1;
- (NSString *)iTunesAccountDSID;
- (NSString *)iTunesAccountName;
- (_Bool)isUserSignedIntoiTunes;
@end

