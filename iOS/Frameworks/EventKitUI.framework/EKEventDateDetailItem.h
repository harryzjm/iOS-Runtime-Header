//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, PreferencesDoubleTwoPartValueCell;

__attribute__((visibility("hidden")))
@interface EKEventDateDetailItem
{
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    _Bool _indent;
}

- (void).cxx_destruct;
- (void)shortenCell:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)reset;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

