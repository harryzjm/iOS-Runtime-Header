//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPDDomain, FPDExtension, FPItem, NSError, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDItemIterator
{
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    _Bool _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}

- (void).cxx_destruct;
@property(readonly) NSString *prettyDescription;
@property(readonly) int requestEffectivePID;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)dealloc;
- (unsigned long long)numFoldersPopped;
- (_Bool)done;
- (void)_invalidateWithError:(id)arg1;
- (id)error;
- (id)nextWithError:(id *)arg1;
- (void)_next;
- (_Bool)_shouldTraverseSubTree:(id)arg1;
- (void)_decorateItem:(id)arg1;
- (_Bool)_enumerateMoreItems;
- (_Bool)_createEnumerator;
- (id)_popItem;
- (void)_pushFolder:(id)arg1;
- (void)_popFolder;
- (id)initWithItem:(id)arg1 provider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) double timeout;
@property unsigned long long timeoutState;

@end

