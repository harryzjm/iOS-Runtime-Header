//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker
{
    NSArray *_pickerItems;
}

@property(readonly, copy, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;
- (void).cxx_destruct;
- (id)submissionString;
- (id)displayString;
@property(copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue; // @dynamic currentValue;
- (void)updateWithConfiguration:(id)arg1;
- (unsigned long long)fieldType;

@end
