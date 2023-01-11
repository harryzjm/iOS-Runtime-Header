//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSWriting-Protocol.h>
#import <iCalendar/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting>
{
    NSMutableDictionary *_parameters;
    unsigned long long _type;
    id _value;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)stringValue;
- (id)parameters;
- (_Bool)alwaysHasParametersToSerialize;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (id)allParameters;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)addParametersFromDictionary:(id)arg1;
- (id)parameterValueForName:(id)arg1;
- (id)value;
- (unsigned long long)type;
- (_Bool)isMultiValued;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (void)setValueAsProperty:(id)arg1 withRawValue:(const char *)arg2 options:(unsigned long long)arg3;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;
- (void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3;

@end
