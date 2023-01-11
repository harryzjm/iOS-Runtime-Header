//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProviderItemDelegate-Protocol.h>

@class CNPhotoPickerProviderItem, NSArray, NSMutableDictionary, NSString;
@protocol CNPhotoPickerProviderGroupDelegate, CNScheduler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderGroup : NSObject <CNPhotoPickerProviderItemDelegate>
{
    _Bool _allowAddItem;
    _Bool _showCircleMask;
    long long _groupType;
    id <CNPhotoPickerProviderGroupDelegate> _delegate;
    unsigned long long _itemsPerRow;
    NSArray *_providers;
    NSArray *_displayItems;
    NSArray *_addedItems;
    NSArray *_removedItems;
    NSMutableDictionary *_itemsGroupedByProvider;
    NSArray *_availablePaddingItems;
    NSArray *_paddingItems;
    CNPhotoPickerProviderItem *_addItem;
    id <CNScheduler> _workQueue;
    id <CNScheduler> _callbackQueue;
}

+ (id)animojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;
+ (id)suggestionsGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;
@property(readonly, nonatomic) id <CNScheduler> callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) CNPhotoPickerProviderItem *addItem; // @synthesize addItem=_addItem;
@property(retain, nonatomic) NSArray *paddingItems; // @synthesize paddingItems=_paddingItems;
@property(retain, nonatomic) NSArray *availablePaddingItems; // @synthesize availablePaddingItems=_availablePaddingItems;
@property(retain, nonatomic) NSMutableDictionary *itemsGroupedByProvider; // @synthesize itemsGroupedByProvider=_itemsGroupedByProvider;
@property(retain, nonatomic) NSArray *removedItems; // @synthesize removedItems=_removedItems;
@property(retain, nonatomic) NSArray *addedItems; // @synthesize addedItems=_addedItems;
@property(retain, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property(nonatomic) __weak id <CNPhotoPickerProviderGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showCircleMask; // @synthesize showCircleMask=_showCircleMask;
@property(readonly, nonatomic) _Bool allowAddItem; // @synthesize allowAddItem=_allowAddItem;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (void)providerItemDidUpdate:(id)arg1;
- (long long)removeProviderItem:(id)arg1;
- (long long)addProviderItem:(id)arg1;
- (id)providerItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)addSymbolImageName;
- (void)prepareDisplayItems:(id)arg1;
- (void)reloadDisplayItemsNotifyDelegate:(_Bool)arg1;
- (id)itemsForProviderIdentifier:(id)arg1;
- (void)loadProvidersItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(_Bool)arg4;
- (id)initWithProviders:(id)arg1 groupType:(long long)arg2 environment:(id)arg3 allowAddItem:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
