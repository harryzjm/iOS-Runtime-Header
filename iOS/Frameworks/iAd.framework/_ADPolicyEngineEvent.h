//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iAd/ADBannerViewInternalDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate>
{
    CDUnknownBlockType _bannersLoadedHandler;
    NSMutableArray *_banners;
    NSMutableArray *_bannersWaitingOnLoad;
}

@property(retain, nonatomic) NSMutableArray *bannersWaitingOnLoad; // @synthesize bannersWaitingOnLoad=_bannersWaitingOnLoad;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
@property(copy, nonatomic) CDUnknownBlockType bannersLoadedHandler; // @synthesize bannersLoadedHandler=_bannersLoadedHandler;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)_considerCallingLoadedHandler;
- (void)waitForLoadsForBanners:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadedBannerWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *bannerIdentifiers;
- (void)addBannerForCreativeType:(int)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

