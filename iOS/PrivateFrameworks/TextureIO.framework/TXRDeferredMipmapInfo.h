//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TXRDeferredMipmapInfo : NSObject
{
    NSMutableArray *_elements;
}

@property(readonly, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (id)initWithArrayLength:(unsigned long long)arg1 cubemap:(_Bool)arg2;

@end

