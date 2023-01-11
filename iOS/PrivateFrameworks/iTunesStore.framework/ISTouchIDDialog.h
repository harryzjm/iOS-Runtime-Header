//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSString, SSPaymentSheet;

@interface ISTouchIDDialog
{
    NSLock *_lock;
    _Bool _isDualAction;
    _Bool _isFree;
    SSPaymentSheet *_paymentSheet;
    NSString *_body;
    NSString *_username;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(readonly) _Bool isDualAction; // @synthesize isDualAction=_isDualAction;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (id)paymentSheet;
- (void)_parseDialogDictionary:(id)arg1;
- (id)buttonForButtonType:(long long)arg1;
@property(copy) NSString *fallbackMessage;
@property(copy) NSString *fallbackExplanation;
- (void)_init;
- (id)initWithDialogDictionary:(id)arg1;

@end
