//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (id)stringWithUnderlineType:(unsigned char)arg1;
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;
+ (id)stringWithCapsType:(unsigned char)arg1;
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (unsigned char)readUnderlineType:(id)arg1;

@end

