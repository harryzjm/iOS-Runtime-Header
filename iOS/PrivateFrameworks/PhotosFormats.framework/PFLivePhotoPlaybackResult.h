//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset;

@interface PFLivePhotoPlaybackResult : NSObject
{
    int _photoExifOrientation;
    struct CGImage *_photo;
    AVAsset *_videoAsset;
    CDStruct_1b6d18a9 _photoTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(nonatomic) int photoExifOrientation; // @synthesize photoExifOrientation=_photoExifOrientation;
@property(nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (void)dealloc;

@end
