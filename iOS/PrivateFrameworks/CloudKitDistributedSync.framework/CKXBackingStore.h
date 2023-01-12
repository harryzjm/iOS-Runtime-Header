//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/CKXReaderProtocol-Protocol.h>
#import <CloudKitDistributedSync/CKXWriterProtocol-Protocol.h>

@class CKXProxyBase, CKXProxyCache, CKXVersionedReaderWriterStore, NSData;
@protocol CKXBinding, CKXReadStructProxy, CKXWriteStructProxy;

@interface CKXBackingStore : NSObject <CKXReaderProtocol, CKXWriterProtocol>
{
    CDStruct_9545ae89 _header;
    NSData *_data;
    NSObject<CKXBinding> *_binding;
    CKXVersionedReaderWriterStore *_readerWriterStore;
    CKXProxyCache *_proxyCache;
    unsigned long long _cacheScope;
    CKXProxyBase<CKXReadStructProxy> *_topLevelReadProxy;
    CKXProxyBase<CKXWriteStructProxy> *_topLevelWriteProxy;
}

+ (id)data:(id)arg1 withHeaderForVersion:(unsigned char)arg2;
+ (id)createHeaderDataForFormatVersion:(unsigned char)arg1;
+ (id)dataWithoutHeader:(id)arg1;
+ (CDStruct_9545ae89)headerForData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_9545ae89 header; // @synthesize header=_header;
@property(retain, nonatomic) CKXProxyBase<CKXWriteStructProxy> *topLevelWriteProxy; // @synthesize topLevelWriteProxy=_topLevelWriteProxy;
@property(retain, nonatomic) CKXProxyBase<CKXReadStructProxy> *topLevelReadProxy; // @synthesize topLevelReadProxy=_topLevelReadProxy;
@property(nonatomic) unsigned long long cacheScope; // @synthesize cacheScope=_cacheScope;
@property(retain, nonatomic) CKXProxyCache *proxyCache; // @synthesize proxyCache=_proxyCache;
@property(retain, nonatomic) CKXVersionedReaderWriterStore *readerWriterStore; // @synthesize readerWriterStore=_readerWriterStore;
@property(retain, nonatomic) NSObject<CKXBinding> *binding; // @synthesize binding=_binding;
- (id)flush;
- (void)commitStruct:(CDStruct_08de4b04)arg1;
- (void)setData:(void *)arg1 withLength:(unsigned long long)arg2 forList:(CDStruct_2d6ed345)arg3;
- (void)setData:(void *)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(CDStruct_08de4b04)arg4;
- (CDStruct_08de4b04)beginAppendedListStructInList:(CDStruct_2d6ed345)arg1;
- (CDStruct_2d6ed345)beginReferencedListForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_08de4b04)beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_08de4b04)beginRootStructWithType:(unsigned long long)arg1;
- (void)copyData:(void *)arg1 forList:(CDStruct_2d6ed345)arg2;
- (void)copyData:(void *)arg1 forField:(unsigned long long)arg2 inStruct:(CDStruct_08de4b04)arg3;
- (CDStruct_08de4b04)referencedStructAtIndex:(long long)arg1 inList:(CDStruct_2d6ed345)arg2;
- (long long)lengthForList:(CDStruct_2d6ed345)arg1;
- (_Bool)referenceIsNull:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_2d6ed345)referencedListForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_08de4b04)referencedStructForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_08de4b04)rootStructWithType:(unsigned long long)arg1;
- (_Bool)setData:(id)arg1 error:(id *)arg2;
- (id)writerForProxy:(id)arg1;
- (id)readerForProxy:(id)arg1;
- (void)proxyScope:(CDUnknownBlockType)arg1;
- (id)proxyWithListInstance:(CDStruct_2d6ed345)arg1 mutable:(_Bool)arg2 cacheScope:(long long)arg3;
- (id)proxyForStructToken:(unsigned long long)arg1 withCKXStructInstance:(CDStruct_08de4b04)arg2 mutable:(_Bool)arg3 cacheScope:(long long)arg4;
- (id)structProxyForListInstance:(CDStruct_2d6ed345)arg1 atIndex:(long long)arg2;
- (id)appendedStructProxyForListInstance:(CDStruct_2d6ed345)arg1;
- (id)structListProxyForListReference:(unsigned long long)arg1 inCKXStructInstance:(CDStruct_08de4b04)arg2 mutable:(_Bool)arg3;
- (id)structProxyForStructReference:(unsigned long long)arg1 inCKXStructInstance:(CDStruct_08de4b04)arg2 mutable:(_Bool)arg3;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)finishWriting;
- (void)writeUsingBlock:(CDUnknownBlockType)arg1;
- (void)readUsingBlock:(CDUnknownBlockType)arg1;
- (id)writer;
- (id)reader;
- (CDStruct_047e7f36)writerIdentity;
@property(readonly, nonatomic) unsigned char formatVersion;
- (id)schema;
@property(readonly, nonatomic) _Bool isWriting;
- (_Bool)_setupBackingStoreForReadingWithError:(id *)arg1;
- (id)initWithBinding:(id)arg1 data:(id)arg2 formatVersion:(unsigned char)arg3 optionsByReaderWriterClass:(id)arg4 error:(id *)arg5;
- (id)initWriterWithBinding:(id)arg1 version:(unsigned char)arg2;
- (id)initWithBinding:(id)arg1 formatVersion:(unsigned char)arg2 writerBlock:(CDUnknownBlockType)arg3;
- (id)initWithBinding:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end
