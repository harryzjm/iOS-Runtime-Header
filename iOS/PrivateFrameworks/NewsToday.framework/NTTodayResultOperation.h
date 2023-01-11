//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NTPBTodayResultOperationInfo;
@protocol FCContentContext, NFCopying;

@interface NTTodayResultOperation : FCOperation
{
    id <FCContentContext> _contentContext;
    NTPBTodayResultOperationInfo *_operationInfo;
    id <NFCopying> _prefetchedContent;
    CDUnknownBlockType _headlineResultCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType headlineResultCompletionHandler; // @synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler;
@property(copy, nonatomic) id <NFCopying> prefetchedContent; // @synthesize prefetchedContent=_prefetchedContent;
@property(copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (id)init;

@end
