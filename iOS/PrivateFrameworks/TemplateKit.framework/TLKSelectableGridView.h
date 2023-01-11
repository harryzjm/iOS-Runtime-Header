//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerGridViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerGridView;
@protocol TLKSelectableGridViewDelegate;

@interface TLKSelectableGridView <NUIContainerGridViewDelegate>
{
    long long _selectedIndex;
    NSArray *_tuples;
    id <TLKSelectableGridViewDelegate> _delegate;
    NUIContainerGridView *_gridView;
    NSMutableArray *_buttons;
}

+ (unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(struct CGSize)arg2 containerView:(id)arg3;
+ (unsigned long long)maxColumns;
@property(retain) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain) NUIContainerGridView *gridView; // @synthesize gridView=_gridView;
@property __weak id <TLKSelectableGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
- (void).cxx_destruct;
- (id)arrangedEntrySubviews;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)selectableGridButtonPressed:(id)arg1;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)_createButton;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

