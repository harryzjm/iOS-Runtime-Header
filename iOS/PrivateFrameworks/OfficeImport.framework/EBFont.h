//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFont : NSObject
{
}

+ (id)edFontFromXlDXfFont:(struct XlDXfFont *)arg1 edResources:(id)arg2;
+ (id)edFontFromXlFont:(struct XlFont *)arg1 edResources:(id)arg2;
+ (int)convertEDUnderlineEnumToXl:(int)arg1;
+ (int)convertEDScriptEnumToXl:(int)arg1;
+ (int)convertXlUnderlineEnumToED:(int)arg1;
+ (int)convertXlScriptEnumToED:(int)arg1;

@end

