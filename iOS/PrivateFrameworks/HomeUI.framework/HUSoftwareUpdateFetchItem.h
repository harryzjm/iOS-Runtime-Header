//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem
{
    HMHome *_home;
    NAFuture *_softwareUpdateFetchFuture;
}

@property(readonly, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;
- (id)init;

@end

