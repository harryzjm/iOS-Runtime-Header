//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CalCancellableSearch : NSObject
{
    CDUnknownBlockType _cancellationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancellationBlock; // @synthesize cancellationBlock=_cancellationBlock;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancellationBlock:(CDUnknownBlockType)arg1;

@end
