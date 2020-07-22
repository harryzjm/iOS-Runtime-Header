//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface AVFileProcessor : NSObject
{
    float _percentComplete;
}

+ (id)fileProcessor;
- (id)sinfInfoFromFilePath:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;
- (id)rentalInfo:(id)arg1;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;

@end

