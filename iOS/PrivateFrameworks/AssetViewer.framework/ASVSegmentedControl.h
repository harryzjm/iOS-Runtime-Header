//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, UIStackView;

@interface ASVSegmentedControl : UIControl
{
    long long _controlStyle;
    long long _selectedSegmentIndex;
    UIStackView *_stackView;
    NSArray *_segments;
    NSMutableArray *_segmentEnabledStates;
}

@property(retain, nonatomic) NSMutableArray *segmentEnabledStates; // @synthesize segmentEnabledStates=_segmentEnabledStates;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
- (void).cxx_destruct;
- (_Bool)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)buttonPress:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (id)initWithItems:(id)arg1 controlStyle:(long long)arg2;

@end

