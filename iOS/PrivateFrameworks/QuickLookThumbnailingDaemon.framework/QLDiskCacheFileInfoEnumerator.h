//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLCacheIndexDatabaseFileInfoEnumerator;

__attribute__((visibility("hidden")))
@interface QLDiskCacheFileInfoEnumerator
{
    _Bool _extraInfo;
    _Bool _ubiquitous;
    QLCacheIndexDatabaseFileInfoEnumerator *_indexEnumerator;
}

- (void).cxx_destruct;
- (id)nextFileInfo;
- (id)initWithDiskCache:(id)arg1 forUbiquitousFiles:(_Bool)arg2 extraInfo:(_Bool)arg3;

@end

