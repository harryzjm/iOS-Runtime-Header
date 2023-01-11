//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIDragEventSample : NSObject
{
    _Bool _isApplicationEnter;
    _Bool _isApplicationWithin;
    _Bool _isApplicationExit;
    _Bool _isPolicyDriven;
    _Bool _isDragEnd;
    _Bool _hasBeenDelivered;
    unsigned int _windowServerHitTestContextID;
    UIWindow *_window;
    struct CGPoint _sceneLocation;
    struct CGPoint _locationInWindow;
}

+ (id)sampleFromHIDEvent:(struct __IOHIDEvent *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasBeenDelivered; // @synthesize hasBeenDelivered=_hasBeenDelivered;
@property(readonly, nonatomic) unsigned int windowServerHitTestContextID; // @synthesize windowServerHitTestContextID=_windowServerHitTestContextID;
@property(readonly, nonatomic) _Bool isDragEnd; // @synthesize isDragEnd=_isDragEnd;
@property(readonly, nonatomic) _Bool isPolicyDriven; // @synthesize isPolicyDriven=_isPolicyDriven;
@property(readonly, nonatomic) _Bool isApplicationExit; // @synthesize isApplicationExit=_isApplicationExit;
@property(readonly, nonatomic) _Bool isApplicationWithin; // @synthesize isApplicationWithin=_isApplicationWithin;
@property(readonly, nonatomic) _Bool isApplicationEnter; // @synthesize isApplicationEnter=_isApplicationEnter;
@property(readonly, nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow=_locationInWindow;
@property(readonly, nonatomic) struct CGPoint sceneLocation; // @synthesize sceneLocation=_sceneLocation;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (id)description;
- (id)hitTestWithEvent:(id)arg1;

@end
