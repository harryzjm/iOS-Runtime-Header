//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>
{
    IKMutableArray *_selectors;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IKMutableArray *selectors; // @synthesize selectors=_selectors;
- (id)description;
- (unsigned long long)count;
- (id)lastSelector;
- (id)firstSelector;
- (id)selectorAtIndex:(unsigned long long)arg1;
- (void)addSelector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
