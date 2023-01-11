//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVFragmentMinding-Protocol.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset <AVFragmentMinding>
{
    AVFragmentedAssetInternal *_fragmentedAsset;
}

+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForAssetTracks;
- (_Bool)_mindsFragments;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end
