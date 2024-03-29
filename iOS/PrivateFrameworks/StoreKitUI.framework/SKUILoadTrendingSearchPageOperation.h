//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUILoadTrendingSearchPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSURL *_pageURL;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)main;
- (id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;

@end

