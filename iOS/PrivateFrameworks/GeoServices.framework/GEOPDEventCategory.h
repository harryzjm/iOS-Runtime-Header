//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEventCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _eventLookupCategory;
    NSMutableArray *_localizedCategorys;
    struct {
        unsigned int eventLookupCategory:1;
    } _has;
}

+ (Class)localizedCategoryType;
@property(retain, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
- (int)StringAsEventLookupCategory:(id)arg1;
- (id)eventLookupCategoryAsString:(int)arg1;
@property(nonatomic) _Bool hasEventLookupCategory;
@property(nonatomic) int eventLookupCategory; // @synthesize eventLookupCategory=_eventLookupCategory;

@end

