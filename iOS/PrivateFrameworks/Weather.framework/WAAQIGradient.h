//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface WAAQIGradient : NSObject
{
    NSMutableArray *_colors;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_colorsByIndex;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *colorsByIndex; // @synthesize colorsByIndex=_colorsByIndex;
@property(readonly, nonatomic) NSMutableIndexSet *indexes; // @synthesize indexes=_indexes;
@property(copy, nonatomic) NSMutableArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)colorForIndex:(unsigned long long)arg1;
- (void)addColor:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;

@end
