//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIKeyCommandDiscoverabilityHUDColumnView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewCell
{
    _Bool _constraintsForTwoColumns;
    UIKeyCommandDiscoverabilityHUDColumnView *_leftColumnView;
    UIKeyCommandDiscoverabilityHUDColumnView *_rightColumnView;
    NSArray *_constraints;
}

@property(nonatomic) _Bool constraintsForTwoColumns; // @synthesize constraintsForTwoColumns=_constraintsForTwoColumns;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView; // @synthesize rightColumnView=_rightColumnView;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView; // @synthesize leftColumnView=_leftColumnView;
- (void).cxx_destruct;

@end

