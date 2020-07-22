//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITableViewCell, UITextView;
@protocol EKEventDetailNotesCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventNotesDetailItem
{
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    UITextView *_notesView;
    _Bool _cellNeedsUpdate;
    id <EKEventDetailNotesCellDelegate> _noteDelegate;
}

@property(nonatomic) __weak id <EKEventDetailNotesCellDelegate> noteDelegate; // @synthesize noteDelegate=_noteDelegate;
- (void).cxx_destruct;
- (unsigned long long)maximumNumberOfSubItems;
- (_Bool)requiresLayoutForSubitemCount;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)_updateCellIfNeeded;
- (unsigned long long)numberOfSubitems;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

