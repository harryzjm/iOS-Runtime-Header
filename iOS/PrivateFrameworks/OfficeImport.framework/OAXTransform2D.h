//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTransform2D : NSObject
{
}

+ (struct CGRect)readChildrenBoundsFromParentXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (id)readOrientedBoundsFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 relative:(_Bool)arg3 drawingState:(id)arg4;
+ (void)readFromParentXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 toDrawable:(id)arg3 drawingState:(id)arg4;

@end

