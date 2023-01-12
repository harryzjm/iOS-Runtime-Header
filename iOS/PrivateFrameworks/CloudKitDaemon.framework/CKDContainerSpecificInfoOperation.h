//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class CKDContainerServerInfo, NSObject;
@protocol OS_dispatch_group;

@interface CKDContainerSpecificInfoOperation : CKDOperation
{
    _Bool _requireUserIDs;
    CKDContainerServerInfo *_containerServerInfo;
    NSObject<OS_dispatch_group> *_infoFetchedGroup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup; // @synthesize infoFetchedGroup=_infoFetchedGroup;
@property(copy, nonatomic) CKDContainerServerInfo *containerServerInfo; // @synthesize containerServerInfo=_containerServerInfo;
@property(nonatomic) _Bool requireUserIDs; // @synthesize requireUserIDs=_requireUserIDs;
- (void)main;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldCheckAppVersion;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

@end

