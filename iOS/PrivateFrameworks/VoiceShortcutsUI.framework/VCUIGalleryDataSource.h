//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutsUI/UISearchControllerDelegate-Protocol.h>
#import <VoiceShortcutsUI/UISearchResultsUpdating-Protocol.h>
#import <VoiceShortcutsUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSString;
@protocol VCUIGalleryDataSourceDelegate;

@interface VCUIGalleryDataSource : NSObject <UITableViewDataSource, UISearchResultsUpdating, UISearchControllerDelegate>
{
    _Bool _loadedOnce;
    id <VCUIGalleryDataSourceDelegate> _delegate;
    NSString *_query;
    NSArray *_allAppSuggestionsSections;
    NSArray *_appSuggestionsSections;
}

+ (void)initialize;
@property(nonatomic) _Bool loadedOnce; // @synthesize loadedOnce=_loadedOnce;
@property(retain, nonatomic) NSArray *appSuggestionsSections; // @synthesize appSuggestionsSections=_appSuggestionsSections;
@property(retain, nonatomic) NSArray *allAppSuggestionsSections; // @synthesize allAppSuggestionsSections=_allAppSuggestionsSections;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <VCUIGalleryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateResults;
- (id)filteredAppSuggestionsSectionsForQuery:(id)arg1;
- (id)gallerySectionForSection:(unsigned long long)arg1;
- (void)updateRecommendedShortcuts;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShowSeeAllButtonInSection:(long long)arg1;
- (id)applicationBundleIdentifierForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (id)actionDonationAtIndexPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

