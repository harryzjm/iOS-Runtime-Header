//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _WKWebsiteDataStoreConfiguration : NSObject
{
    struct RetainPtr<NSURL> _webStorageDirectoryURL;
    struct RetainPtr<NSURL> _indexedDBDatabaseDirectoryURL;
    struct RetainPtr<NSURL> _webSQLDatabaseDirectoryURL;
    struct RetainPtr<NSURL> _cookieStorageFileURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property(copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property(copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property(copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;

@end

