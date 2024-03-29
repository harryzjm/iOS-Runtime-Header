//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIStackView, UIVisualEffectView;

@interface AKCandidatePickerView_iOS : UIView
{
    UIStackView *_buttonContainer;
    UIVisualEffectView *_visualEffectView;
    long long _blurStyle;
    NSArray *_itemTags;
    NSArray *_annotations;
    NSArray *_buttons;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) NSArray *itemTags; // @synthesize itemTags=_itemTags;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIStackView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
- (void)_selectBackground:(id)arg1 animated:(_Bool)arg2;
- (void)_selectBackground:(id)arg1;
- (void)_createButtonsWithBlurStyle:(long long)arg1;
- (long long)tagForCandidateItemAtIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setBarHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(long long)arg6;

@end

