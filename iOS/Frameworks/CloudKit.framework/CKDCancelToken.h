//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKDCancelling-Protocol.h>

@interface CKDCancelToken : NSObject <CKDCancelling>
{
    _Bool _isCancelled;
    CDUnknownBlockType _cancelAction;
}

@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isCancelled;

@end

