//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPResultSectionForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>
{
    _Bool _isInitiallyHidden;
    int _knownBundleIdentifier;
    NSArray *_results;
    NSString *_identifier;
    double _rankingScore;
    NSData *_fallbackResultSection;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long whichBundleid; // @synthesize whichBundleid=_whichBundleid;
@property(nonatomic) _Bool isInitiallyHidden; // @synthesize isInitiallyHidden=_isInitiallyHidden;
@property(copy, nonatomic) NSData *fallbackResultSection; // @synthesize fallbackResultSection=_fallbackResultSection;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) int knownBundleIdentifier; // @synthesize knownBundleIdentifier=_knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (void)clearBundleid;
- (id)initWithFacade:(id)arg1;
- (id)feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
