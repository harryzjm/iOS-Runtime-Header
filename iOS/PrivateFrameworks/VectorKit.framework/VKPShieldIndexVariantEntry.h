//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexVariantEntry : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
    int _variantType;
    struct {
        unsigned int variantType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *textEntries; // @synthesize textEntries=_textEntries;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)textEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textEntriesCount;
- (void)addTextEntries:(id)arg1;
- (void)clearTextEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(nonatomic) _Bool hasVariantType;
@property(nonatomic) int variantType; // @synthesize variantType=_variantType;
- (void)dealloc;

@end
