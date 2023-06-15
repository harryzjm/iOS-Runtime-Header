//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class CalendarNotesCell, NSString;

__attribute__((visibility("hidden")))
@interface EKEventNotesInlineEditItem : EKEventEditItem
{
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
    struct CGRect _keyboardRect;
    _Bool _textViewDirty;
}

- (void).cxx_destruct;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)searchStringForEventAutocomplete;
- (_Bool)isSaveable;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)tableViewDidScroll;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isInline;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

