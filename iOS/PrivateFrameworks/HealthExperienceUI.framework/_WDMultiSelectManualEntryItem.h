//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _WDMultiSelectManualEntryItem
{
    NSArray *_tableViewCells;
    NSArray *_titles;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (id)generateValue;
- (void)cellForItemTapped:(id)arg1;
- (id)tableViewCells;

@end
