//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNGeminiResult, CNMutableContact, NSString;
@protocol CNUIGeminiDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem
{
    CNGeminiResult *_geminiResult;
    id <CNUIGeminiDataSourceDelegate> _geminiUpdateDelegate;
    CNMutableContact *_editingContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNMutableContact *editingContact; // @synthesize editingContact=_editingContact;
@property(nonatomic) __weak id <CNUIGeminiDataSourceDelegate> geminiUpdateDelegate; // @synthesize geminiUpdateDelegate=_geminiUpdateDelegate;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
- (void)geminiDataSourceDidUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)canRemove;
- (_Bool)isValidValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (void)updateLabeledValueWithValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)displayValue;
- (id)displayLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

