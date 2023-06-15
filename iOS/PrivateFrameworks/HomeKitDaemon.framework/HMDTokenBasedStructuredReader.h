//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDTokenBasedStructuredReader
{
    struct _HMDStructuredDataToken _token;
}

- (void).cxx_destruct;
- (struct _HMDStructuredDataToken)nextTokenAfterToken:(const struct _HMDStructuredDataToken *)arg1;
- (void)skipToken;
- (struct _HMDStructuredDataToken)readToken;
- (id)readUUID;
- (id)readDate;
- (id)readData;
- (id)readNumber;
- (id)readString;
- (_Bool)readBoolean;
- (void)readNull;
- (void)endDictionary;
- (id)readDictionaryKey;
- (unsigned long long)beginDictionary;
- (void)endArray;
- (unsigned long long)beginArray;
- (void)failWithError:(id)arg1;
- (id)error;
- (long long)tokenType;

@end

