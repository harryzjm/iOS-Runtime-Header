//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <HearingUI/HACCContentModule-Protocol.h>

@class NSString, UILabel, UIVisualEffectView;
@protocol HACCContentModuleDelegate;

@interface HACCProgramsButton : UIControl <HACCContentModule>
{
    UIVisualEffectView *_titleContainer;
    UIVisualEffectView *_subtitleContainer;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
}

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)enabled;
- (id)contentValue;
- (void)updateValue;
- (void)buttonTapped:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
