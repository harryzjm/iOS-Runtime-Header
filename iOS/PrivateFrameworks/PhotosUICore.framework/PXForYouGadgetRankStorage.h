//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadgetRankStorage-Protocol.h>

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage>
{
}

- (id)_keyForGadgetType:(unsigned long long)arg1;
- (void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;
- (long long)rankForGadgetType:(unsigned long long)arg1;
- (void)resetStoredRanks;

@end
