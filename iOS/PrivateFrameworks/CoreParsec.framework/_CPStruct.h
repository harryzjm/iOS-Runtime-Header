//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackJSONObject-Protocol.h>
#import <CoreParsec/_CPStruct-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPStruct : PBCodable <_CPFeedbackJSONObject, _CPStruct, NSSecureCoding>
{
    NSDictionary *_fields;
}

@property(copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)setFields:(id)arg1 forKey:(id)arg2;
- (_Bool)getFields:(id *)arg1 forKey:(id)arg2;
- (_Bool)requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

