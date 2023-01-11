//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSessionMissingSuggestionsFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface _CPSessionMissingSuggestionsFeedback : PBCodable <_CPProcessableFeedback, _CPSessionMissingSuggestionsFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;
    NSArray *_suggestions;
}

@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
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
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (id)init;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

