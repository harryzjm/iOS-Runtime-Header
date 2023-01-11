//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/ECMutableMessageHeaders-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MFMutableMessageHeaders <ECMutableMessageHeaders>
{
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)stripInternalHeaders;
- (void)setReferences:(id)arg1;
- (void)setAddressListForReplyTo:(id)arg1;
- (void)setAddressListForBcc:(id)arg1;
- (void)setAddressListForCc:(id)arg1;
- (void)setAddressListForTo:(id)arg1;
- (void)setAddressListForSender:(id)arg1;
- (void)setAddressList:(id)arg1 forKey:(id)arg2;
- (id)encodedHeaders;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long *)arg2 decoded:(_Bool)arg3;
- (id)_copyHeaderValueForKey:(id)arg1;
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)mergeHeaders:(id)arg1;
- (void)setHeader:(id)arg1 forKey:(id)arg2;
- (void)removeHeaderForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (_Bool)hasHeaderForKey:(id)arg1;
- (id)allHeaderKeys;
- (id)headersDictionary;
- (id)mutableCopy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
