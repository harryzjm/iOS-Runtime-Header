//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCForYouCatchUpCondition : NSObject
{
    long long _contentTypes;
    CDUnknownBlockType _testBlock;
}

+ (id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(CDUnknownBlockType)arg2;
+ (id)caughtUpWithContentTypes:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(nonatomic) long long contentTypes; // @synthesize contentTypes=_contentTypes;
- (void).cxx_destruct;
- (_Bool)isSatisfiedWithCatchUpOperation:(id)arg1;

@end

