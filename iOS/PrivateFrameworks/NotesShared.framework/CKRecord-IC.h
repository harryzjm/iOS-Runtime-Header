//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSString;

@interface CKRecord (IC)
+ (id)ic_encryptedDataKeyForAssetKey:(id)arg1;
+ (id)ic_encryptedKeyForKeyPrefix:(id)arg1;
+ (id)ic_assetKeyForKeyPrefix:(id)arg1;
+ (id)ic_valueKeyForKeyPrefix:(id)arg1;
+ (id)ic_systemFieldsValueTransformer;
- (id)ic_copyWithUserFields:(_Bool)arg1;
- (void)ic_inlineEncryptedDataAssetForKeyPrefix:(id)arg1;
- (void)ic_inlineDataAssetForKeyPrefix:(id)arg1;
- (void)ic_setEncryptedInlineableDataAsset:(id)arg1 forKeyPrefix:(id)arg2 approach:(long long)arg3;
- (id)ic_encryptedInlineableDataAssetForKeyPrefix:(id)arg1;
- (void)ic_setInlineableDataAsset:(id)arg1 forKeyPrefix:(id)arg2 approach:(long long)arg3;
- (id)ic_inlineableDataAssetForKeyPrefix:(id)arg1;
- (_Bool)ic_shouldUseAssetForInlineableDataAsset:(id)arg1 approach:(long long)arg2;
@property(readonly, nonatomic) _Bool ic_isOwnedByCurrentUser;
@property(readonly, nonatomic) _Bool ic_hasMetadata;
- (long long)databaseScope;
- (id)ic_loggingDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

