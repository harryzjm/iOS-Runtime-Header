//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (DYNSDataCompressionAdditions)
+ (id)DYStringFromCompressionAlgorithm:(unsigned long long)arg1;
+ (unsigned long long)DYCompressionAlgorithmFromString:(id)arg1;
+ (id)dy_dataWithContentsOfGzipFileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)dy_decompressData:(id)arg1 inBuffer:(void *)arg2 bufferSize:(unsigned int)arg3 error:(id *)arg4;
+ (_Bool)dy_decompressData:(id)arg1 inMutableData:(id)arg2 error:(id *)arg3;
+ (id)dy_dataByDecompressingData:(id)arg1 error:(id *)arg2;
+ (id)dy_dataByCompressingData:(id)arg1 level:(int)arg2 error:(id *)arg3;
+ (id)dy_dataByCompressingData:(id)arg1 error:(id *)arg2;
- (id)dy_decompressedDataWithAlgorithm:(unsigned long long)arg1 outputLength:(unsigned long long)arg2;
- (id)dy_compressedDataWithAlgorithm:(unsigned long long)arg1;
- (id)hexStringWithLength:(unsigned long long)arg1;
- (unsigned int)dy_crc32;
@end

