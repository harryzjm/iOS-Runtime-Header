//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError;

@interface WLKSettingsRequestOperation : NSOperation
{
    NSError *_error;
    NSDictionary *_response;
    CDUnknownBlockType _requestCompletionBlock;
}

+ (id)URLBagKey;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(readonly, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)_runNetworkOperationAndReturnError:(id *)arg1;
- (id)requestProperties;
- (void)main;

@end

