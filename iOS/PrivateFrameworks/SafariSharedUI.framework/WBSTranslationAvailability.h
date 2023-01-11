//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSTranslationAvailabilityProviding-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol WBSTranslationAvailabilityProviding;

@interface WBSTranslationAvailability : NSObject <WBSTranslationAvailabilityProviding>
{
    struct os_unfair_lock_s _lock;
    id <WBSTranslationAvailabilityProviding> _availabilityProvider;
    NSArray *_cachedAvailableLocalePairs;
    _Bool _hasCheckedAvailableLocalePairs;
    NSNumber *_cachedTranslationAvailableInCurrentRegion;
    NSArray *_cachedUserPreferredLocales;
    CDUnknownBlockType _availableInCurrentRegionCompletionHandler;
    CDUnknownBlockType _availableLocalePairsCompletionHandler;
}

+ (id)sharedAvailability;
- (void).cxx_destruct;
- (void)_didUpdateSupportedRegionAndLocalePairs;
- (void)_updateCachedValues;
@property(readonly, nonatomic) NSArray *userPreferredTargetLocales;
- (void)supportedLocalePairsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getAllTargetLocalesInUserPreferredOrderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getAvailableLocalePairsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTranslationAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_initWithAvailabilityProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
