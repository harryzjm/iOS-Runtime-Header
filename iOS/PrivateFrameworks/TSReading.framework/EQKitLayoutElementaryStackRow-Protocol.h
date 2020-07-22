//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class EQKitBox;
@protocol EQKitLayoutElementaryStackRow;

@protocol EQKitLayoutElementaryStackRow <NSObject>
@property(readonly, nonatomic) double followingSpace;
@property(readonly, nonatomic) _Bool spansStack;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(nonatomic) unsigned long long firstColumnIndex;
@property(readonly, nonatomic) long long alignmentShift;
- (EQKitBox *)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id <EQKitLayoutElementaryStackRow>)arg4 layoutManager:(const struct EQKitLayoutManager *)arg5;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
@end

