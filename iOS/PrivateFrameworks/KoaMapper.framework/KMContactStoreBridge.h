//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, KMProviderHistoryLog, KVItemMapper, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface KMContactStoreBridge : NSObject
{
    CNContactStore *_contactStore;
    KVItemMapper *_itemMapper;
    KMProviderHistoryLog *_log;
    NSData *_historyToken;
    NSDictionary *_mapperAdditionalFields;
    unsigned long long _version;
}

+ (id)_contactFetchKeys;
- (void).cxx_destruct;
- (_Bool)_checkAuthorizationAndFetchMeCard;
- (_Bool)enumerateDeltaItemsWithError:(id *)arg1 addOrUpdateBlock:(CDUnknownBlockType)arg2 removeBlock:(CDUnknownBlockType)arg3;
- (id)_fetchContactsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)lastChangesAccepted;
- (void)changesAccepted;
- (void)resetDeltaState;
- (_Bool)isDeltaEligible;
- (unsigned long long)version;
- (id)validity;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithContactStore:(id)arg1 historyLog:(id)arg2;
- (id)init;
- (id)originAppId;
- (long long)itemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

