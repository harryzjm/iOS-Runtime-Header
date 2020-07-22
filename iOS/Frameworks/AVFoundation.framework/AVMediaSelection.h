//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying>
{
    AVMediaSelectionInternal *_mediaSelection;
}

- (_Bool)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
@property(readonly, nonatomic) __weak AVAsset *asset;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_internal;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)propertyList;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (id)_groupDictionaries;
- (id)_selectedMediaArray;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;

@end

