//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSObject, NSString, SKUIMediaSocialAuthor;
@protocol OS_dispatch_queue;

@interface MSCLFacebookPageUpdateOperation : SSVComplexOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_pageIdentifier;
    SKUIMediaSocialAuthor *_author;
    CDUnknownBlockType _outputBlock;
}

@property(copy, nonatomic) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, copy, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPageIdentifier:(id)arg1 forAuthor:(id)arg2;

@end

