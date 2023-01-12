//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityDetailItem
{
    UITableViewCell *_cell;
    long long _availability;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)_canChangeAvailability;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)reset;
- (id)_choices;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end

