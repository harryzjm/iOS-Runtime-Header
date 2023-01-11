//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMIPPhoneNumberUtils : NSObject
{
}

+ (_Bool)handle:(id)arg1 matchesHandle:(id)arg2;
+ (_Bool)isEmail:(id)arg1;
+ (id)formattedHandle:(id)arg1;
+ (id)completeNumberForPhoneNumber:(id)arg1 formatted:(_Bool)arg2;
+ (_Bool)updateTextField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
+ (_Bool)updateTextView:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
+ (id)unformatPhoneNumber:(id)arg1;
+ (id)formatFullyQualifiedPhoneNumber:(id)arg1;
+ (id)normalizedPhoneNumber:(id)arg1;
+ (id)formatPhoneNumber:(id)arg1;
+ (id)countryCode;
+ (_Bool)isPhoneNumberValid:(id)arg1;

@end
