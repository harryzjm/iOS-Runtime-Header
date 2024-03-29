//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTCategoryData : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CategoryData *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_f5319539)addObjectToBuffer:(void *)arg1;
- (void)category_data_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)category_data_count;
- (id)category_data_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *category_data;
@property(readonly, nonatomic) NSString *category_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CategoryData *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CategoryData *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

