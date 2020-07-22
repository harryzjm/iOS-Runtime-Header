//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSMutableArray, NSMutableDictionary;

@interface CNFavorites : NSObject
{
    NSMutableArray *_entries;
    _Bool _dirty;
    _Bool _postCount;
    _Bool _needsReload;
    _Bool _autoUpdating;
    CNContactStore *_store;
    NSMutableDictionary *_uidToEntry;
}

+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool autoUpdating; // @synthesize autoUpdating=_autoUpdating;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool postCount; // @synthesize postCount=_postCount;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSMutableDictionary *uidToEntry; // @synthesize uidToEntry=_uidToEntry;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (_Bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (void)_delayedLookup;
- (void)recacheIdentitiesSoon;
- (void)save;
- (_Bool)_writeFavoritesToFile:(id)arg1;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)addEntry:(id)arg1;
- (void)_entriesChangedExternally;
- (void)_postChangeNotification;
- (void)_entryIdentityChanged:(id)arg1;
- (void)saveImmediately;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_addEntryToMap:(id)arg1;
- (_Bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (_Bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (id)entriesForContact:(id)arg1;
- (id)entriesForContacts:(id)arg1;
@property(readonly, getter=isFull) _Bool full;
- (void)_scheduleSave;
- (id)entriesWithRecaching:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *entries;
- (void)loadEntriesIfNecessaryAndRecache:(_Bool)arg1;
- (id)_entryDictionaries;
- (id)synchronousRemoteObjectProxyForContactsXPCService;
- (void)clearState;
- (void)dealloc;
- (id)init;
- (id)initWithContactStore:(id)arg1 autoUpdating:(_Bool)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;

@end
