//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FCAssetStore : NSObject
{
    NSString *_directoryPath;
    NSString *_preferredExtension;
    NSMutableDictionary *_fileURLsByKey;
}

@property(copy, nonatomic) NSMutableDictionary *fileURLsByKey; // @synthesize fileURLsByKey=_fileURLsByKey;
@property(copy, nonatomic) NSString *preferredExtension; // @synthesize preferredExtension=_preferredExtension;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (unsigned long long)_sizeOfFileAtURL:(id)arg1;
- (id)_keyForFileName:(id)arg1;
- (id)_filePathForKey:(id)arg1;
- (id)allKeys;
- (unsigned long long)storeSize;
- (unsigned long long)sizeOfFileForKey:(id)arg1;
- (id)fileURLForKey:(id)arg1;
- (id)filePathForKey:(id)arg1;
- (_Bool)removeAllFiles;
- (_Bool)removeFileWithKey:(id)arg1;
- (id)copyData:(id)arg1 withKey:(id)arg2;
- (id)moveFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)copyFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2;

@end

