//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURL)
+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2;
+ (id)fileURLWithPath:(id)arg1;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)hasDirectoryPath;
- (_Bool)isFileURL;
- (id)fragment;
- (id)query;
- (id)parameterString;
- (id)path;
- (id)relativePath;
- (id)password;
- (id)user;
- (id)port;
- (id)host;
- (id)standardizedURL;
- (id)absoluteURL;
- (id)absoluteString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;
- (const char *)fileSystemRepresentation;
- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2;
- (id)initFileURLWithPath:(id)arg1;
- (id)dataRepresentation;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)init;
- (id)resourceSpecifier;
- (_Bool)_isAbsolute;
- (id)scheme;
- (id)baseURL;
- (id)relativeString;
- (void)dealloc;
- (void)_freeClients;
- (struct __CFDictionary *)_clientsCreatingIfNecessary:(_Bool)arg1;
- (struct __CFURL *)_cfurl;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (unsigned long long)_cfTypeID;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
@end
