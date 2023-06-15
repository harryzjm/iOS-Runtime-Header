//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderTableViewDataSource : NSObject
{
    UITableView *_tableView;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSString *_requestedStorefrontCountryCode;
    NSArray *_tvProviderSupportedStorefronts;
    NSArray *_providerSections;
    NSArray *_storefrontSections;
    NSDictionary *_destinationsBySectionIndexTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle; // @synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle;
@property(copy, nonatomic) NSArray *storefrontSections; // @synthesize storefrontSections=_storefrontSections;
@property(copy, nonatomic) NSArray *providerSections; // @synthesize providerSections=_providerSections;
@property(copy, nonatomic) NSArray *tvProviderSupportedStorefronts; // @synthesize tvProviderSupportedStorefronts=_tvProviderSupportedStorefronts;
@property(nonatomic) NSString *requestedStorefrontCountryCode; // @synthesize requestedStorefrontCountryCode=_requestedStorefrontCountryCode;
@property(nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
@property(readonly, nonatomic) long long cellAccessoryType;
- (void)setNumberOfLinesForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_scrollToTableHeaderView;
- (id)_textColorForRowAtIndexPath:(id)arg1;
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (id)_additionalProvidersRowTitle;
- (_Bool)hasStorefrontOrIdentityProviderAtIndexPath:(id)arg1;
- (id)storefrontAtIndexPath:(id)arg1;
- (id)identityProviderForRowAtIndexPath:(id)arg1;
- (unsigned long long)_minimumProviderCountForIndexes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

