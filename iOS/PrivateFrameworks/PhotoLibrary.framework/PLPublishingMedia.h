//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface PLPublishingMedia : NSObject
{
    _Bool _isVideo;
    _Bool _isHDVideo;
    id _asset;
    NSString *_pathForVideoFile;
    NSURL *_assetURL;
    double _duration;
}

+ (_Bool)isValidPublishingMedia:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isHDVideo; // @synthesize isHDVideo=_isHDVideo;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSString *pathForVideoFile; // @synthesize pathForVideoFile=_pathForVideoFile;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAVURLAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

