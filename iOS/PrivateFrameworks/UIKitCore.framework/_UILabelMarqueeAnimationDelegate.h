//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UILabelMarqueeAnimationDelegate : NSObject <CAAnimationDelegate>
{
    _Bool _started;
    _Bool _updated;
    _Bool _suppressEnded;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suppressEnded; // @synthesize suppressEnded=_suppressEnded;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)initWithLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
