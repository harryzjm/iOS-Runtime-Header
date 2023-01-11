//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SOAsynchronousLDAPOperation
{
    unsigned short _port;
    CDUnknownBlockType _completion;
    NSString *_realm;
    NSString *_host;
    NSString *_bundleIdentifier;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andCompetion:(CDUnknownBlockType)arg5;

@end
