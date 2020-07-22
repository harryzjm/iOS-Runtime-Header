//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimerUI/NSObject-Protocol.h>

@class UIColor, UIFont, UIView;

@protocol TKTonePickerStyleProvider <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomTonePickerHeaderView;
@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property(readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool tonePickerUsesOpaqueBackground;
- (UIView *)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (UIView *)newBackgroundViewForSelectedTonePickerCell:(_Bool)arg1;

@optional
@property(readonly, nonatomic) _Bool tonePickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@end

