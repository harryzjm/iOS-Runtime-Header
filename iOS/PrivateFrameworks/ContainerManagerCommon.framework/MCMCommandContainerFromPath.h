//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface MCMCommandContainerFromPath
{
    NSURL *_url;
}

+ (Class)incomingMessageClass;
+ (unsigned long long)command;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (struct container_object_s *)_containerFromRelayToDaemonWithURL:(id)arg1 relativePath:(char **)arg2 error:(struct container_error_extended_s **)arg3;
- (void)execute;
- (_Bool)preflightClientAllowed;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;

@end

