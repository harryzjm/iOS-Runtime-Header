//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFileManager-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CNVirtualFileManager : NSObject <CNFileManager>
{
    NSMutableDictionary *_files;
    NSMutableSet *_directories;
}

+ (id)allParentFoldersOfURL:(id)arg1;
+ (id)URLByNormalizingDirectoryURL:(id)arg1;
- (void).cxx_destruct;
- (id)removeExtendedAttribute:(id)arg1 atURL:(id)arg2;
- (id)setValue:(id)arg1 forExtendedAttribute:(id)arg2 atURL:(id)arg3;
- (id)valueForExtendedAttribute:(id)arg1 atURL:(id)arg2;
- (_Bool)getValue:(id *)arg1 forExtendendAttribute:(id)arg2 url:(id)arg3 error:(id *)arg4;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3;
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3;
- (_Bool)fileExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)fileExistsAtURL:(id)arg1;
- (id)removeItemAtURL:(id)arg1;
- (id)asyncWriteData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;
- (id)observableWithContentsOfURL:(id)arg1;
- (id)asyncDataWithContentsOfURL:(id)arg1;
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;
- (id)dataWithContentsOfURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
