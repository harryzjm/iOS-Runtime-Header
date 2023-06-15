//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIInputViewSetPlacementOnScreen, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementFloating
{
    double _floatingWidth;
    UIView *_responderToFollow;
    struct CGRect _responderRect;
    struct CGSize _lastSize;
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;
    NSArray *_subPlacements;
}

+ (id)infoWithPoint:(struct CGPoint)arg1 forOwner:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2 floatingWidth:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) double floatingWidth; // @synthesize floatingWidth=_floatingWidth;
@property(nonatomic) __weak UIResponder *responderToFollow; // @synthesize responderToFollow=_responderToFollow;
- (_Bool)accessoryViewWillAppear;
- (_Bool)isFloatingAssistantView;
- (id)assistantView;
- (_Bool)isFloating;
- (_Bool)showsEditItems;
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;
- (id)expiringPlacement;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)subPlacements;
- (void)setSubPlacements:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (void)updateChromeBuffer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)applicatorInfoForOwner:(id)arg1;
- (id)currentResponderView;
- (void)setDelegate:(id)arg1;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (void)checkSizeForOwner:(id)arg1;
- (void)_geometryChanged:(const CDStruct_c9afd433 *)arg1 forAncestor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

