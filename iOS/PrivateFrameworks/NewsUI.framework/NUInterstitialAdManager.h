//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAppConfigurationManager;
@protocol NUAdProvider, NUInterstitialAdManagerDelegate, NUPage;

@interface NUInterstitialAdManager : NSObject
{
    _Bool _enabled;
    id <NUInterstitialAdManagerDelegate> _delegate;
    id <NUPage> _activePage;
    id <NUAdProvider> _adProvider;
    FCAppConfigurationManager *_appConfigurationManager;
}

@property(readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) id <NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <NUPage> activePage; // @synthesize activePage=_activePage;
@property(nonatomic) __weak id <NUInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)triggerTimerChangesForActivePage:(id)arg1;
- (void)restartTimer;
- (void)cancelTimer;
- (void)loadInterstitial;
- (void)dealloc;
- (id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2;

@end
