//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol WDAddDataManualEntryItemDelegate;

@interface WDAddDataManualEntryItem : NSObject
{
    NSNumber *_identifier;
    NSString *_title;
    NSString *_secondaryLabel;
    id <WDAddDataManualEntryItemDelegate> _delegate;
}

+ (id)heightPickerItemWithFeetUnitString:(id)arg1 inchUnitString:(id)arg2;
+ (id)multiSelectItemWithEntries:(id)arg1 selectedIndex:(long long)arg2;
+ (id)numericItemWithManualEntryType:(unsigned long long)arg1 numberFormatter:(id)arg2;
+ (id)durationItemWithMaximumDate:(id)arg1;
+ (id)twoPartDateRangeItemWithMaximumEndDate:(id)arg1;
+ (id)twoPartDateTimeItemWithMaximumDate:(id)arg1;
+ (id)dateTimeItemWithMaximumDate:(id)arg1 highlightWhenEditing:(_Bool)arg2;
+ (id)dateTimeItemWithMaximumDate:(id)arg1;
+ (id)timeItemWithMaximumDate:(id)arg1;
+ (id)dateItemWithMaximumDate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WDAddDataManualEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void)cellForItemTapped:(id)arg1;
- (id)tableViewCells;
- (void)beginEditing;
- (void)resetItem;
- (void)setValue:(id)arg1;
- (id)generateValue;
- (void)_disambiguateDateComponents:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_didUpdateValue;
- (id)_createWDManualDataEntryTableViewCellWithDisplayName:(id)arg1 unitName:(id)arg2 entryType:(unsigned long long)arg3 highlightWhenEditing:(_Bool)arg4;
- (id)_createUITableViewCell;

@end
