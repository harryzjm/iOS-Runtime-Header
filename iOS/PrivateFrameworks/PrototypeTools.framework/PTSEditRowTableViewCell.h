//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface PTSEditRowTableViewCell <UITextFieldDelegate>
{
}

+ (long long)cellStyleForRow:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)valueForText:(id)arg1;
- (id)textForValue:(id)arg1;
- (void)updateDisplayedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
