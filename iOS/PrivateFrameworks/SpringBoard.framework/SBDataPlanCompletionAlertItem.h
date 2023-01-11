//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBDataPlanCompletionAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isNewAccount) _Bool newAccount; // @synthesize newAccount=_newAccount;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithCarrierName:(id)arg1 newAccount:(_Bool)arg2;

@end
