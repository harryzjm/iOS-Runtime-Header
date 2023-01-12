//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, SKUIIndexBarControl, SKUIIndexBarEntryDescriptor, SKUIResourceLoader;
@protocol SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarControlController : NSObject
{
    SKUIIndexBarEntryDescriptor *_combinedEntryDescriptor;
    NSMapTable *_entryDescriptorToCachedEntry;
    _Bool _hasValidCombinedEntryDescriptor;
    NSMapTable *_indexPathToEntryDescriptor;
    NSMapTable *_requestIDToDescriptors;
    struct {
        unsigned int dataSourceRespondsToCombinedEntry:1;
        unsigned int dataSourceRespondsToNumberOfSections:1;
        unsigned int delegateRespondsToDidSelectEntryAtIndexPath:1;
        unsigned int delegateRespondsToDidSelectBeyondBottom:1;
        unsigned int delegateRespondsToDidSelectBeyondTop:1;
    } _dataSourceDelegateFlags;
    id <SKUIIndexBarControlControllerDataSource> _dataSource;
    id <SKUIIndexBarControlControllerDelegate> _delegate;
    SKUIIndexBarControl *_indexBarControl;
    SKUIResourceLoader *_resourceLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(nonatomic) __weak id <SKUIIndexBarControlControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUIIndexBarControlControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_URLForEntryDescriptor:(id)arg1;
- (void)_updateCachedEntry:(id)arg1 forEntryDescriptor:(id)arg2;
- (id)_placeholderEntryForEntryDescriptor:(id)arg1;
- (void)_loadEntryForEntryDescriptor:(id)arg1;
- (void)_finishLoadForRequestID:(id)arg1 withResultingImage:(id)arg2;
- (id)_entryForEntryDescriptor:(id)arg1 loadingIfNeeded:(_Bool)arg2;
- (id)_entryDescriptorAtIndexPath:(id)arg1;
- (void)_configureEntry:(id)arg1 withEntryDescriptor:(id)arg2;
- (id)_combinedEntryDescriptor;
- (id)_cachedEntryForEntryDescriptor:(id)arg1;
- (void)_cancelLoadForEntryDescriptors:(id)arg1;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;
- (long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
- (long long)numberOfSectionsInIndexBarControl:(id)arg1;
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;
- (id)combinedEntryForIndexBarControl:(id)arg1;
- (void)reloadData;
- (void)reloadSections:(id)arg1;
- (void)reloadEntryDescriptorAtIndexPath:(id)arg1;
- (void)reloadCombinedEntryDescriptor;
- (void)dealloc;
- (id)initWithIndexBarControl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

