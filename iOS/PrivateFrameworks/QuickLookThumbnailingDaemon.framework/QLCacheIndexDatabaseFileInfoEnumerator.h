//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator
{
    _Bool _extraInfo;
    _Bool _ubiquitous;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
}

- (void).cxx_destruct;
- (_Bool)nextFileWithCacheId:(unsigned long long *)arg1 versionedFileIdentifier:(id *)arg2 thumbnailCount:(unsigned int *)arg3 minSize:(float *)arg4 maxSize:(float *)arg5 totalDataLength:(unsigned long long *)arg6;
- (id)initWithSqliteDatabase:(id)arg1 toEnumerateUbiquitousFiles:(_Bool)arg2 extraInfo:(_Bool)arg3;

@end
