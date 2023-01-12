//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BNBannerSourceLayoutDescription, BNBannerSourceListener, FBProcess, FBSMutableSceneParameters, FBScene, NSArray, NSDictionary, NSString, UIApplicationSceneSpecification;
@protocol BNBannerSourceListenerPresentable, BNPresentable, BNPresentableSpecifying, BNPresentableUniquelyIdentifying;

@protocol BNBannerSourceListenerDelegate <NSObject>
- (_Bool)bannerSourceListener:(BNBannerSourceListener *)arg1 recommendsSuspending:(_Bool)arg2 forReason:(NSString *)arg3 revokingCurrent:(_Bool)arg4 error:(id *)arg5;
- (NSArray *)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsRevokingPresentablesWithIdentification:(id <BNPresentableUniquelyIdentifying>)arg2 reason:(NSString *)arg3 animated:(_Bool)arg4 userInfo:(NSDictionary *)arg5 error:(id *)arg6;
- (_Bool)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsPostingPresentable:(id <BNPresentable>)arg2 options:(unsigned long long)arg3 userInfo:(NSDictionary *)arg4 error:(id *)arg5;
- (BNBannerSourceLayoutDescription *)bannerSourceListener:(BNBannerSourceListener *)arg1 layoutDescriptionWithError:(id *)arg2;

@optional
- (_Bool)bannerSourceListenerShouldEnablePresentableContextInterface:(BNBannerSourceListener *)arg1;
- (_Bool)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsRevokingAllPresentablesForRequesterWithIdentifier:(NSString *)arg2 reason:(NSString *)arg3 userInfo:(NSDictionary *)arg4 error:(id *)arg5;
- (_Bool)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsRevokingPresentableWithRequestIdentifier:(NSString *)arg2 requesterIdentifier:(NSString *)arg3 animated:(_Bool)arg4 reason:(NSString *)arg5 userInfo:(NSDictionary *)arg6 error:(id *)arg7;
- (void)bannerSourceListener:(BNBannerSourceListener *)arg1 presentationSize:(out struct CGSize *)arg2 containerSize:(out struct CGSize *)arg3 error:(id *)arg4;
- (id <BNBannerSourceListenerPresentable>)bannerSourceListener:(BNBannerSourceListener *)arg1 newBannerSourceListenerPresentableForBannerSpecification:(id <BNPresentableSpecifying>)arg2 serviceDomain:(NSString *)arg3 scene:(FBScene *)arg4 readyCompletion:(void (^)(id <BNBannerSourceListenerPresentable>, NSError *))arg5;
- (void)bannerSourceListener:(BNBannerSourceListener *)arg1 didUpdateInitialSceneClientSettingsWithParameters:(FBSMutableSceneParameters *)arg2;
- (void)bannerSourceListener:(BNBannerSourceListener *)arg1 didUpdateInitialSceneSettingsWithParameters:(FBSMutableSceneParameters *)arg2;
- (UIApplicationSceneSpecification *)bannerSourceListener:(BNBannerSourceListener *)arg1 sceneSpecificationForBannerSceneWithIdentifier:(NSString *)arg2 forProcess:(FBProcess *)arg3 userInfo:(NSDictionary *)arg4;
- (UIApplicationSceneSpecification *)sceneSpecificationForBannerSourceListener:(BNBannerSourceListener *)arg1;
@end

