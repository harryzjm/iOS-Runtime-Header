//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, OFLRUCache, OKPresentationViewControllerProxy;

@interface OKResourceManager : NSObject
{
    OFLRUCache *_resources;
    OKPresentationViewControllerProxy *_presentationViewController;
    NSArray *_resourceLoaders;
}

- (id)resourceWithURL:(id)arg1 copy:(_Bool)arg2;
- (id)resourceLoaderForURL:(id)arg1;
- (void)dealloc;
- (id)initWithPresentationViewController:(id)arg1;

@end
