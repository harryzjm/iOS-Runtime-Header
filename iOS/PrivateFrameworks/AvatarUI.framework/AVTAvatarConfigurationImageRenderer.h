//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTMemoji, AVTSnapshotBuilder;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarConfigurationImageRenderer : NSObject
{
    AVTMemoji *_avatar;
    AVTSnapshotBuilder *_snapshotBuilder;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_snapshotBuilderQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue; // @synthesize snapshotBuilderQueue=_snapshotBuilderQueue;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder; // @synthesize snapshotBuilder=_snapshotBuilder;
- (id)nts_imageForAvatarConfiguration:(id)arg1 scope:(id)arg2;
- (id)imageForAvatarConfiguration:(id)arg1 scope:(id)arg2;
@property(readonly, nonatomic) AVTMemoji *avatar; // @synthesize avatar=_avatar;
- (id)initWithSnapshotBuilder:(id)arg1 avatar:(id)arg2 lockProvider:(CDUnknownBlockType)arg3 logger:(id)arg4;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 logger:(id)arg2;
- (id)initWithEnvironment:(id)arg1;

@end
