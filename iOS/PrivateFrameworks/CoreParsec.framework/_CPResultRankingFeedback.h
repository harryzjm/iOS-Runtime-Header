//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPResultRankingFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@interface _CPResultRankingFeedback : PBCodable <_CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int localResultPosition:1;
        unsigned int personalizationScore:1;
    } _has;
    unsigned int _localResultPosition;
    unsigned long long _timestamp;
    _CPSearchResultForFeedback *_result;
    NSArray *_hiddenResults;
    NSArray *_duplicateResults;
    double _personalizationScore;
}

@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned int localResultPosition; // @synthesize localResultPosition=_localResultPosition;
@property(copy, nonatomic) NSArray *duplicateResults; // @synthesize duplicateResults=_duplicateResults;
@property(copy, nonatomic) NSArray *hiddenResults; // @synthesize hiddenResults=_hiddenResults;
@property(retain, nonatomic) _CPSearchResultForFeedback *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasPersonalizationScore;
@property(readonly, nonatomic) _Bool hasLocalResultPosition;
- (id)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (void)addDuplicateResults:(id)arg1;
- (void)clearDuplicateResults;
- (id)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (void)addHiddenResults:(id)arg1;
- (void)clearHiddenResults;
@property(readonly, nonatomic) _Bool hasResult;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
