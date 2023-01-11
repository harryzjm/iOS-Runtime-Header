//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLTSUZipArchive, MDLTSUZipEntry;

@interface MDLTSUContainedZipArchive
{
    MDLTSUZipArchive *_zipArchive;
    MDLTSUZipEntry *_entry;
}

+ (id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)newArchiveReadChannel;
- (unsigned long long)archiveLength;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;
- (id)readChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;
- (id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3;

@end

