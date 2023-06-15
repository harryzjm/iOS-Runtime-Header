//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayoutDrawingTarget : NSObject
{
    double _preferredContentScaleFactor;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) double preferredContentScaleFactor; // @synthesize preferredContentScaleFactor=_preferredContentScaleFactor;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)_symbolConfigurationForSource:(id)arg1;
- (long long)_effectiveRenderingModeForSource:(id)arg1 symbolConfiguration:(id)arg2;
- (id)_renditionForSource:(id)arg1 size:(struct CGSize)arg2 symbolConfiguration:(id)arg3 withRenditionResult:(id)arg4 lazy:(_Bool)arg5;
- (id)_effectForRenderingSource:(id)arg1;
@property(readonly, nonatomic) _Bool _supportsContents;
@property(readonly, nonatomic) _Bool _hasContentGravity;
@property(readonly, nonatomic) long long contentMode;
@property(readonly, nonatomic) long long semanticContentAttribute;
@property(readonly, nonatomic) _Bool _layoutShouldFlipHorizontalOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

