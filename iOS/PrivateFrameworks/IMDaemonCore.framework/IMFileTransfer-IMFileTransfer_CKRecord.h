//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMFileTransfer.h>

@interface IMFileTransfer (IMFileTransfer_CKRecord)
+ (_Bool)validateMD5HashForRecord:(id)arg1;
+ (id)md5HashForRecord:(id)arg1;
+ (_Bool)attachmentRecordHasAsset:(id)arg1;
+ (id)transferGUIDOfRecord:(id)arg1;
+ (long long)sizeOfAssetForRecord:(id)arg1;
+ (id)utiTypeForRecord:(id)arg1;
+ (_Bool)_recordIsValid:(id)arg1;
+ (id)_recordType;
- (id)_fileManager;
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(_Bool)arg2;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;
- (id)md5HashForTransfer;
- (id)md5HashForURL:(id)arg1;
- (id)ckRecordIDFromExistingMetadata;
- (id)_copyCKRecordFromExistingCKMetadata;
- (id)_assetURLToInsertToRecord;
- (id)_recordIDUsingSalt:(id)arg1 zoneID:(id)arg2;
- (id)_recordNameWithSalt:(id)arg1;
- (id)_ckUniqueID;
@end

