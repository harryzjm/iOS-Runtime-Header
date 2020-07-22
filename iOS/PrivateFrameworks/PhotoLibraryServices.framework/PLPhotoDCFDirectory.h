//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory
{
    PLPhotoDCIMDirectory *_dcimDirectory;
    struct __CFDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
    _Bool _considerInvalidFileGroups;
}

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;
@property _Bool considerInvalidFileGroups; // @synthesize considerInvalidFileGroups=_considerInvalidFileGroups;
- (void)setWriteIsPending:(_Bool)arg1;
- (void)removeFileGroup:(id)arg1;
- (id)nextAvailableVideoFileGroupWithExtension:(id)arg1;
- (id)nextAvailableFileGroup;
- (id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2;
- (id)fileGroups;
- (_Bool)isEntensionValid:(id)arg1;
- (void)ensureDirectoryExists;
- (id)fullPath;
- (_Bool)canAddVideo;
- (_Bool)canAddImage;
- (_Bool)_canAddItemWithPrefix:(id)arg1;
- (_Bool)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2;
- (_Bool)canAddFileGroupWithGroupNumber:(int)arg1;
- (unsigned int)_calculateBaseDirectoryValue;
- (id)dcimDirectory;
- (void)dealloc;
- (id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3;
- (id)_lastUsedFileGroupUserInfoKey;

@end
