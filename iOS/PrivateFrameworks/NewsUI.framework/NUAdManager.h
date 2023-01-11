//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdAnalyticsProvider-Protocol.h>
#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUAdProvider-Protocol.h>

@class NSString, NUAdInterstitial, NUAdStore;
@protocol NUAdManagerConfigurationProvider, NUDevice;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider>
{
    NUAdStore *_adStore;
    id <NUAdManagerConfigurationProvider> _configurationProvider;
    id <NUDevice> _device;
    NUAdInterstitial *_interstitialAdPendingLoad;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NUAdInterstitial *interstitialAdPendingLoad; // @synthesize interstitialAdPendingLoad=_interstitialAdPendingLoad;
@property(readonly, nonatomic) id <NUDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <NUAdManagerConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, nonatomic) NUAdStore *adStore; // @synthesize adStore=_adStore;
- (id)videoInTodayHeaderDefinition;
- (id)videoPlaylistAdBodyDefinition;
- (id)videoPlaylistAdRootDefinition;
- (id)prerollHeaderDefinition;
- (id)prerollBodyDefinition;
- (id)prerollRootDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)defaultArticleDefinition;
- (id)defaultIssueDefinition;
- (id)defaultBodyDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultRootDefinition;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)videoPlaylistAdContextConstructor;
- (id)prerollContextConstructor;
- (id)interstitialContextConstructor;
- (id)inArticleContextConstructor;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)adWithIdentifier:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (void)bannerViewDidLoad:(id)arg1;
- (void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)initWithConfigurationProvider:(id)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
