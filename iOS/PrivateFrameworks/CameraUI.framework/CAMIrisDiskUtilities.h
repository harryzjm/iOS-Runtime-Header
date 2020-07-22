//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMIrisDiskUtilities : NSObject
{
}

+ (_Bool)hasPendingWork;
+ (id)_substituteForDotInBundleIdentifier;
+ (id)_delimiterForFilenames;
+ (_Bool)isValidVideoDestinationPath:(id)arg1;
+ (_Bool)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id *)arg2 videoPersistenceUUID:(id *)arg3 captureDevice:(long long *)arg4 captureOrientation:(long long *)arg5 captureTime:(double *)arg6 persistenceOptions:(long long *)arg7 temporaryPersistenceOptions:(long long *)arg8 bundleIdentifier:(id *)arg9 filterName:(id *)arg10;
+ (id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(_Bool)arg3 bundleIdentifier:(id)arg4;
+ (id)videoPathExtension;
+ (id)irisVideoDirectoryPathCreateIfNeeded:(_Bool)arg1;
+ (id)irisVideoDirectoryPath;

@end

