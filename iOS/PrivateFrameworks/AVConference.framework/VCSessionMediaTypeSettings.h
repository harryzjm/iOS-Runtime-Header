//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCSessionMediaTypeSettings
{
    unsigned int _mediaType;
    unsigned int _mediaState;
    NSMutableSet *_streamGroupIDs;
    unsigned int _remoteMediaState;
}

+ (_Bool)supportsSecureCoding;
+ (id)serializationClasses;
+ (id)settingsWithMediaType:(unsigned int)arg1;
@property(nonatomic) unsigned int remoteMediaState; // @synthesize remoteMediaState=_remoteMediaState;
@property(nonatomic) unsigned int mediaState; // @synthesize mediaState=_mediaState;
@property(readonly, nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSSet *streamGroupIDs;
- (void)addStreamGroupID:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithMediaType:(unsigned int)arg1;

@end

