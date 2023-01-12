//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class NSURL;

@interface CKVFilesystemBase : NSObject <NSCopying>
{
    NSURL *_rootDirectory;
}

+ (id)baseURLWithTargetDirectoryPath:(id)arg1 relativeToDirectoryPath:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (unsigned long long)hash;
- (_Bool)isEqualToFileManager:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isChildOfRootDirectory:(id)arg1;
- (_Bool)removeAllContents;
- (_Bool)removeItemAtURL:(id)arg1;
- (id)getOrCreateDirectoryWithRelativePath:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithTargetDirectoryPath:(id)arg1 relativeToDirectoryPath:(id)arg2;
- (id)readDictionaryFromPlistFileWithName:(id)arg1 inDirectory:(id)arg2;
- (_Bool)writeDictionary:(id)arg1 toPlistFileWithName:(id)arg2 inDirectory:(id)arg3;
- (id)readFileWithName:(id)arg1 objectClass:(Class)arg2 inDirectory:(id)arg3;
- (_Bool)_fileExistsAtURL:(id)arg1;
- (_Bool)fileExistsWithName:(id)arg1 inDirectory:(id)arg2;
- (id)_resolveFileURLFromName:(id)arg1 directory:(id)arg2;
- (_Bool)writeObject:(id)arg1 toFileWithName:(id)arg2 inDirectory:(id)arg3;

@end
