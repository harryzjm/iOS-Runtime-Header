//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KMIntentVocabularyAuthorization, KMIntentVocabularyStoreManager, KVItemMapper, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface KMIntentVocabularyDatasetBridge : NSObject
{
    NSString *_appId;
    NSArray *_intentSlots;
    KMIntentVocabularyStoreManager *_storeManager;
    KMIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}

- (void).cxx_destruct;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)originAppId;
- (long long)itemType;
- (id)initWithAppId:(id)arg1 intentSlots:(id)arg2 storeManager:(id)arg3 authorization:(id)arg4 itemMapper:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

