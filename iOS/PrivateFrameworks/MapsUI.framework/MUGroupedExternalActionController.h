//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceExternalAction, MUAMSResultProvider, MUPlaceExtensionDiscoveryManager, MUVendorLinkSorter, NSArray;
@protocol MUExternalActionAnalyticsHandling, MUExternalActionHandling;

__attribute__((visibility("hidden")))
@interface MUGroupedExternalActionController : NSObject
{
    id <MUExternalActionHandling> _actionHandler;
    id <MUExternalActionAnalyticsHandling> _analyticsHandler;
    NSArray *_viewModels;
    MUVendorLinkSorter *_vendorLinkSorter;
    MUPlaceExtensionDiscoveryManager *_extensionDiscoveryManager;
    MUAMSResultProvider *_amsResultProvider;
    _Bool _supportsMultipleVendorSelection;
    int _singleVendorAnalyticsTarget;
    int _multipleVendorAnalyticsTarget;
    GEOPlaceExternalAction *_externalAction;
    long long _analyticsModuleType;
    long long _source;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsMultipleVendorSelection; // @synthesize supportsMultipleVendorSelection=_supportsMultipleVendorSelection;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long analyticsModuleType; // @synthesize analyticsModuleType=_analyticsModuleType;
@property(nonatomic) int multipleVendorAnalyticsTarget; // @synthesize multipleVendorAnalyticsTarget=_multipleVendorAnalyticsTarget;
@property(nonatomic) int singleVendorAnalyticsTarget; // @synthesize singleVendorAnalyticsTarget=_singleVendorAnalyticsTarget;
@property(readonly, nonatomic) GEOPlaceExternalAction *externalAction; // @synthesize externalAction=_externalAction;
- (void)captureGroupedMenuRevealAnalyticsIfNeededWithIsQuickAction:(_Bool)arg1;
@property(readonly, nonatomic) int resolvedAnalyticsTarget;
@property(readonly, nonatomic) _Bool hasMultipleVendorsForAnalytics;
- (void)_openMapsExtensionUsingExtensionParams:(id)arg1 handlingOptions:(id)arg2;
- (id)_viewModelsWithSortApplied;
- (void)_executeBestIntegrationForProvider:(id)arg1 index:(unsigned long long)arg2;
- (void)openFirstPartnerAction;
- (void)openPartnerActionUsingViewModel:(id)arg1;
- (void)fetchProviderLockupsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGroupedExternalAction:(id)arg1 amsResultProvider:(id)arg2 supportsMultipleVendorSelection:(_Bool)arg3 actionHandler:(id)arg4 analyticsHandler:(id)arg5;

@end

