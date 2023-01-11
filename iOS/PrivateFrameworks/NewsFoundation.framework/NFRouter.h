//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFRouter-Protocol.h>

@class NSString;
@protocol NFResolver;

@interface NFRouter : NSObject <NFRouter>
{
    id <NFResolver> _resolver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
- (id)resolveRoutable:(id)arg1;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
