//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXCallObserver;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCallCache : NSObject
{
    CXCallObserver *_callObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
- (id)getLogger;
- (id)localizedPhoneNumber:(id)arg1 context:(id)arg2;
- (_Bool)isActiveCallSubtype:(const char *)arg1;
- (_Bool)isActiveCallVoNR;
- (_Bool)isActiveCallVoLTE;
- (_Bool)isAnyCallActiveForProviderIdentifier:(id)arg1;
- (_Bool)isAnyTelephonyCallActive;
- (_Bool)isAnyVOIPCallActive;
- (_Bool)isAnyCallActive;
- (id)init;
- (id)initPrivate:(id)arg1;

@end

