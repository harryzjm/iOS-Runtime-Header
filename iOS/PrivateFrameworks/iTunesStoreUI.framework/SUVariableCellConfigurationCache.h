//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SUVariableCellConfigurationCache : NSObject
{
    NSMutableDictionary *_caches;
    id _cellContext;
    double _tableHeight;
}

@property(retain, nonatomic) id cellContext; // @synthesize cellContext=_cellContext;
- (void)resetLayoutCaches;
- (void)reset;
@property(readonly, nonatomic) NSArray *caches;
- (id)cacheForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithTableHeight:(double)arg1;

@end

