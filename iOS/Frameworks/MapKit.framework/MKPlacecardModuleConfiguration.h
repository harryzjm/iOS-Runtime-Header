//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MKPlacecardModuleConfiguration : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    unsigned int _version;
    struct {
        unsigned int version:1;
    } _has;
}

+ (Class)entriesType;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
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
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(nonatomic) _Bool hasVersion;

@end
