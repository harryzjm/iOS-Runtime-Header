//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <DocumentManagerUICore/DOCShareFPItemLoaderDelegate-Protocol.h>
#import <DocumentManagerUICore/FPItemCollectionDelegate-Protocol.h>
#import <DocumentManagerUICore/UIShareUIAccessoryPresenting-Protocol.h>

@class DOCFileProviderMonitor, DOCShareHeaderView, NSDictionary, NSMutableArray, NSString;
@protocol DOCShareFPItemLoader, UIShareUIAccessoryHosting;

@interface DOCShareSheetBaseViewController : UIViewController <DOCShareFPItemLoaderDelegate, FPItemCollectionDelegate, UIShareUIAccessoryPresenting>
{
    id <UIShareUIAccessoryHosting> _host;
    id <DOCShareFPItemLoader> _itemLoader;
    DOCFileProviderMonitor *_fileProviderMonitor;
    NSMutableArray *_items;
    NSDictionary *_itemCollections;
    DOCShareHeaderView *_header;
}

@property(retain, nonatomic) DOCShareHeaderView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSDictionary *itemCollections; // @synthesize itemCollections=_itemCollections;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) DOCFileProviderMonitor *fileProviderMonitor; // @synthesize fileProviderMonitor=_fileProviderMonitor;
@property(readonly, nonatomic) id <DOCShareFPItemLoader> itemLoader; // @synthesize itemLoader=_itemLoader;
@property(readonly, nonatomic) __weak id <UIShareUIAccessoryHosting> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (id)combineProviderNames:(id)arg1;
- (void)updateHeader;
@property(readonly, nonatomic) _Bool shouldShowAddTagButton;
- (void)didFailToLoadItems;
- (void)didLoadItems:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)calculatePreferredSize;
- (id)overrideTraitCollection;
- (void)dealloc;
- (id)initWithHost:(id)arg1 itemLoader:(id)arg2 fileProviderMonitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

