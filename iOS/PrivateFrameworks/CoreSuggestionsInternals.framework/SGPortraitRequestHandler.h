//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGPortraitRequestProtocol-Protocol.h>

@class PPInternalRequestHandler;

@interface SGPortraitRequestHandler : NSObject <SGPortraitRequestProtocol>
{
    PPInternalRequestHandler *_intRequestHandler;
}

- (void).cxx_destruct;
- (void)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)extractionsFromSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_extractionsFromPipelineEntity:(id)arg1 pipeline:(id *)arg2;
- (id)init;

@end
