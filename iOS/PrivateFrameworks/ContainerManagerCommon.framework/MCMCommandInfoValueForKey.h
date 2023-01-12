//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity, NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandInfoValueForKey
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;
    NSString *_key;
}

+ (Class)incomingMessageClass;
+ (unsigned long long)command;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (id)infoValueForKeyWithError:(unsigned long long *)arg1;
- (void)execute;
- (_Bool)preflightClientAllowed;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)initWithKey:(id)arg1 concreteContainerIdentity:(id)arg2 context:(id)arg3 resultPromise:(id)arg4;

@end

