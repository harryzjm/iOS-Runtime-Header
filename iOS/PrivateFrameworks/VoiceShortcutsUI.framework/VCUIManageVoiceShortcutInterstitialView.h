//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UILabel;

@interface VCUIManageVoiceShortcutInterstitialView
{
    UILabel *_statusLabel;
    NSLayoutConstraint *_minHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void).cxx_destruct;
- (void)updateScrollViewHeight:(double)arg1;
- (_Bool)showRecordingButtonOverlay;
- (id)initWithController:(id)arg1 options:(id)arg2;
- (id)initWithController:(id)arg1;

@end
