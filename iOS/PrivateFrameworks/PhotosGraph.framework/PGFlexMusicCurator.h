//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGFlexMusicCurator : NSObject
{
}

+ (id)curateFlexMusicForMood:(unsigned long long)arg1 keywords:(id)arg2 recentlyUsedSongs:(id)arg3 entityUUID:(id)arg4 progressReporter:(id)arg5 error:(id *)arg6;
+ (id)generateDebugInformationForAssetCollection:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;
+ (id)generateDebugInformationForSongWithUID:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)init;

@end
