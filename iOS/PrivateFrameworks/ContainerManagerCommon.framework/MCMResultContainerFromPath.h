//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMResultContainerFromPath
{
    NSString *_relativePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (_Bool)encodeResultOntoReply:(id)arg1;
- (id)initWithUUID:(id)arg1 containerPathIdentifier:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(id)arg5 personaUniqueString:(id)arg6 sandboxToken:(const char *)arg7 existed:(_Bool)arg8 url:(id)arg9 info:(id)arg10 resolvedLinks:(id)arg11 transient:(_Bool)arg12 relativePath:(id)arg13;

@end

