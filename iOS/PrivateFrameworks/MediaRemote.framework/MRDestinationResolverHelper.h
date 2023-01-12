//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRDestinationResolverDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRDestinationResolverHelper : NSObject <MRDestinationResolverDelegate>
{
    long long _level;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long level; // @synthesize level=_level;
- (void)destinationResolver:(id)arg1 didFailWithError:(id)arg2;
- (void)destinationResolver:(id)arg1 playerPathDidChange:(id)arg2;
- (void)destinationResolverDestinationDidInvalidate:(id)arg1;
- (void)destinationResolver:(id)arg1 endpointDidChange:(id)arg2;
- (void)destinationResolver:(id)arg1 originDidChange:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
