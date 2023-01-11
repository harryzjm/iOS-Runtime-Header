//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemFactory-Protocol.h>

@class NSArray, NSString;

@interface SVPlayerItemFactory : NSObject <SVPlayerItemFactory>
{
    NSArray *_automaticallyLoadedAssetKeys;
}

@property(readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys; // @synthesize automaticallyLoadedAssetKeys=_automaticallyLoadedAssetKeys;
- (void).cxx_destruct;
- (id)createPlayerItemWithAsset:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

