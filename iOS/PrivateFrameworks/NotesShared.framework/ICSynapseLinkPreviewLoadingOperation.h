//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SYContentItem;

@interface ICSynapseLinkPreviewLoadingOperation : NSObject
{
    SYContentItem *_synapseItem;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)linkPreviewDidFinishLoading:(id)arg1;
- (void)loadPreviewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSynapseItem:(id)arg1;

@end
