//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordReference, NSData;

@interface CKDPRecordChainParent : PBCodable <NSCopying>
{
    NSData *_publicKeyID;
    CKDPRecordReference *_reference;
}

@property(retain, nonatomic) CKDPRecordReference *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSData *publicKeyID; // @synthesize publicKeyID=_publicKeyID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReference;
@property(readonly, nonatomic) _Bool hasPublicKeyID;

@end
