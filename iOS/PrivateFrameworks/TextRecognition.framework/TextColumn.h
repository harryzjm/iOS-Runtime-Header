//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TextColumn : NSObject
{
    NSMutableArray *_mutableRows;
}

@property(retain, nonatomic) NSMutableArray *mutableRows; // @synthesize mutableRows=_mutableRows;
- (void).cxx_destruct;
- (void)sortRowsInAscendingOrder;
- (id)initWithRows:(id)arg1;
@property(readonly) unsigned long long rowCount;
@property(readonly, retain, nonatomic) NSArray *rows;
- (void)addRow:(id)arg1;
- (id)init;

@end
