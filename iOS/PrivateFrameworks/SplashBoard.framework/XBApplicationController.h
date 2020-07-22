//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject
{
    FBSDisplayConfiguration *_mainDisplayConfiguration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(_Bool)arg3;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(_Bool)arg2;
- (void)resetEverything;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (void)removeAllGeneratedLaunchImages;
- (id)allSplashBoardSystemApplications;
- (id)allSplashBoardApplications;
- (id)_allApplications;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (void)_migrateDataIfNeeded;
- (id)init;

@end

