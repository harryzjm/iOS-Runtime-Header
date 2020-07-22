//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

@interface HMFHTTPRequestHandler
{
    NSPredicate *_methodPredicate;
    NSPredicate *_URLPredicate;
    CDUnknownBlockType _matchBlock;
    CDUnknownBlockType _requestBlock;
}

+ (_Bool)_isValidURLPredicate:(id)arg1;
+ (_Bool)_isValidMethodPrediate:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
@property(readonly, copy, nonatomic) NSPredicate *URLPredicate; // @synthesize URLPredicate=_URLPredicate;
@property(readonly, copy, nonatomic) NSPredicate *methodPredicate; // @synthesize methodPredicate=_methodPredicate;
- (void).cxx_destruct;
- (id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

