//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSProgressWithRemoteParent
{
    NSXPCConnection *_parentConnection;
    unsigned long long _sequence;
}

@property unsigned long long sequence; // @synthesize sequence=_sequence;
@property(retain) NSXPCConnection *parentConnection; // @synthesize parentConnection=_parentConnection;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(_Bool)arg3;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple)arg1;
- (void)dealloc;

@end
