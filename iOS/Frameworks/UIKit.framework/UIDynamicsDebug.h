//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/GLKViewDelegate-Protocol.h>

@class EAGLContext, GLKBaseEffect, GLKView, MISSING_TYPE, NSString, UIDynamicAnimator;

__attribute__((visibility("hidden")))
@interface UIDynamicsDebug : NSObject <GLKViewDelegate>
{
    unsigned int _vertexBuffer;
    struct {
        struct {
            float x;
            float y;
        } position;
        MISSING_TYPE *color;
    } _vertices[42000];
    GLKBaseEffect *_effect;
    EAGLContext *_ctx;
    _Bool _enabled;
    _Bool _showPhysics;
    _Bool _showOutlineInterior;
    _Bool _showFields;
    UIDynamicAnimator *_animator;
    GLKView *_debugView;
}

@property(retain, nonatomic) GLKView *debugView; // @synthesize debugView=_debugView;
@property(nonatomic) __weak UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool showFields; // @synthesize showFields=_showFields;
@property(nonatomic) _Bool showOutlineInterior; // @synthesize showOutlineInterior=_showOutlineInterior;
@property(nonatomic) _Bool showPhysics; // @synthesize showPhysics=_showPhysics;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)_teardownDebugView;
- (void)_setupDebugViewIfNeccessary;
- (void)setNeedsDisplay;
- (void)captureDebugInformation;
- (void)dealloc;
- (id)init;
- (id)initWithAnimator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

