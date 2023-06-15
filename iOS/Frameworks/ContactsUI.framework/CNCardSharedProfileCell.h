//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNCardSharedProfileCellView, CNContact, CNSharedProfileStateOracle;

__attribute__((visibility("hidden")))
@interface CNCardSharedProfileCell
{
    CNSharedProfileStateOracle *_sharedProfileStateOracle;
    CNCardSharedProfileCellView *_snapView;
    CNContact *_contact;
}

+ (_Bool)shouldIndentWhileEditing;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNCardSharedProfileCellView *snapView; // @synthesize snapView=_snapView;
@property(retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle; // @synthesize sharedProfileStateOracle=_sharedProfileStateOracle;
- (void)viewDidSelectDisplayPreference:(long long)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)updateConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraints;
- (void)updateViewsWithCardGroupItem:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (_Bool)allowsCellSelection;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

