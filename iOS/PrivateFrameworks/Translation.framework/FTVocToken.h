//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTVocToken : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct VocToken *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_2bafd346)addObjectToBuffer:(void *)arg1;
- (void)blob:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *blob;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct VocToken *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct VocToken *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

