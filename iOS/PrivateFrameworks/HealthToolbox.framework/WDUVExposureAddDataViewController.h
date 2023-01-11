//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>

@class NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDUVExposureAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateRangeEntryItem;
    WDAddDataManualEntryItem *_valueEntryItem;
}

- (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultEditingItem;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)generateHKObjects;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
