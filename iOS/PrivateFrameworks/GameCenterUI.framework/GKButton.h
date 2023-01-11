//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <GameCenterUI/GKTextStyleReplay-Protocol.h>

@class GKButtonStyle, GKTextStyle, NSString;

@interface GKButton : UIButton <GKTextStyleReplay>
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
    GKButtonStyle *_appliedButtonStyle;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
- (struct CGSize)intrinsicContentSize;
- (void)applyButtonStyle:(id)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)applyTextStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) GKTextStyle *baseStyle;
- (void)replayAndApplyStyleWithSystemContentChange:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
