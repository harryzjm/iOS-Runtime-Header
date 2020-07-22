//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntry : NSObject
{
    id <GQZArchiveInputStream> mInput;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
}

- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;
- (struct _xmlTextReader *)xmlReader:(_Bool)arg1;
- (struct _xmlDoc *)recoverXmlDocument;
- (struct _xmlDoc *)xmlDocument;
- (id)data;
- (id)inputStream;
- (void)dealloc;
- (id)initFromCentralFileHeader:(const char *)arg1 inputStream:(id)arg2;

@end

