//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMPBEncodeOption : PBCodable <NSCopying>
{
    _Bool _isSPI;
    _Bool _isXPC;
    struct {
        unsigned int isSPI:1;
        unsigned int isXPC:1;
    } _has;
}

@property(nonatomic) _Bool isSPI; // @synthesize isSPI=_isSPI;
@property(nonatomic) _Bool isXPC; // @synthesize isXPC=_isXPC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsSPI;
@property(nonatomic) _Bool hasIsXPC;

@end

