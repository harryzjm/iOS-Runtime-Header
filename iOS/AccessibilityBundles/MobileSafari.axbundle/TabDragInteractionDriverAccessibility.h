//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TabDragInteractionDriverAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axSourceTabDocument;
- (_Bool)_axIsLeftBrowserController:(id)arg1;
- (void)_updateDragDestinationAtPointInReferenceSpace:(struct CGPoint)arg1 draggingView:(id)arg2;
- (void)prepareToEndDragInteractionWithPoint:(struct CGPoint)arg1 draggingView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dragInteractionDidUpdateWithPoint:(struct CGPoint)arg1 draggingView:(id)arg2;
- (void)_axSetDidPostNewWindowAnnouncement:(_Bool)arg1;
- (_Bool)_axDidPostNewWindowAnnouncement;

@end
