//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPPaths : NSObject
{
}

+ (id)defaultAssetPathForNamespaceId:(unsigned int)arg1 factorName:(id)arg2;
+ (id)resourcesDirectory;
+ (id)filename:(id)arg1 logSubdirectory:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)logSubdirectory:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)logDirectoryCreateIfNeeded:(_Bool)arg1;
+ (id)filename:(id)arg1 logSubdirectory:(id)arg2;
+ (id)logSubdirectory:(id)arg1;
+ (id)logDirectory;
+ (id)filename:(id)arg1 subdirectory:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)subdirectory:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)topDirectoryCreateIfNeeded:(_Bool)arg1;
+ (id)filename:(id)arg1 subdirectory:(id)arg2;
+ (id)subdirectory:(id)arg1;
+ (id)topDirectory;

@end
