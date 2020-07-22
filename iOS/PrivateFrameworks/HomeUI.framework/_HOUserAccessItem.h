//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HMUser;

@interface _HOUserAccessItem : HFItem
{
    HMUser *_user;
    CDUnknownBlockType _resultsBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUser:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;

@end
