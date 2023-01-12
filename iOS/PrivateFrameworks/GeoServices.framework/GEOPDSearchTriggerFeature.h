//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTriggerFeature : PBCodable
{
    PBDataReader *_reader;
    CDStruct_95bda58d _completionSourceTypes;
    NSString *_canonicalName;
    NSString *_displayName;
    NSString *_entityId;
    long long _globalEntityPopularity;
    long long _globalPopularity;
    double _lat;
    double _lng;
    long long _localPopularity;
    long long _localEntityPopularity;
    NSMutableArray *_prefCategorys;
    double _similarityScore;
    NSString *_trigger;
    double _w2vSimilarityScore;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _globalPmiScore;
    float _localPmiScore;
    int _tag;
    _Bool _isUseShowOnMapHighlightExtra;
    struct {
        unsigned int has_globalEntityPopularity:1;
        unsigned int has_globalPopularity:1;
        unsigned int has_lat:1;
        unsigned int has_lng:1;
        unsigned int has_localPopularity:1;
        unsigned int has_localEntityPopularity:1;
        unsigned int has_similarityScore:1;
        unsigned int has_w2vSimilarityScore:1;
        unsigned int has_globalPmiScore:1;
        unsigned int has_localPmiScore:1;
        unsigned int has_tag:1;
        unsigned int has_isUseShowOnMapHighlightExtra:1;
        unsigned int read_completionSourceTypes:1;
        unsigned int read_canonicalName:1;
        unsigned int read_displayName:1;
        unsigned int read_entityId:1;
        unsigned int read_prefCategorys:1;
        unsigned int read_trigger:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

