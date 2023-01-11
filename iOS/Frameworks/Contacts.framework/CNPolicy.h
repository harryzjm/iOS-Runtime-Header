//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNPolicy : NSObject
{
}

- (id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2;
- (_Bool)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id *)arg3;
- (_Bool)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id *)arg3;
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;
- (_Bool)isContactPropertySupported:(id)arg1;
- (_Bool)shouldRemoveContact:(id)arg1;
- (_Bool)shouldAddContact:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly;

@end
