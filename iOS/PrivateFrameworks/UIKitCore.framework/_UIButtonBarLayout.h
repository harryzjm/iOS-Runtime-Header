//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIBarButtonItem;
@protocol _UIButtonBarLayoutMetricsData;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayout : NSObject
{
    id <_UIButtonBarLayoutMetricsData> _layoutMetrics;
    _Bool _dirty;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
- (id)description;
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)addLayoutGuides:(id)arg1;
- (void)_addLayoutGuides:(id)arg1;
- (void)addLayoutViews:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;
- (void)setUseGroupSizing:(_Bool)arg1;
- (_Bool)useGroupSizing;
- (void)setSuppressSpacing:(_Bool)arg1;
- (_Bool)suppressSpacing;
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;
- (_Bool)compact;
- (void)configure;
- (id)_metricsData;
@property(readonly, nonatomic) NSArray *subLayouts;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property(readonly, nonatomic) _Bool isGroupLayout;
@property(readonly, nonatomic) _Bool isSpaceLayout;
- (void)_configure;
- (_Bool)_shouldBeDirty;
- (_Bool)shouldHorizontallyCenterView:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)init;

@end

