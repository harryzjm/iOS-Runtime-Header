//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVLayoutItemAttributes, NSString;

__attribute__((visibility("hidden")))
@interface AVTouchIgnoringView : UIView
{
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    _Bool _collapsedOrExcluded;
    _Bool _collapsed;
    _Bool _removed;
    _Bool _included;
    AVLayoutItemAttributes *_layoutAttributes;
    struct CGSize _extrinsicContentSize;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
- (void)_updateLayoutItem;
- (struct CGSize)minimumSize;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded; // @synthesize collapsedOrExcluded=_collapsedOrExcluded;
- (void)layoutAttributesDidChange;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

