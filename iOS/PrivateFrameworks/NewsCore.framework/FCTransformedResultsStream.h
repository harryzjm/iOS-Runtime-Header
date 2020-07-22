//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCStreaming-Protocol.h>

@class NSString;
@protocol FCStreaming;

@interface FCTransformedResultsStream : NSObject <FCStreaming>
{
    id <FCStreaming> _stream;
    CDUnknownBlockType _asyncTransformBlock;
}

@property(copy, nonatomic) CDUnknownBlockType asyncTransformBlock; // @synthesize asyncTransformBlock=_asyncTransformBlock;
@property(retain, nonatomic) id <FCStreaming> stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithStream:(id)arg1 asyncTransformBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

