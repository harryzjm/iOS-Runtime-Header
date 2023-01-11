//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXImageViewFactory-Protocol.h>

@class NSString;
@protocol SXReachabilityProvider, SXResourceDataSourceProvider;

@interface SXImageViewFactory : NSObject <SXImageViewFactory>
{
    id <SXResourceDataSourceProvider> _resourceDataSourceProvider;
    id <SXReachabilityProvider> _reachabilityProvider;
}

@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) id <SXResourceDataSourceProvider> resourceDataSourceProvider; // @synthesize resourceDataSourceProvider=_resourceDataSourceProvider;
- (void).cxx_destruct;
- (id)imageViewForResource:(id)arg1;
- (id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
