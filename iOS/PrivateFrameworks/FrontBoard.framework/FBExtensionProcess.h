//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBProcess, FBSExtensionInfo;

@interface FBExtensionProcess
{
    FBSExtensionInfo *_extensionInfo;
    int _hostPID;
    struct os_unfair_lock_s _hostProcessLock;
    FBProcess *_lock_hostProcess;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(readonly, nonatomic) FBSExtensionInfo *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
- (id)succinctDescriptionBuilder;
- (_Bool)isExtensionProcess;
@property(readonly, nonatomic) FBProcess *hostProcess;
- (void)_finishInit;

@end
