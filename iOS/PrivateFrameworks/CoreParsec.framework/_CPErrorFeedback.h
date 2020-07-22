//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPErrorFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPError;

@interface _CPErrorFeedback : PBCodable <_CPProcessableFeedback, _CPErrorFeedback, NSSecureCoding>
{
    CDStruct_b5306035 _has;
    unsigned long long _timestamp;
    _CPError *_error;
    _CPError *_underlyingError;
}

@property(retain, nonatomic) _CPError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) _CPError *error; // @synthesize error=_error;
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
@property(readonly, nonatomic) _Bool hasUnderlyingError;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
@property(readonly, nonatomic) _Bool requiresQueryId;
- (id)initWithError:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end
