//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveEntry : NSObject
{
    struct archive_entry *_entry;
    CDUnknownBlockType _dataProvider;
}

+ (id)archiveEntriesWithTopLevelFileRepresentation:(id)arg1 usedFilenames:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) struct archive_entry *entry; // @synthesize entry=_entry;
- (void)dealloc;
- (id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(CDUnknownBlockType)arg7;
- (id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2;
- (id)initWithDirectoryName:(id)arg1;

@end

