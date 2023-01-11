//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerGridView;
@protocol TLKSelectableGridViewDelegate;

@interface TLKSelectableGridView <NUIContainerViewDelegate>
{
    long long _selectedIndex;
    NSArray *_tuples;
    id <TLKSelectableGridViewDelegate> _delegate;
    NSMutableArray *_buttons;
}

+ (unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(struct CGSize)arg2 containerView:(id)arg3;
+ (unsigned long long)maxColumns;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property __weak id <TLKSelectableGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
- (id)arrangedEntrySubviews;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)selectableGridButtonPressed:(id)arg1;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)_createButton;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
