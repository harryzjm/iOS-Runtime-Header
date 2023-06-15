//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class DOCAppearance, NSString;

@interface UIView (DOCAppearanceInheritance)
+ (void)load;
- (id)_owningViewController;
- (void)effectiveAppearanceDidChange:(id)arg1;
@property(readonly) DOCAppearance *effectiveAppearance;
- (id)_appearance;
- (id)_inheritedAppearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (void)doc_didMoveToSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

