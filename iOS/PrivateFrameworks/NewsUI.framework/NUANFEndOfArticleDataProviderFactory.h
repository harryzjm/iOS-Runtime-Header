//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUEndOfArticleDataProviderFactory-Protocol.h>

@class FCCloudContext, NSString;
@protocol NUEmailSubscribeViewControllerFactory;

@interface NUANFEndOfArticleDataProviderFactory : NSObject <NUEndOfArticleDataProviderFactory>
{
    FCCloudContext *_cloudContext;
    id <NUEmailSubscribeViewControllerFactory> _emailSubscribeViewControllerFactory;
}

@property(readonly, nonatomic) id <NUEmailSubscribeViewControllerFactory> emailSubscribeViewControllerFactory; // @synthesize emailSubscribeViewControllerFactory=_emailSubscribeViewControllerFactory;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void).cxx_destruct;
- (id)createEndOfArticleDataProviderWithArticle:(id)arg1;
- (id)initWithCloudContext:(id)arg1 emailSubscribeViewControllerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
