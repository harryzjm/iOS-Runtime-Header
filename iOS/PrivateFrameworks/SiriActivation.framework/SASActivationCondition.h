//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences, NSDictionary, SASActivationRequest, SASSiriPocketStateManager, SASSystemState;

@interface SASActivationCondition : NSObject
{
    _Bool _buttonTriggerStateActive;
    SASActivationRequest *_request;
    SASSystemState *_systemState;
    SASSiriPocketStateManager *_pocketStateManager;
    AFPreferences *_preferences;
    NSDictionary *_analyticsContext;
    long long _requestState;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property(retain, nonatomic) NSDictionary *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(retain, nonatomic) AFPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) SASSiriPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
@property(nonatomic) _Bool buttonTriggerStateActive; // @synthesize buttonTriggerStateActive=_buttonTriggerStateActive;
@property(retain, nonatomic) SASActivationRequest *request; // @synthesize request=_request;

@end
