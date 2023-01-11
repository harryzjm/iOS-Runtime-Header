//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKGLUtility : NSObject
{
}

+ (id)defaultDevice;
+ (void)postGLInactiveNotification;
+ (void)postGLActiveNotification;
+ (double)layerContentsScale;
+ (_Bool)canUseOpenGL;
+ (_Bool)isInBackground;
+ (void)initialize;

@end

