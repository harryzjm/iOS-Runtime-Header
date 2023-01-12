//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>

@class NSString, _UIFocusHaloView;
@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface _UIFocusEffectManager : NSObject <_UIGeometryChangeObserver>
{
    _UIFocusHaloView *_haloView;
    id <UIFocusItem> _focusedItem;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIFocusItem> focusedItem; // @synthesize focusedItem=_focusedItem;
@property(readonly, nonatomic) _UIFocusHaloView *haloView; // @synthesize haloView=_haloView;
- (void)_geometryChanged:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;
- (void)_observeFocusedItemGeometryForItem:(id)arg1;
- (void)moveFocusToItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
