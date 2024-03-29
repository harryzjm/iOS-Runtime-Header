//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetPlacement;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementWrapper
{
    UIInputViewSetPlacement *_actualPlacement;
}

+ (_Bool)supportsSecureCoding;
+ (id)placementWithPlacement:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)computeComparisonMask;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)subPlacements;
- (id)applicatorInfoForOwner:(id)arg1;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (struct CGAffineTransform)transform;
- (double)alpha;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)accessoryViewWillAppear;
- (_Bool)inputViewWillAppear;
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (_Bool)isInteractive;
- (_Bool)showsEditItems;
- (_Bool)showsInputOrAssistantViews;
- (_Bool)showsKeyboard;
- (_Bool)showsInputViews;
- (_Bool)isVisible;
- (_Bool)isUndocked;
- (_Bool)isEqual:(id)arg1;
- (void)setDirty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

