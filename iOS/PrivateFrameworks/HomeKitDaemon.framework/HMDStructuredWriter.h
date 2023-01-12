//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface HMDStructuredWriter
{
    NSError *_error;
}

+ (id)extendedTypeWriterWithWriter:(id)arg1 options:(unsigned long long)arg2;
+ (id)writerIntoObject:(id *)arg1 extendedTypeOptions:(unsigned long long)arg2;
+ (id)writerIntoObject:(id *)arg1;
- (void).cxx_destruct;
- (void)writeToken:(struct _HMDStructuredDataToken)arg1;
- (void)writeUUID:(id)arg1;
- (void)writeDate:(id)arg1;
- (void)writeData:(id)arg1;
- (void)writeNumber:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeBoolean:(_Bool)arg1;
- (void)writeNull;
- (void)endDictionary;
- (void)writeDictionaryKey:(id)arg1;
- (void)beginDictionaryOfSize:(unsigned long long)arg1;
- (void)endArray;
- (void)beginArrayOfSize:(unsigned long long)arg1;
- (void)failWithError:(id)arg1;
- (id)error;
- (void)writeLogicalValue:(id)arg1;

@end
