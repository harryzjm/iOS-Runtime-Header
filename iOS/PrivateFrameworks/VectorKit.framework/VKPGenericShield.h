//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShield : PBCodable <NSCopying>
{
    int _style;
    NSMutableArray *_variants;
}

@property(retain, nonatomic) NSMutableArray *variants; // @synthesize variants=_variants;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)variantAtIndex:(unsigned long long)arg1;
- (unsigned long long)variantsCount;
- (void)addVariant:(id)arg1;
- (void)clearVariants;
- (void)dealloc;

@end
