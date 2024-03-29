//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UISpringLoadedInteractionEffect;

__attribute__((visibility("hidden")))
@interface UISegmentedControlSpringLoadedEffect : NSObject
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UISpringLoadedInteractionEffect> blinkEffect; // @synthesize blinkEffect=_blinkEffect;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

