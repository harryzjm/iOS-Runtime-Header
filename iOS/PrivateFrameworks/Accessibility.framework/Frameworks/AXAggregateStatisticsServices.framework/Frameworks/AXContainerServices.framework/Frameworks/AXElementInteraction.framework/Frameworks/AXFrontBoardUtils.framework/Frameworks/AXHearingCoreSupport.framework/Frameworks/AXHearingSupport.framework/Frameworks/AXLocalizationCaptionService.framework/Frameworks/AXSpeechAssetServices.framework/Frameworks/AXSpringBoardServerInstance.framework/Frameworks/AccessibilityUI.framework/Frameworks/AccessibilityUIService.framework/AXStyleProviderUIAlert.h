//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AXUIAlertStyleProvider;

@interface AXStyleProviderUIAlert
{
    double _dismissalGestureYOffset;
    struct CGPoint _backgroundViewDismissalOrigin;
    unsigned long long _alertType;
    id <AXUIAlertStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <AXUIAlertStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
- (void).cxx_destruct;
- (void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7;
- (void)addToContainerView:(id)arg1;
- (void)_cancelDismissalWithPanGesture:(id)arg1;
- (void)_endDismissalWithPanGesture:(id)arg1;
- (void)_updateViewForDismissalPercentage:(double)arg1;
- (void)_updateDismissalWithPanGesture:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5;

@end

