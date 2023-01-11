//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATOperation.h>

@interface CRKBlockOperation : CATOperation
{
    CDUnknownBlockType _operationBlock;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithOperationBlock:(CDUnknownBlockType)arg1;

@end
