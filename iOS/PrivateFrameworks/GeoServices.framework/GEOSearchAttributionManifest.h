//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionManifest : PBCodable <NSCopying>
{
    double _timestamp;
    NSMutableArray *_actionComponentMapEntries;
    NSMutableArray *_searchAttributionSources;
    NSString *_sourceURL;
    CDStruct_b5306035 _has;
}

+ (Class)actionComponentMapEntriesType;
+ (Class)searchAttributionSourcesType;
@property(retain, nonatomic) NSMutableArray *actionComponentMapEntries; // @synthesize actionComponentMapEntries=_actionComponentMapEntries;
@property(retain, nonatomic) NSMutableArray *searchAttributionSources; // @synthesize searchAttributionSources=_searchAttributionSources;
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
- (id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionComponentMapEntriesCount;
- (void)addActionComponentMapEntries:(id)arg1;
- (void)clearActionComponentMapEntries;
- (id)searchAttributionSourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAttributionSourcesCount;
- (void)addSearchAttributionSources:(id)arg1;
- (void)clearSearchAttributionSources;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end

