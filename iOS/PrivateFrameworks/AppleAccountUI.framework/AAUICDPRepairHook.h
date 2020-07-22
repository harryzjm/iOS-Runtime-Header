//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString;
@protocol AAUIServerHookDelegate;

@interface AAUICDPRepairHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_performCDPRepairWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldMatchModel:(id)arg1;
- (_Bool)shouldMatchElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end

