//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPointerInteraction, UIView;

__attribute__((visibility("hidden")))
@interface _UISelectionBandVisualProvider_iOS : NSObject
{
    UIView *_view;
    UIPointerInteraction *_ptrInteraction;
    struct CGPoint _initialPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(retain, nonatomic) UIPointerInteraction *ptrInteraction; // @synthesize ptrInteraction=_ptrInteraction;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (_Bool)_isActive;
- (void)endAtPoint:(struct CGPoint)arg1;
- (void)updateWithPoint:(struct CGPoint)arg1;
- (void)beginAtPoint:(struct CGPoint)arg1;
@property(nonatomic) _Bool enabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

