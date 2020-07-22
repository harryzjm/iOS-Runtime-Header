//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSCopying-Protocol.h>

@class NSDictionary;

@interface HFStaticItem <NSCopying>
{
    NSDictionary *_staticResults;
    CDUnknownBlockType _resultsBlock;
}

+ (id)emptyItem;
@property(copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(retain, nonatomic) NSDictionary *staticResults; // @synthesize staticResults=_staticResults;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;
- (id)initWithResults:(id)arg1;

@end
