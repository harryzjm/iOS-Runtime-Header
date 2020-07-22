//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

#import <Home/NSCopying-Protocol.h>

@interface HFSimpleFormatter : NSFormatter <NSCopying>
{
    CDUnknownBlockType _formatterBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType formatterBlock; // @synthesize formatterBlock=_formatterBlock;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithFormatterBlock:(CDUnknownBlockType)arg1;

@end

