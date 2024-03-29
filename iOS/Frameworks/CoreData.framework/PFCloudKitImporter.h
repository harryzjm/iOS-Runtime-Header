//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSArray, NSCloudKitMirroringImportRequest, NSMutableArray, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporter : NSObject
{
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
    NSArray *_workItems;
    NSMutableArray *_workItemResults;
    CKServerChangeToken *_updatedDatabaseChangeToken;
    unsigned long long _totalImportedBytes;
}

- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

@end

