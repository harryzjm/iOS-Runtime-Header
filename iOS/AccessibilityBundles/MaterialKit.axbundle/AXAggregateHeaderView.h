//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIAccessibility/UIAccessibilityAggregateElement.h>

@interface AXAggregateHeaderView : UIAccessibilityAggregateElement
{
    id _iconButton;
    id _dateLabel;
    id _titleLabel;
}

@property(readonly, nonatomic) id titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) id dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) id iconButton; // @synthesize iconButton=_iconButton;
- (void).cxx_destruct;
- (_Bool)_axIsHeaderViewActionable;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)accessibilityActivate;
- (_Bool)isAccessibilityElement;
- (id)initWithAccessibilityContainer:(id)arg1 iconButton:(id)arg2 dateLabel:(id)arg3 titleLabel:(id)arg4;

@end
