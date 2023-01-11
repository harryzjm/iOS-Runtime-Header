//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackJSONObject-Protocol.h>
#import <CoreParsec/_CPValue-Protocol.h>

@class NSData, NSDictionary, NSString, _CPListValue, _CPStruct;

@interface _CPValue : PBCodable <_CPFeedbackJSONObject, _CPValue, NSSecureCoding>
{
    _Bool _bool_value;
    int _null_value;
    double _number_value;
    NSString *_string_value;
    _CPStruct *_struct_value;
    _CPListValue *_list_value;
    NSData *_bytes_value;
    unsigned long long _whichKind;
}

@property(readonly, nonatomic) unsigned long long whichKind; // @synthesize whichKind=_whichKind;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(copy, nonatomic) NSData *bytes_value; // @synthesize bytes_value=_bytes_value;
@property(retain, nonatomic) _CPListValue *list_value; // @synthesize list_value=_list_value;
@property(retain, nonatomic) _CPStruct *struct_value; // @synthesize struct_value=_struct_value;
@property(nonatomic) _Bool bool_value; // @synthesize bool_value=_bool_value;
@property(copy, nonatomic) NSString *string_value; // @synthesize string_value=_string_value;
@property(nonatomic) double number_value; // @synthesize number_value=_number_value;
@property(nonatomic) int null_value; // @synthesize null_value=_null_value;
- (_Bool)requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

