//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDMutableUserMessagePolicy
{
}

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3 requiresCameraStreamingAccess:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property _Bool requiresCameraStreamingAccess; // @dynamic requiresCameraStreamingAccess;
@property _Bool requiresRemoteAccess; // @dynamic requiresRemoteAccess;
@property unsigned long long userPrivilege; // @dynamic userPrivilege;

@end

