//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (SBClassicLayout)
+ (id)sb_firstDescendantOfViews:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)_sbClassicLayout_applyTransformsForClassicPresentationInReferenceSpace:(_Bool)arg1 forInterfaceOrientation:(long long)arg2 withInheritedScaleFromContainer:(double)arg3 applyInheritedScaleToTranslationAndCorners:(_Bool)arg4;
- (void)sbClassicLayout_applyTransformsForClassicPresentationInLayoutSpaceForInterfaceOrientation:(long long)arg1 withInheritedScaleFromContainer:(double)arg2 applyInheritedScaleToTranslationAndCorners:(_Bool)arg3;
- (void)sbClassicLayout_applyTransformsForClassicPresentationInReferenceSpaceForInterfaceOrientation:(long long)arg1;
- (id)sb_firstDescendantOfClassNamed:(id)arg1;
- (id)sb_firstDescendantOfClass:(Class)arg1;
- (id)sb_firstDescendantPassingTest:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGPoint anchorPoint;
- (void)sb_removeAnimationsIncludingSubviews:(_Bool)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)sb_removeAnimationsForKeys:(id)arg1 update:(CDUnknownBlockType)arg2;
- (void)sb_removeAllSubviews;
- (id)sb_snapshotImage;
- (void)sb_printLayerHierarchy;
- (void)_printLayer:(id)arg1 level:(int)arg2;
- (_Bool)sb_hasActiveKeyboardOnScreen;
- (void)_generateSnapshotOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sb_generateSnapshotContentsAsynchronouslyOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sb_generateSnapshotContentsSynchronously;
@end
