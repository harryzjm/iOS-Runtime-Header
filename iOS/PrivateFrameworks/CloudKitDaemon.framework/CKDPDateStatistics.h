//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying>
{
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property(retain, nonatomic) CKDPDate *modification; // @synthesize modification=_modification;
@property(retain, nonatomic) CKDPDate *creation; // @synthesize creation=_creation;
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
@property(readonly, nonatomic) _Bool hasModification;
@property(readonly, nonatomic) _Bool hasCreation;

@end

