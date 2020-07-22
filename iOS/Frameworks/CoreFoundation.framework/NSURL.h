//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface NSURL : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_urlString;
    NSURL *_baseURL;
    void *_clients;
    void *_reserved;
}

+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (_Bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)__unurl;
- (void)stopAccessingSecurityScopedResource;
- (_Bool)startAccessingSecurityScopedResource;
- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id *)arg4;
@property(readonly, copy) NSURL *filePathURL;
- (id)fileReferenceURL;
- (_Bool)isFileReferenceURL;
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (_Bool)setResourceValues:(id)arg1 error:(id *)arg2;
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)resourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (_Bool)getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *absoluteString; // @dynamic absoluteString;
@property(readonly, copy) NSURL *absoluteURL; // @dynamic absoluteURL;
@property(readonly, copy) NSURL *baseURL; // @dynamic baseURL;
@property(readonly, copy) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(readonly) const char *fileSystemRepresentation; // @dynamic fileSystemRepresentation;
@property(readonly, getter=isFileURL) _Bool fileURL; // @dynamic fileURL;
@property(readonly, copy) NSString *fragment; // @dynamic fragment;
@property(readonly) _Bool hasDirectoryPath; // @dynamic hasDirectoryPath;
@property(readonly, copy) NSString *host; // @dynamic host;
@property(readonly, copy) NSString *parameterString; // @dynamic parameterString;
@property(readonly, copy) NSString *password; // @dynamic password;
@property(readonly, copy) NSString *path; // @dynamic path;
@property(readonly, copy) NSNumber *port; // @dynamic port;
@property(readonly, copy) NSString *query; // @dynamic query;
@property(readonly, copy) NSString *relativePath; // @dynamic relativePath;
@property(readonly, copy) NSString *relativeString; // @dynamic relativeString;
@property(readonly, copy) NSString *resourceSpecifier; // @dynamic resourceSpecifier;
@property(readonly, copy) NSString *scheme; // @dynamic scheme;
@property(readonly, copy) NSURL *standardizedURL; // @dynamic standardizedURL;
@property(readonly, copy) NSString *user; // @dynamic user;

@end

