//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSData)
+ (_Bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)data;
+ (id)_alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
- (_Bool)_providesConcreteBacking;
- (id)base64Encoding;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)_base64EncodingAsString:(_Bool)arg1 withOptions:(unsigned long long)arg2;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(CDStruct_6243051c *)arg6;
- (id)_createDispatchData;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (_Bool)isEqualToData:(id)arg1;
- (_Bool)_isCompact;
- (_Bool)_isDispatchData;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (_Bool)_allowsDirectEncoding;
- (id)replacementObjectForCoder:(id)arg1;
- (_Bool)_canReplaceWithDispatchDataForXPCCoder;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)_copyWillRetain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_asciiDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (const void *)bytes;
- (unsigned long long)length;
- (id)_compressedDataUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;
- (id)_decompressedDataUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;
- (id)compressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (void)_produceDataWithCompressionOperation:(int)arg1 algorithm:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_parseRFC822HeaderFields;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForXML;
- (_Bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long *)arg2 trailer:(CDStruct_f10e9336 *)arg3;
- (_Bool)isNSData__;
- (id)replacementObjectForPortCoder:(id)arg1;
@end

