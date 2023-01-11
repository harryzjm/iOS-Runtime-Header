//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol STStorageOptionTipDelegate;

@interface STStorageOptionTip
{
    _Bool _mayCauseDataLoss;
    NSObject<STStorageOptionTipDelegate> *_delegate;
    NSString *_confirmationText;
    NSString *_confirmationButtonTitle;
}

- (void).cxx_destruct;
@property(retain) NSString *confirmationButtonTitle; // @synthesize confirmationButtonTitle=_confirmationButtonTitle;
@property(retain) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property _Bool mayCauseDataLoss; // @synthesize mayCauseDataLoss=_mayCauseDataLoss;
@property __weak NSObject<STStorageOptionTipDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long eventualGain;
@property(nonatomic) long long immediateGain;
@property(retain, nonatomic) NSString *activatingString;
@property(nonatomic) float activationPercent;
@property(retain) NSString *enableButtonTitle;
- (id)getValue:(id)arg1;
- (void)setValue:(id)arg1 specifier:(id)arg2;
- (void)enableOption;
- (id)init;

@end
