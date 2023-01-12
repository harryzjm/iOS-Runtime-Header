//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRINLUEXTERNALUUID : PBCodable <NSCopying>
{
    unsigned long long _highInt;
    unsigned long long _lowInt;
    int _namespaceA;
    struct {
        unsigned int highInt:1;
        unsigned int lowInt:1;
        unsigned int namespaceA:1;
    } _has;
}

@property(nonatomic) unsigned long long lowInt; // @synthesize lowInt=_lowInt;
@property(nonatomic) unsigned long long highInt; // @synthesize highInt=_highInt;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsNamespaceA:(id)arg1;
- (id)namespaceAAsString:(int)arg1;
@property(nonatomic) _Bool hasNamespaceA;
@property(nonatomic) int namespaceA; // @synthesize namespaceA=_namespaceA;
@property(nonatomic) _Bool hasLowInt;
@property(nonatomic) _Bool hasHighInt;

@end
