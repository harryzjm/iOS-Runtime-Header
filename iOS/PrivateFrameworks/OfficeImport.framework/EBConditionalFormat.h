//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBConditionalFormat : NSObject
{
}

+ (void)readXlConditionalFormat:(struct XlConditionalFormat *)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;
+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;
+ (_Bool)validXlCf:(struct XlCf *)arg1;

@end

