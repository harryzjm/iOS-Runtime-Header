//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSPDirectoryPackageConverter
{
}

- (_Bool)isValid;
- (_Bool)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(_Bool)arg2 accessor:(CDUnknownBlockType)arg3;
- (_Bool)performAccessor:(CDUnknownBlockType)arg1 filePathCharacterIndex:(unsigned long long)arg2 fileURL:(id)arg3 needsReadChannel:(_Bool)arg4 zipArchive:(id)arg5 error:(id *)arg6;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1;

@end

