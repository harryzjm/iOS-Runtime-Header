//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class NSString;

@interface UITextView (PKUIUtilities)
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect)arg1;
+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect)arg1;
+ (void)pkui_styleTextView:(id)arg1;
- (struct CGRect)pkui_textFrame;
- (struct CGRect)pkui_frameForTextFrame:(struct CGRect)arg1;
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

