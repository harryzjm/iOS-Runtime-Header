//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQHLasso : NSObject
{
}

+ (int)handleDrawableZOrder:(const char *)arg1 state:(id)arg2;
+ (Class)beginWorkspacePage:(id)arg1 state:(id)arg2;
+ (int)handleWorkspaceStyle:(id)arg1 state:(id)arg2;
+ (int)endWorkspace:(id)arg1;
+ (int)beginWorkspace:(const char *)arg1 state:(id)arg2;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (int)endDocument:(id)arg1 state:(id)arg2;
+ (int)beginDocument:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

