//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASSqliteTransaction : NSObject
{
}

+ (struct _PASDBTransactionCompletion_)writeTransactionWithHandle:(id)arg1 failableBlock:(CDUnknownBlockType)arg2;
+ (struct _PASDBTransactionCompletion_)readTransactionWithHandle:(id)arg1 failableBlock:(CDUnknownBlockType)arg2;
+ (void)writeTransactionWithHandle:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)readTransactionWithHandle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end
