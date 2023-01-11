//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSError, NSOperation, NSURL;

@protocol LSOpenResourceOperationDelegate <NSObject>

@optional
- (void)openResourceOperation:(NSOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)openResourceOperationDidComplete:(NSOperation *)arg1;
- (void)openResourceOperation:(NSOperation *)arg1 didFinishCopyingResource:(NSURL *)arg2;
@end

