//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PXStoryRelatedMusicCurationParameters : NSObject
{
    NSSet *_recentlyUsedFlexSongIDs;
    NSSet *_recentlyUsedAppleMusicSongIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *recentlyUsedAppleMusicSongIDs; // @synthesize recentlyUsedAppleMusicSongIDs=_recentlyUsedAppleMusicSongIDs;
@property(copy, nonatomic) NSSet *recentlyUsedFlexSongIDs; // @synthesize recentlyUsedFlexSongIDs=_recentlyUsedFlexSongIDs;
- (id)init;

@end
