//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface CKAssetUploadRequestMetadata <NSSecureCoding>
{
    long long _listIndex;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(readonly, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(nonatomic) long long listIndex; // @synthesize listIndex=_listIndex;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;

@end
