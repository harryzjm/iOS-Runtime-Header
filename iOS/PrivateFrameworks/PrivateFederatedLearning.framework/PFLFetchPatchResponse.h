//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PrivateFederatedLearning/NSCopying-Protocol.h>

@class CKCodeRecordTransport;

@interface PFLFetchPatchResponse : PBCodable <NSCopying>
{
    long long _modelVersion;
    CKCodeRecordTransport *_patchAsset;
    struct {
        unsigned int modelVersion:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKCodeRecordTransport *patchAsset; // @synthesize patchAsset=_patchAsset;
@property(nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPatchAsset;
@property(nonatomic) _Bool hasModelVersion;

@end
