//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMCommandOperationDelete, MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDeleteWithUIDClassAndIdentifier
{
    MCMContainerIdentity *_containerIdentity;
    MCMCommandOperationDelete *_deleteCommand;
}

+ (Class)incomingMessageClass;
+ (unsigned long long)command;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCMCommandOperationDelete *deleteCommand; // @synthesize deleteCommand=_deleteCommand;
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;
- (_Bool)preflightClientAllowed;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;

@end

