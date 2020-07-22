//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface SCROBrailleDisplayStatus : NSObject
{
    int _virtualAlignment;
    NSData *_realData;
    NSData *_virtualData;
    NSData *_aggregatedData;
    long long _masterStatusCellIndex;
}

@property(nonatomic) long long masterStatusCellIndex; // @synthesize masterStatusCellIndex=_masterStatusCellIndex;
@property(nonatomic) int virtualAlignment; // @synthesize virtualAlignment=_virtualAlignment;
@property(retain, nonatomic) NSData *aggregatedData; // @synthesize aggregatedData=_aggregatedData;
@property(retain, nonatomic) NSData *virtualData; // @synthesize virtualData=_virtualData;
@property(retain, nonatomic) NSData *realData; // @synthesize realData=_realData;
- (void).cxx_destruct;

@end
