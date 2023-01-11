//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UILongPressGestureRecognizer;

@interface OKActionBindingLongPress <UIGestureRecognizerDelegate>
{
    unsigned long long _numberOfTapsRequired;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

+ (id)supportedSettings;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
- (void)handleLongPress:(id)arg1;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)unload;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (id)settingObjectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
