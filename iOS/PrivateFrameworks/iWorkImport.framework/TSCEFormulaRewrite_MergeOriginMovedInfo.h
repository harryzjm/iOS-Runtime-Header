//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_MergeOriginMovedInfo : NSObject
{
    unordered_map_ddbde191 _mergeOriginsMap;
    unordered_map_ddbde191 _reverseOriginsMap;
}

@property(readonly, nonatomic) const unordered_map_ddbde191 *reverseOriginsMap; // @synthesize reverseOriginsMap=_reverseOriginsMap;
@property(readonly, nonatomic) const unordered_map_ddbde191 *mergeOriginsMap; // @synthesize mergeOriginsMap=_mergeOriginsMap;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)saveToMessage:(struct MergeOriginMovedArchive *)arg1;
- (id)initFromMessage:(const struct MergeOriginMovedArchive *)arg1;
- (id)initWithMergeOriginsMap:(const unordered_map_ddbde191 *)arg1 reverseMap:(const unordered_map_ddbde191 *)arg2;

@end

