//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextBody : NSObject
{
}

+ (id)stringWithTextAnchorType:(unsigned char)arg1;
+ (id)stringWithTextBodyWrapType:(unsigned char)arg1;
+ (id)stringWithTextBodyFlowType:(unsigned char)arg1;
+ (id)stringWithTextBodyHorizontalOverflowType:(unsigned char)arg1;
+ (id)stringWithTextBodyVerticalOverflowType:(unsigned char)arg1;
+ (unsigned char)readHorizontalOverflowType:(id)arg1;
+ (unsigned char)readAnchorType:(id)arg1;
+ (unsigned char)readFlowType:(id)arg1;
+ (void)readTextBodyProperties:(struct _xmlNode *)arg1 textBodyProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readTextBodyFromXmlNode:(struct _xmlNode *)arg1 textBody:(id)arg2 drawingState:(id)arg3;
+ (void)writeTextBodyAutoFit:(id)arg1 to:(id)arg2;
+ (void)readHorizontalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readVerticalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readWrapType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readFlowType:(id)arg1 textBodyProperties:(id)arg2;

@end
