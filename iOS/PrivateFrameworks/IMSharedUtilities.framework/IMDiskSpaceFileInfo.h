//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDiskSpaceFileInfo : NSObject
{
    _Bool _isAttachment;
    _Bool _isPurgableOnDisk;
    _Bool _isDirectory;
    _Bool _isSticker;
    NSString *_path;
    NSString *_guid;
    struct IMFileSize _fileSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(readonly, nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(readonly, nonatomic) _Bool isPurgableOnDisk; // @synthesize isPurgableOnDisk=_isPurgableOnDisk;
@property(readonly, nonatomic) _Bool isAttachment; // @synthesize isAttachment=_isAttachment;
@property(readonly, nonatomic) struct IMFileSize fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)log;
- (id)logString;
- (void)addLogItems:(id)arg1;
- (id)initWithPath:(id)arg1 fileSize:(struct IMFileSize)arg2 isDirectory:(_Bool)arg3 isAttachment:(_Bool)arg4 isSticker:(_Bool)arg5 isPurgableOnDisk:(_Bool)arg6;

@end
