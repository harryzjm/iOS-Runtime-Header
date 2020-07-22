//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDCoreRoutineMapItem, NSMutableArray;

@interface AWDCoreRoutinePlace : PBCodable <NSCopying>
{
    NSMutableArray *_distanceToOtherPlaces;
    AWDCoreRoutineMapItem *_mapItem;
}

+ (Class)distanceToOtherPlacesType;
@property(retain, nonatomic) NSMutableArray *distanceToOtherPlaces; // @synthesize distanceToOtherPlaces=_distanceToOtherPlaces;
@property(retain, nonatomic) AWDCoreRoutineMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)distanceToOtherPlacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)distanceToOtherPlacesCount;
- (void)addDistanceToOtherPlaces:(id)arg1;
- (void)clearDistanceToOtherPlaces;
@property(readonly, nonatomic) _Bool hasMapItem;
- (void)dealloc;

@end

