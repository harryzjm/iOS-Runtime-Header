//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class DESBfloat16Transport, DESBinary32Transport, DESBinary64Transport;

@interface DESDataTransport : PBCodable <NSCopying>
{
    DESBfloat16Transport *_bfloat16;
    DESBinary32Transport *_binary32;
    DESBinary64Transport *_binary64;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DESBfloat16Transport *bfloat16; // @synthesize bfloat16=_bfloat16;
@property(retain, nonatomic) DESBinary32Transport *binary32; // @synthesize binary32=_binary32;
@property(retain, nonatomic) DESBinary64Transport *binary64; // @synthesize binary64=_binary64;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBfloat16;
@property(readonly, nonatomic) _Bool hasBinary32;
@property(readonly, nonatomic) _Bool hasBinary64;

@end
