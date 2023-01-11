//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPContactDiskCache : NSObject
{
    long long _lastCreatedAt;
    NSString *_path;
}

- (void).cxx_destruct;
- (id)_cacheObjectFromFilePath:(id)arg1 error:(id *)arg2;
- (_Bool)iterNameRecordCacheWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)isEmpty;
- (id)path;
- (id)init;
- (id)initWithPath:(id)arg1;

@end
