//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSWPShapeRepStageChunk : NSObject
{
    long long _stageIndex;
    NSArray *_storageRanges;
}

@property(retain, nonatomic) NSArray *storageRanges; // @synthesize storageRanges=_storageRanges;
@property(nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
- (id)description;
- (void)dealloc;

@end
