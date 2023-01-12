//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>

@class ATXPBRequestForInteractionSuggestions, NSData, NSMutableArray, NSString;

@interface ATXPBResponseForRequestForSuggestions : PBCodable <NSCopying>
{
    NSData *_errorData;
    NSData *_feedbackMetadata;
    ATXPBRequestForInteractionSuggestions *_interactionSuggestionRequest;
    int _responseCode;
    NSMutableArray *_suggestions;
    NSString *_uuidString;
    struct {
        unsigned int responseCode:1;
    } _has;
}

+ (Class)suggestionsType;
- (void).cxx_destruct;
@property(retain, nonatomic) ATXPBRequestForInteractionSuggestions *interactionSuggestionRequest; // @synthesize interactionSuggestionRequest=_interactionSuggestionRequest;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *feedbackMetadata; // @synthesize feedbackMetadata=_feedbackMetadata;
@property(retain, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasInteractionSuggestionRequest;
@property(readonly, nonatomic) _Bool hasErrorData;
- (int)StringAsResponseCode:(id)arg1;
- (id)responseCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasResponseCode;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) _Bool hasFeedbackMetadata;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
@property(readonly, nonatomic) _Bool hasUuidString;

@end
