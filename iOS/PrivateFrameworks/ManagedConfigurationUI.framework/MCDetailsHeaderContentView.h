//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MCActionButton, MCUIGradientLabel, UIImageView, UILabel;

@interface MCDetailsHeaderContentView : UIView
{
    UILabel *_displayNameLabel;
    UILabel *_organizationNameLabel;
    MCUIGradientLabel *_trustedLabel;
    UIImageView *_checkmarkView;
    MCActionButton *_actionButton;
    int _headerMode;
    _Bool _isNewPayload;
    _Bool _isTrusted;
    _Bool _isSigned;
    _Bool _isExpired;
    _Bool _hidesUntrustedLabel;
    _Bool _useTrustedNomenclature;
    id _headerDelegate;
}

+ (id)_redGradient;
+ (id)_grayGradient;
+ (id)_greenGradient;
+ (void)_releaseGradients;
- (void).cxx_destruct;
- (void)setUseTrustedNomenclature:(_Bool)arg1;
- (void)setHidesUntrustedLabel:(_Bool)arg1;
- (void)setActionToRemove;
- (void)setActionToInstall;
- (void)hideActionButton;
- (void)showActionButton;
- (void)layoutSubviews;
- (_Bool)_canFitTrustedStringForWidth:(double)arg1;
- (void)setGradientColor:(int)arg1;
- (id)_gradientForSigned:(_Bool)arg1 andTrusted:(_Bool)arg2;
- (void)setIsSigned:(_Bool)arg1;
- (void)setIsTrusted:(_Bool)arg1;
- (void)setIsExpired:(_Bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)_organizationNameLabel;
- (id)_displayNameLabel;
- (id)_trustedLabel;
- (id)_stringForSigned:(_Bool)arg1 andTrusted:(_Bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;
- (void)_actionButtonPressed:(id)arg1;
- (id)_scriptingInfo;

@end

