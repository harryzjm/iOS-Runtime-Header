//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPMarkAssetBrokenRequest : PBRequest
{
    NSString *_affectedRecordType;
    CKDPRecordIdentifier *_brokenAssetRecordID;
    NSString *_fieldName;
    NSMutableArray *_fileSignatures;
    int _listIndex;
    NSMutableArray *_referenceSignatures;
    _Bool _isPackage;
    _Bool _skipWriteMissingAssetStatusRecord;
    struct {
        unsigned int listIndex:1;
        unsigned int isPackage:1;
        unsigned int skipWriteMissingAssetStatusRecord:1;
    } _has;
}

+ (Class)referenceSignatureType;
+ (Class)fileSignatureType;
+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) _Bool skipWriteMissingAssetStatusRecord; // @synthesize skipWriteMissingAssetStatusRecord=_skipWriteMissingAssetStatusRecord;
@property(retain, nonatomic) NSString *affectedRecordType; // @synthesize affectedRecordType=_affectedRecordType;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(retain, nonatomic) NSMutableArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
@property(retain, nonatomic) NSMutableArray *fileSignatures; // @synthesize fileSignatures=_fileSignatures;
@property(nonatomic) int listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID; // @synthesize brokenAssetRecordID=_brokenAssetRecordID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSkipWriteMissingAssetStatusRecord;
@property(readonly, nonatomic) _Bool hasAffectedRecordType;
@property(nonatomic) _Bool hasIsPackage;
- (id)referenceSignatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)referenceSignaturesCount;
- (void)addReferenceSignature:(id)arg1;
- (void)clearReferenceSignatures;
- (id)fileSignatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)fileSignaturesCount;
- (void)addFileSignature:(id)arg1;
- (void)clearFileSignatures;
@property(nonatomic) _Bool hasListIndex;
@property(readonly, nonatomic) _Bool hasFieldName;
@property(readonly, nonatomic) _Bool hasBrokenAssetRecordID;

@end

