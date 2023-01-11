//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICMediaApplicationBanner, NSArray, NSString;

@protocol ICMediaApplicationBannerManagerServiceProtocol <NSObject>
- (void)serviceUpdateBanners:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceUpdateBanner:(ICMediaApplicationBanner *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceBannersForBundleIdentifier:(NSString *)arg1 target:(NSString *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)serviceAllBannersWithCompletion:(void (^)(NSError *, NSArray *))arg1;
- (void)serviceProcessSyncCommands:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceSyncWithCompletion:(void (^)(NSError *))arg1;
- (void)serviceResetWithCompletion:(void (^)(NSError *))arg1;
@end

