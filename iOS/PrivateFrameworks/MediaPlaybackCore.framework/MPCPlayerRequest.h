//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRequest.h>

@class MPCPlayerPath, MPPropertySet;

@interface MPCPlayerRequest : MPRequest
{
    MPCPlayerPath *_playerPath;
    MPPropertySet *_playingItemProperties;
    MPPropertySet *_queueSectionProperties;
    MPPropertySet *_queueItemProperties;
    CDStruct_339ad95e _tracklistRange;
}

+ (Class)responseClass;
@property(copy, nonatomic) MPPropertySet *queueItemProperties; // @synthesize queueItemProperties=_queueItemProperties;
@property(copy, nonatomic) MPPropertySet *queueSectionProperties; // @synthesize queueSectionProperties=_queueSectionProperties;
@property(copy, nonatomic) MPPropertySet *playingItemProperties; // @synthesize playingItemProperties=_playingItemProperties;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) CDStruct_339ad95e tracklistRange; // @synthesize tracklistRange=_tracklistRange;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)middlewareClasses;
- (id)performWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (id)init;

@end

