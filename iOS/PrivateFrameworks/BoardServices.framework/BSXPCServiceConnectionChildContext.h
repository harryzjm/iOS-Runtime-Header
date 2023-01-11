//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext
{
    BSXPCServiceConnectionRootContext *_parent;
    unsigned long long _identifier;
    _Bool _remote;
}

@property(readonly, nonatomic, getter=isRemote) _Bool remote; // @synthesize remote=_remote;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isChild;
- (_Bool)isClient;
- (_Bool)isServer;
- (id)endpointDescription;
- (id)_initWithParent:(id)arg1 identifier:(unsigned long long)arg2 remote:(_Bool)arg3 proem:(id)arg4;

@end
