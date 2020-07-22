//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface _UIViewAnimationWithComposerWrapper : NSObject
{
    id <UIIntervalAnimating> _animation;
    id <UIViewAnimationComposing> _composer;
}

+ (id)instanceWithAnimation:(id)arg1 composer:(id)arg2;
@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(retain, nonatomic) id <UIIntervalAnimating> animation; // @synthesize animation=_animation;
- (void).cxx_destruct;

@end
