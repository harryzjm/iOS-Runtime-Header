//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXUserShapes : NSObject
{
}

+ (void)readFromCharSpaceNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readAbsoluteSizeAnchor:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readRelativeSizeAnchor:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readDrawable:(struct _xmlNode *)arg1 anchor:(id)arg2 drawingState:(id)arg3;
+ (struct CGPoint)readRealPoint:(struct _xmlNode *)arg1;
+ (float)readRealCoordinate:(struct _xmlNode *)arg1;

@end

