//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VCUIManageVoiceShortcutViewController;

@interface VCUIManageVoiceShortcutView : UIView
{
    _Bool _showRecordingButtonOverlay;
    _Bool _showRecordingButtonOverlayDescription;
    VCUIManageVoiceShortcutViewController *_controller;
}

@property(readonly, nonatomic) _Bool showRecordingButtonOverlayDescription; // @synthesize showRecordingButtonOverlayDescription=_showRecordingButtonOverlayDescription;
@property(readonly, nonatomic) _Bool showRecordingButtonOverlay; // @synthesize showRecordingButtonOverlay=_showRecordingButtonOverlay;
@property(nonatomic) __weak VCUIManageVoiceShortcutViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)createDonationDetailViewForController:(id)arg1;
- (void)updateScrollViewHeight:(double)arg1;
- (void)updateButtonTrayDelta:(double)arg1;
- (id)initWithController:(id)arg1 options:(id)arg2;

@end

