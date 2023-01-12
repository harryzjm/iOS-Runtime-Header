//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FPUserInfo : NSObject
{
    NSArray *_keys;
    NSArray *_values;
}

+ (id)mergeWithUserInfo:(id)arg1 intoParentUserInfo:(id)arg2;
+ (id)unzipValuesWithZippedArray:(id)arg1;
+ (id)unzipKeysWithZippedArray:(id)arg1;
+ (id)zipWithArray1:(id)arg1 array2:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSArray *values; // @synthesize values=_values;
@property(readonly) NSArray *keys; // @synthesize keys=_keys;
@property(readonly) NSDictionary *userInfo;
- (id)initWithKeys:(id)arg1 values:(id)arg2;
- (id)initWithUserInfo:(id)arg1;

@end
