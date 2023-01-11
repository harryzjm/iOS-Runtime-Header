//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKTimeOffsetManager : NSObject
{
    double _timeOffset;
}

+ (id)sharedManager;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)_updateTimeOffset:(_Bool)arg1;
- (void)_loadTimeOffset;
- (void)forceUpdateTimeOffset;
- (void)_handleFaceLibraryReloaded;
- (void)_handleFaceDefaultsChanged;
- (id)displayTimeForRealTime:(id)arg1;
- (id)faceDisplayTime;
- (void)dealloc;
- (id)init;

@end
