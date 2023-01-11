//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSpacerDisplayItem
{
    UILayoutGuide *_layoutGuide;
    NSArray *_constraints;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
- (void)_applyConstraintsIfNeeded;
- (void)setContainerView:(id)arg1;
- (void)applyUpdate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;

@end
