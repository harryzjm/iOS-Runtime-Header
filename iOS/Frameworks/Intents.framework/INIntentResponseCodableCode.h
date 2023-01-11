//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INIntentResponseCodableDescription, NSArray, NSString;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding>
{
    _Bool _success;
    long long _value;
    NSString *_name;
    NSString *_formatString;
    NSString *_formatStringLocID;
    NSString *_conciseFormatString;
    NSString *_conciseFormatStringLocID;
    INIntentResponseCodableDescription *__codableDescription;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setCodableDescription:) __weak INIntentResponseCodableDescription *_codableDescription; // @synthesize _codableDescription=__codableDescription;
@property(copy, nonatomic) NSString *conciseFormatStringLocID; // @synthesize conciseFormatStringLocID=_conciseFormatStringLocID;
@property(copy, nonatomic) NSString *conciseFormatString; // @synthesize conciseFormatString=_conciseFormatString;
@property(copy, nonatomic) NSString *formatStringLocID; // @synthesize formatStringLocID=_formatStringLocID;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long value; // @synthesize value=_value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)_parameterNamesFromString:(id)arg1;
@property(readonly, nonatomic) NSArray *parameterNames;
- (id)__INCodableDescriptionConciseFormatStringKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionConciseFormatStringIDKey;
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionNameKey;
- (id)__INCodableDescriptionSuccessKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
