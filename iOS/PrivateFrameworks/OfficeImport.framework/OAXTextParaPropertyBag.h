//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : NSObject
{
}

+ (void)readParagraphProperties:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;
+ (int)readBulletScheme:(id)arg1;
+ (void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2;
+ (void)readAlign:(id)arg1 paragraphProperties:(id)arg2;
+ (void)readTabList:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;
+ (id)readSpacing:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end
