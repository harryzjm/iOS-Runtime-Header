//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTFinalBlazarResponse : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct FinalBlazarResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_4e90fa36)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalBlazarResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalBlazarResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

