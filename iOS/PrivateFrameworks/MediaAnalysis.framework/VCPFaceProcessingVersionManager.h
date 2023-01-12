//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHPhotoLibrary;

@interface VCPFaceProcessingVersionManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)resetLevelDescription:(long long)arg1;
+ (id)sharedManagerForPhotoLibrary:(id)arg1;
- (void).cxx_destruct;
- (int)migrateFaceProcessingToVersion:(int)arg1;
- (int)resetAnalysisDataWithResetLevel:(long long)arg1 error:(id *)arg2;
- (int)_updateCurrentProcessingVersion:(int)arg1;
- (int)currentProcessingVersion;
- (int)defaultProcessingVersion;
- (_Bool)_updateVersionStateFileWithError:(id *)arg1;
- (id)_versionStateURL;
- (id)initWithPhotoLibrary:(id)arg1;

@end
