//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ENRegion, NSString;

@protocol _TtP28HealthExposureNotificationUI17ExposureNotifying_
- (void)onboardingDidStartForRegion:(ENRegion *)arg1 source:(long long)arg2;
- (void)setUserConsent:(long long)arg1 region:(ENRegion *)arg2 text:(NSString *)arg3 version:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)setAvailabilityAlertsEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setPreReleaseAuthorized:(_Bool)arg1 region:(ENRegion *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isPreReleaseAuthorizedForRegion:(ENRegion *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setTravelStatusEnabled:(_Bool)arg1 region:(ENRegion *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isTravelStatusEnabledForRegion:(ENRegion *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setShareStatisticsEnabled:(_Bool)arg1 region:(ENRegion *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isShareStatisticsEnabledForRegion:(ENRegion *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)allRegionConfigurations:(void (^)(NSArray *))arg1;
- (void)latestExposureNotification:(void (^)(ENExposureNotification *))arg1;
- (void)setActiveRegion:(ENRegion *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setExposureNotificationEnabled:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)refreshStatusWithCompletion:(void (^)(void))arg1;
@property(nonatomic) _Bool areAvailabilityAlertsEnabled;
@property(nonatomic) _Bool isExposureLoggingDataPresent;
@property(nonatomic) long long exposureNotificationStatus;
@end
