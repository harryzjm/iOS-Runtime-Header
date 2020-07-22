//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class ACAccount, NSSet, NSString, UILabel;

@interface ACUIAccountSummaryCell : PSTableCell
{
    long long _style;
    UILabel *_dataclassesLabel;
    NSSet *_enabledDataclasses;
    NSSet *_supportedDataclasses;
    ACAccount *_account;
    _Bool _useCustomDetailsText;
    NSString *_desiredValue;
}

+ (id)_valueForCellSpecifier:(id)arg1;
+ (void)_configureSpecifier:(id)arg1 forAccount:(id)arg2 withStyle:(long long)arg3 valueText:(id)arg4;
+ (id)_nameForAccountSpecifier:(id)arg1 withStyle:(long long)arg2;
+ (id)specifierWithStyle:(long long)arg1 account:(id)arg2 valueText:(id)arg3 detailControllerClass:(Class)arg4 presentationStyle:(long long)arg5;
+ (id)specifierWithStyle:(long long)arg1 account:(id)arg2 detailControllerClass:(Class)arg3 presentationStyle:(long long)arg4;
+ (id)specifierWithStyle:(long long)arg1 account:(id)arg2 target:(id)arg3 controllerLoadAction:(SEL)arg4;
- (void).cxx_destruct;
- (id)_numberFormatter;
- (id)_font;
- (id)_enabledDataclassesTextForWidth:(double)arg1;
- (id)_dataclassesLabel;
- (void)layoutSubviews;
- (void)hideDataclass:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

