//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPShare, NSData;

__attribute__((visibility("hidden")))
@interface CKDPShareSaveRequest : PBRequest <NSCopying>
{
    NSData *_protectedFullToken;
    CKDPShare *_share;
    NSData *_shortTokenHash;
}

+ (id)options;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProtectedFullToken;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasShare;

@end

