//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHClusterImporterUtils : NSObject
{
}

+ (id)importerForFile:(id)arg1;
+ (_Bool)clearTemporaryDatabaseFileAtURL:(id)arg1 withError:(id *)arg2;
+ (_Bool)copyDatabaseFromURL:(id)arg1 toDatabaseDestinationURL:(id)arg2 error:(id *)arg3;
+ (id)buildTemporaryClusterURLWithError:(id *)arg1;
+ (id)cachesDirectory;

@end

