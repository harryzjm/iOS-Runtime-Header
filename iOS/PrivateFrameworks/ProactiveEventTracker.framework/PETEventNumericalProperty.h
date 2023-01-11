//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PETEventNumericalProperty
{
    struct _NSRange _validRange;
    _Bool _clampValues;
}

- (id)longestValueString;
- (unsigned long long)cardinality;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (struct _NSRange)validRange;
- (id)description;
- (id)initWithName:(id)arg1 range:(struct _NSRange)arg2 clampValues:(_Bool)arg3;

@end
