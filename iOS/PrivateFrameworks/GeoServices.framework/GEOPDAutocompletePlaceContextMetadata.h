//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompletePlaceContextMetadata : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _clientizationFeatures;
    NSMutableArray *_alternateSearchableNames;
    NSString *_inferredCategory;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distanceDisplayThreshold;
    int _requestedShortAddressType;
    _Bool _enableChildPoisWithoutAcRank;
    _Bool _enableLookInsideActionForVenuePois;
    _Bool _isDefaultName;
    _Bool _isLookAroundActionAllowed;
    _Bool _isProminentResult;
    _Bool _shouldEnableCallAction;
    _Bool _shouldEnableWebsiteAction;
    _Bool _shouldSuppressDirectionsAction;
    struct {
        unsigned int has_distanceDisplayThreshold:1;
        unsigned int has_requestedShortAddressType:1;
        unsigned int has_enableChildPoisWithoutAcRank:1;
        unsigned int has_enableLookInsideActionForVenuePois:1;
        unsigned int has_isDefaultName:1;
        unsigned int has_isLookAroundActionAllowed:1;
        unsigned int has_isProminentResult:1;
        unsigned int has_shouldEnableCallAction:1;
        unsigned int has_shouldEnableWebsiteAction:1;
        unsigned int has_shouldSuppressDirectionsAction:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientizationFeatures:1;
        unsigned int read_alternateSearchableNames:1;
        unsigned int read_inferredCategory:1;
        unsigned int read_matchedDisplayNameLanguageCode:1;
        unsigned int read_matchedDisplayName:1;
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

