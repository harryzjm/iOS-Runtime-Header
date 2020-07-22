//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAGLSharegroup, NSString;

@interface EAGLContext : NSObject
{
    struct _EAGLContextPrivate *_private;
    NSString *debugLabel;
}

+ (id)currentContext;
+ (_Bool)setCurrentContext:(id)arg1;
@property(copy, nonatomic) NSString *debugLabel; // @synthesize debugLabel;
- (struct EAGLMacroContext *)GetMacroContextPrivate;
- (struct EAGLMacroContext *)getMacroContextPrivate;
- (unsigned long long)getParameter:(unsigned int)arg1 to:(int *)arg2;
- (unsigned long long)setParameter:(unsigned int)arg1 to:(int *)arg2;
- (_Bool)setBlockFence:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1;
- (_Bool)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2;
@property(nonatomic, getter=isMultiThreaded) _Bool multiThreaded;
@property(readonly) EAGLSharegroup *sharegroup;
@property(readonly) unsigned long long API;
- (void)dealloc;
- (id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(_Bool)arg2;
- (id)initWithAPI:(unsigned long long)arg1;
- (id)init;

@end

