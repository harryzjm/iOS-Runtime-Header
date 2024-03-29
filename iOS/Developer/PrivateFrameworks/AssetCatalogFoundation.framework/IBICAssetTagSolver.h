//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBMutableIdentityDictionary, NSDictionary, NSSet;

@interface IBICAssetTagSolver : NSObject
{
    IBMutableIdentityDictionary *_cachedCumulativePropagatedTags;
    IBMutableIdentityDictionary *_cachedAcceptedTags;
    NSDictionary *_adornersByAndornees;
    NSSet *_solutionSpace;
}

- (void).cxx_destruct;
@property(readonly) NSSet *solutionSpace; // @synthesize solutionSpace=_solutionSpace;
- (id)cumulativeTagsPropagatedToItem:(id)arg1;
- (id)cumulativeTagsPropagatedByItem:(id)arg1;
- (id)acceptedTagsForItem:(id)arg1;
- (id)setByUnioningTags:(id)arg1 withLocalTagsFromItem:(id)arg2;
- (id)adornersForAdornee:(id)arg1;
- (id)initWithSolutionSpace:(id)arg1 error:(id *)arg2;

@end

