//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSRegularExpression, NSString;

@interface _HKCDADocumentFieldFilter
{
    unsigned long long _operatorType;
    NSString *_keyPath;
    NSString *_comparisonValue;
    NSRegularExpression *_comparisonExpression;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 comparisonValue:(id)arg3;
@property(readonly, nonatomic) NSRegularExpression *comparisonExpression; // @synthesize comparisonExpression=_comparisonExpression;
@property(readonly, nonatomic) NSString *comparisonValue; // @synthesize comparisonValue=_comparisonValue;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_comparisonExpression;

@end
