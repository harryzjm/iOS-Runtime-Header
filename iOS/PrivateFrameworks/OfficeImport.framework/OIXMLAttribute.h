//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLAttribute
{
    NSString *_name;
    NSString *_value;
}

+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)name;
- (void).cxx_destruct;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;

@end
