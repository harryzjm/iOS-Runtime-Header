//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PFLNetworkHandler;

@interface PFLNetworkResourceManager : NSObject
{
    id <PFLNetworkHandler> _networkHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PFLNetworkHandler> networkHandler; // @synthesize networkHandler=_networkHandler;
- (void)handleResultsForIdentifier:(id)arg1 results:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_saveModel:(id)arg1 fromLocation:(id)arg2;
- (void)prepareModelResourceForTask:(id)arg1 modelIdentifier:(id)arg2 fromTemporaryLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchConfigurationWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithNetworkHandler:(id)arg1;

@end
