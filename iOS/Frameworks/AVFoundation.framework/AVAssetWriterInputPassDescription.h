//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputPassDescriptionInternal, NSArray;

@interface AVAssetWriterInputPassDescription : NSObject
{
    AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property(readonly, nonatomic) NSArray *sourceTimeRanges;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimeRanges:(id)arg1;
- (id)init;

@end

