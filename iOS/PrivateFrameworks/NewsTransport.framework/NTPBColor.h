//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBColor : PBCodable <NSCopying>
{
    double _a;
    double _b;
    double _g;
    double _r;
    struct {
        unsigned int a:1;
        unsigned int b:1;
        unsigned int g:1;
        unsigned int r:1;
    } _has;
}

@property(nonatomic) double a; // @synthesize a=_a;
@property(nonatomic) double b; // @synthesize b=_b;
@property(nonatomic) double g; // @synthesize g=_g;
@property(nonatomic) double r; // @synthesize r=_r;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasA;
@property(nonatomic) _Bool hasB;
@property(nonatomic) _Bool hasG;
@property(nonatomic) _Bool hasR;

@end

