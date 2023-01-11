//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <HomeUI/HFItemSectionAccessoryButtonHeader-Protocol.h>

@class HFItemSection, NSString, UIButton, UIFont;

@interface HUAccessoryButtonTableViewHeaderView : UITableViewHeaderFooterView <HFItemSectionAccessoryButtonHeader>
{
    HFItemSection *itemSection;
    NSString *_overrideAccessoryButtonTitle;
    UIFont *_accessoryButtonFont;
    UIButton *_accessoryButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UIFont *accessoryButtonFont; // @synthesize accessoryButtonFont=_accessoryButtonFont;
@property(retain, nonatomic) NSString *overrideAccessoryButtonTitle; // @synthesize overrideAccessoryButtonTitle=_overrideAccessoryButtonTitle;
@property(retain, nonatomic) HFItemSection *itemSection; // @synthesize itemSection;
- (void)accessoryButtonPressed;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (id)defaultAccessoryButtonFont;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
