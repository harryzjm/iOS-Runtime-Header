//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCArchiveWriter : NSObject
{
    struct archive *_archive;
    _Bool _usesCompression;
    _Bool _flatten;
    NSString *_flattenFolderName;
    NSURL *_destinationURL;
    NSString *_basePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSString *flattenFolderName; // @synthesize flattenFolderName=_flattenFolderName;
@property(nonatomic) _Bool flatten; // @synthesize flatten=_flatten;
@property(nonatomic) _Bool usesCompression; // @synthesize usesCompression=_usesCompression;
- (_Bool)writeURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;
- (_Bool)open:(id *)arg1;
- (_Bool)finish:(id *)arg1;
- (_Bool)writeURLs:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;

@end

