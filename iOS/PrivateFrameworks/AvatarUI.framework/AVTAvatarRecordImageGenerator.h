//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTCoreModel, AVTImageStore, AVTUIEnvironment, NSArray;
@protocol AVTUILogger;

@interface AVTAvatarRecordImageGenerator : NSObject
{
    AVTImageStore *_imageStore;
    AVTAvatarConfigurationImageRenderer *_renderer;
    AVTCoreModel *_coreModel;
    NSArray *_scopes;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
}

+ (id)supportedScopesForScale:(double)arg1;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(readonly, nonatomic) AVTCoreModel *coreModel; // @synthesize coreModel=_coreModel;
@property(readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) AVTImageStore *imageStore; // @synthesize imageStore=_imageStore;
- (void).cxx_destruct;
- (_Bool)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id *)arg3;
- (_Bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (_Bool)generateThumbnailsForAvatarRecords:(id)arg1 error:(id *)arg2;
- (id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3;

@end

