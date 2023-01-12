//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSDialogRequest, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebDialogAction
{
    _Bool _pauseTimeouts;
    AMSDialogRequest *_request;
    NSArray *_buttonModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels=_buttonModels;
@property(nonatomic) _Bool pauseTimeouts; // @synthesize pauseTimeouts=_pauseTimeouts;
@property(retain, nonatomic) AMSDialogRequest *request; // @synthesize request=_request;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

