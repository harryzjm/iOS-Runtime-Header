//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _HDDatabasePendingWriteRecord : NSObject
{
    CDUnknownBlockType _writeBlock;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) CDUnknownBlockType writeBlock; // @synthesize writeBlock=_writeBlock;
- (void).cxx_destruct;
- (id)initWithWriteBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
