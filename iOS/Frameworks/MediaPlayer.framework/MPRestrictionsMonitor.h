//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MCProfileConnectionObserver-Protocol.h>

@class MCProfileConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
    _Bool _allowsAccountModification;
    _Bool _allowsDeletion;
    _Bool _allowsExplicitContent;
    _Bool _allowsStorePurchases;
    _Bool _allowsRadioPurchases;
}

+ (id)sharedRestrictionsMonitor;
@property(readonly, nonatomic) _Bool allowsRadioPurchases; // @synthesize allowsRadioPurchases=_allowsRadioPurchases;
@property(readonly, nonatomic) _Bool allowsStorePurchases; // @synthesize allowsStorePurchases=_allowsStorePurchases;
@property(readonly, nonatomic) _Bool allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
@property(readonly, nonatomic) _Bool allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property(readonly, nonatomic) _Bool allowsAccountModification; // @synthesize allowsAccountModification=_allowsAccountModification;
- (void).cxx_destruct;
- (void)_updateWithCanPostNotifications:(_Bool)arg1;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (_Bool)_isRunningInStoreDemoMode;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)effectiveValueForSetting:(id)arg1;
@property(readonly, nonatomic) long long maximumMovieRating;
@property(readonly, nonatomic) long long maximumTVShowRating;
@property(readonly, nonatomic) _Bool hasRestrictionsPasscode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

