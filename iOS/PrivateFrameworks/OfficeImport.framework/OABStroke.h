//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABStroke : NSObject
{
}

+ (id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
+ (id)readStrokeFromShapeBaseManager:(id)arg1 state:(id)arg2;
+ (void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(struct EshStroke *)arg2 state:(id)arg3;
+ (int)writeCapStyle:(unsigned char)arg1;
+ (int)writeLineEndLength:(unsigned char)arg1;
+ (int)writeLineEndWidth:(unsigned char)arg1;
+ (int)writeLineEndType:(unsigned char)arg1;
+ (int)writePresetDashStyle:(BOOL)arg1;
+ (int)writeCompoundType:(unsigned char)arg1;
+ (unsigned char)readCapStyle:(int)arg1;
+ (unsigned char)readLineEndLength:(int)arg1;
+ (unsigned char)readLineEndWidth:(int)arg1;
+ (unsigned char)readLineEndType:(int)arg1;
+ (BOOL)readPresetDashStyle:(int)arg1;
+ (unsigned char)readCompoundType:(int)arg1;

@end

