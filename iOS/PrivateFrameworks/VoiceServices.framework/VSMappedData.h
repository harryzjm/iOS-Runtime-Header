//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface VSMappedData : NSObject
{
    _Bool _shouldCleanFile;
    NSString *_filePath;
    unsigned long long _totalLength;
    void *_mmappedData;
    unsigned long long _mappedLength;
    NSMutableData *_fallbackInMemoryData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCleanFile; // @synthesize shouldCleanFile=_shouldCleanFile;
@property(retain, nonatomic) NSMutableData *fallbackInMemoryData; // @synthesize fallbackInMemoryData=_fallbackInMemoryData;
@property(nonatomic) unsigned long long mappedLength; // @synthesize mappedLength=_mappedLength;
@property(nonatomic) void *mmappedData; // @synthesize mmappedData=_mmappedData;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void *)bytesAtOffset:(unsigned long long)arg1;
- (struct _NSRange)appendData:(id)arg1;
- (void)_appendToMappedMemory:(id)arg1;
- (void)_convertToFallbackMemory;
- (void)_appendToFallbackMemory:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFilePath:(id)arg1 initialSize:(unsigned long long)arg2;

@end
