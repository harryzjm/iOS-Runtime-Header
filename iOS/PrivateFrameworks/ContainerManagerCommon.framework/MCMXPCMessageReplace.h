//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageReplace
{
    MCMConcreteContainerIdentity *_containerIdentityOld;
    MCMConcreteContainerIdentity *_containerIdentityNew;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew; // @synthesize containerIdentityNew=_containerIdentityNew;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld; // @synthesize containerIdentityOld=_containerIdentityOld;
- (unsigned int)disposition;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;

@end

