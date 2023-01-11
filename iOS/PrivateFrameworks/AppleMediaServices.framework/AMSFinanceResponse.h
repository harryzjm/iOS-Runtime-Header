//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSFinanceAuthenticateResponse, AMSFinanceDialogResponse, AMSFinancePaymentSheetResponse, AMSURLTaskInfo, NSArray, NSDictionary, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface AMSFinanceResponse : NSObject
{
    AMSFinanceAuthenticateResponse *_cachedAuthenticateResponse;
    AMSFinanceDialogResponse *_cachedDialogResponse;
    AMSFinancePaymentSheetResponse *_cachedPaymentSheetResponse;
    long long _dialogKind;
    NSDictionary *_responseDictionary;
    AMSURLTaskInfo *_taskInfo;
}

+ (id)valueForProtocolKey:(id)arg1 inResponse:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, nonatomic) long long dialogKind; // @synthesize dialogKind=_dialogKind;
@property(retain, nonatomic) AMSFinancePaymentSheetResponse *cachedPaymentSheetResponse; // @synthesize cachedPaymentSheetResponse=_cachedPaymentSheetResponse;
@property(retain, nonatomic) AMSFinanceDialogResponse *cachedDialogResponse; // @synthesize cachedDialogResponse=_cachedDialogResponse;
@property(retain, nonatomic) AMSFinanceAuthenticateResponse *cachedAuthenticateResponse; // @synthesize cachedAuthenticateResponse=_cachedAuthenticateResponse;
- (id)_valueForProtocolKey:(id)arg1;
- (id)_performerForPaymentSheet;
- (id)_performerForDialog;
- (id)_performerForCreditDisplay;
- (id)_performerForAuthenticate;
- (id)_performerForActionDictionary;
@property(readonly, nonatomic) NSURL *versionMismatchURL;
@property(readonly, nonatomic) _Bool supportedProtocolVersion;
@property(readonly, nonatomic) NSError *serverError;
@property(readonly, nonatomic) NSArray *pingURLs;
@property(readonly, nonatomic) NSArray *actions;
@property(readonly, nonatomic) ACAccount *account;
- (id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2;

@end
