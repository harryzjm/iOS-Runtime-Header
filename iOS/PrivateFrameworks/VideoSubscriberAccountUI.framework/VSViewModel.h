//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSViewModel : NSObject
{
    _Bool _preValidate;
    unsigned long long _viewState;
    unsigned long long _validationState;
    NSError *_error;
    NSString *_title;
    VSIdentityProvider *_identityProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
@property(nonatomic, getter=shouldPreValidate) _Bool preValidate; // @synthesize preValidate=_preValidate;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void)configureWithRequest:(id)arg1;

@end
