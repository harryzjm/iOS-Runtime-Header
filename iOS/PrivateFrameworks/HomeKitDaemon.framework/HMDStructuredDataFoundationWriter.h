//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface HMDStructuredDataFoundationWriter
{
    id *_output;
    id _container;
    NSString *_currentKey;
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
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
- (id)error;

@end
