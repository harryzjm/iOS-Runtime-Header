//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController
{
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;
}

- (void).cxx_destruct;
- (id)_inchUnitString;
- (id)_feetUnitString;
- (_Bool)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)createValueFieldManualEntryItem;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;

@end
