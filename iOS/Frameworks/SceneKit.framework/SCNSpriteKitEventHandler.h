//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene *_scene;
    NSMutableDictionary *_touchMap;
    _Bool _mouseIsDown;
    _Bool _rightMouseIsDown;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (_Bool)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)init;

@end

