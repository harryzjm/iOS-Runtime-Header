//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject
{
    CALayer *_layer;
    NSString *_key;
    CDUnknownBlockType _removalAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType removalAction; // @synthesize removalAction=_removalAction;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) __weak CALayer *layer; // @synthesize layer=_layer;
- (void)removeAnimationIfPossible;
- (id)initWithLayer:(id)arg1 key:(id)arg2;
- (id)init;

@end
