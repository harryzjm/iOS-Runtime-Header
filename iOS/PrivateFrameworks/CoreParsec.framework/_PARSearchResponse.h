//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARSearchResponse-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _PARSearchResponse_Error, _PARSearchResponse_QueryFeatures;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse : PBCodable <_PARSearchResponse, NSSecureCoding>
{
    _Bool _suggestionsAreBlended;
    int _status;
    float _completionScore;
    int _maxAgeSeconds;
    NSString *_prefix;
    NSString *_query;
    NSArray *_suggestions;
    NSData *_feedback;
    _PARSearchResponse_Error *_error;
    long long _millisecondDuration;
    NSString *_partialClientAddress;
    _PARSearchResponse_QueryFeatures *_queryFeatures;
    NSDictionary *_blenderFeaturesL3;
    NSArray *_corrections;
    NSArray *_results;
    NSArray *_sections;
    NSData *_legacyJSON;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *legacyJSON; // @synthesize legacyJSON=_legacyJSON;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(copy, nonatomic) NSArray *corrections; // @synthesize corrections=_corrections;
@property(copy, nonatomic) NSDictionary *blenderFeaturesL3; // @synthesize blenderFeaturesL3=_blenderFeaturesL3;
@property(retain, nonatomic) _PARSearchResponse_QueryFeatures *queryFeatures; // @synthesize queryFeatures=_queryFeatures;
@property(copy, nonatomic) NSString *partialClientAddress; // @synthesize partialClientAddress=_partialClientAddress;
@property(nonatomic) long long millisecondDuration; // @synthesize millisecondDuration=_millisecondDuration;
@property(retain, nonatomic) _PARSearchResponse_Error *error; // @synthesize error=_error;
@property(nonatomic) int maxAgeSeconds; // @synthesize maxAgeSeconds=_maxAgeSeconds;
@property(copy, nonatomic) NSData *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) float completionScore; // @synthesize completionScore=_completionScore;
@property(nonatomic) _Bool suggestionsAreBlended; // @synthesize suggestionsAreBlended=_suggestionsAreBlended;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (id)correctionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctionsCount;
- (void)addCorrections:(id)arg1;
- (void)clearCorrections;
- (void)setBlenderFeaturesL3:(float)arg1 forKey:(long long)arg2;
- (_Bool)getBlenderFeaturesL3:(float *)arg1 forKey:(long long)arg2;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
