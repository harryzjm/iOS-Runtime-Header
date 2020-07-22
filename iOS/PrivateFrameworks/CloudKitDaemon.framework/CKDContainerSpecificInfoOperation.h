//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDContainerInfo, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoOperation
{
    _Bool _needUserID;
    CKDContainerInfo *_containerInfo;
    NSObject<OS_dispatch_group> *_infoFetchedGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup; // @synthesize infoFetchedGroup=_infoFetchedGroup;
@property(copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(nonatomic) _Bool needUserID; // @synthesize needUserID=_needUserID;
- (void).cxx_destruct;
- (_Bool)canBeUsedForOperation:(id)arg1;
- (void)main;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldCheckAppVersion;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

