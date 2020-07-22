//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SDFURLUtils : NSObject
{
}

+ (_Bool)copyFileACLsFromURL:(id)arg1 toURL:(id)arg2;
+ (_Bool)existsOnDiskAtURL:(id)arg1;
+ (_Bool)isFileAtURL:(id)arg1;
+ (_Bool)isDirectoryAtURL:(id)arg1;
+ (id)dataContainingFileResourceIdentifierFromURL:(id)arg1 error:(id *)arg2;
+ (_Bool)fileResourceIdentifiersEqualAtURL:(id)arg1 andURL:(id)arg2 error:(id *)arg3;
+ (id)urlByAppendingPathComponents:(id)arg1 toURL:(id)arg2;
+ (id)urlWithRealPathOfURL:(id)arg1;
+ (id)realPathForURL:(id)arg1;

@end
