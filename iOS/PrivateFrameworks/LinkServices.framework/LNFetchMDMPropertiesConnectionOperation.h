//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchMDMPropertiesConnectionOperation
{
    LNAction *_action;
    NSString *_accountIdentifier;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) LNAction *action; // @synthesize action=_action;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

