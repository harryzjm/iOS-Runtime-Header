//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFStringUtilities : NSObject
{
}

+ (id)descriptionForMachTimeInterval:(unsigned long long)arg1;
+ (id)descriptionForNSInterval:(unsigned long long)arg1;
+ (id)descriptionForTimeInterval:(double)arg1;
+ (id)LTRString:(id)arg1;
+ (const char *)safeCString:(id)arg1;
+ (id)mapCollection:(id)arg1 transformation:(CDUnknownBlockType)arg2;
+ (id)base64ToHexMapForBase64Strings:(id)arg1;
+ (id)hexToBase64MapForBase64Strings:(id)arg1;
+ (_Bool)isValidHexString:(id)arg1;
+ (id)base64ToHexMapForHexStrings:(id)arg1;
+ (id)hexToBase64MapForHexStrings:(id)arg1;
+ (id)dataForBase64String:(id)arg1;
+ (id)dataForHexString:(id)arg1;
+ (id)hexStringForData:(id)arg1;
+ (id)stringByRemovingInvalidXMLCharactersFromString:(id)arg1;

@end

