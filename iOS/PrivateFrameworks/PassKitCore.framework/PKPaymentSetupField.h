//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol NSObject><NSCopying;

@interface PKPaymentSetupField : NSObject
{
    id <NSObject><NSCopying> _currentValue;
    _Bool _optional;
    _Bool _currentValueFromCameraCapture;
    _Bool _requiresSecureSubmission;
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSString *_displayFormat;
    NSString *_defaultValue;
    NSString *_submissionKey;
    NSString *_submissionDestination;
    NSString *_localizedPlaceholder;
    NSDictionary *_rawConfigurationDictionary;
}

+ (Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1;
+ (id)sampleCustomPaymentSetupFields;
+ (id)newRandomlyGeneratedField;
@property(readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary; // @synthesize rawConfigurationDictionary=_rawConfigurationDictionary;
@property(copy, nonatomic) NSString *localizedPlaceholder; // @synthesize localizedPlaceholder=_localizedPlaceholder;
@property(nonatomic) _Bool requiresSecureSubmission; // @synthesize requiresSecureSubmission=_requiresSecureSubmission;
@property(copy, nonatomic) NSString *submissionDestination; // @synthesize submissionDestination=_submissionDestination;
@property(copy, nonatomic) NSString *submissionKey; // @synthesize submissionKey=_submissionKey;
@property(nonatomic, getter=isCurrentValueFromCameraCapture) _Bool currentValueFromCameraCapture; // @synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture;
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property(copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id <NSObject><NSCopying> currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;
- (void)noteCurrentValueChanged;
@property(readonly, nonatomic) unsigned long long fieldType;
- (void)_setLocalizedDisplayName:(id)arg1;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)submissionString;
- (id)displayString;
@property(readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
- (id)pickerFieldObject;
- (id)footerFieldObject;
- (id)labelFieldObject;
- (id)dateFieldObject;
- (id)textFieldObject;
- (_Bool)isFieldTypePicker;
- (_Bool)isFieldTypeFooter;
- (_Bool)isFieldTypeLabel;
- (_Bool)isFieldTypeDate;
- (_Bool)isFieldTypeText;
@property(readonly, nonatomic, getter=isBuiltIn) _Bool builtIn;
- (void)updateWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

