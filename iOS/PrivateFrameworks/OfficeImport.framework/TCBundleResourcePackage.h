//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackage : NSObject
{
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}

- (id)entryWithName:(id)arg1 cacheResult:(_Bool)arg2;
- (void)dealloc;
- (id)initWithZipArchive:(id)arg1;

@end

