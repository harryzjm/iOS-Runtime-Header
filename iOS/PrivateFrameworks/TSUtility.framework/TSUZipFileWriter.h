//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TSURandomWriteChannel;

@interface TSUZipFileWriter
{
    id <TSURandomWriteChannel> _writeChannel;
}

+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)writeChannel;
- (id)initWithURL:(id)arg1;

@end
