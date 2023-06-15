//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, SUUIClientContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SUUIPersonalizeOfferOperation : NSOperation
{
    SUUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;

@end

