//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSUndoManager, VSKeychainStore;

__attribute__((visibility("hidden")))
@interface VSKeychainEditingContext : NSObject
{
    VSKeychainStore *_keychainStore;
    NSUndoManager *_undoManager;
    NSMutableSet *_items;
}

@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) VSKeychainStore *keychainStore; // @synthesize keychainStore=_keychainStore;
- (void).cxx_destruct;
- (_Bool)save:(id *)arg1;
@property(readonly, nonatomic) NSSet *registeredItems;
@property(readonly, nonatomic) NSSet *updatedItems;
@property(readonly, nonatomic) NSSet *deletedItems;
@property(readonly, nonatomic) NSSet *insertedItems;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)insertItem:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (void)fulfillFault:(id)arg1;
- (void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3;
- (id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3;
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateQuery:(struct __CFDictionary *)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;
- (id)init;

@end

