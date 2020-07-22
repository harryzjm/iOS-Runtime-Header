//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/EQKitLayoutElementaryStackRow-Protocol.h>

@class NSString;

@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow>
{
    unsigned long long mLength;
    double mThickness;
    long long mAlignmentShift;
    unsigned long long mFirstColumnIndex;
    double mFollowingSpace;
}

@property(readonly, nonatomic) double followingSpace; // @synthesize followingSpace=mFollowingSpace;
@property(readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=mLength;
@property(nonatomic) unsigned long long firstColumnIndex; // @synthesize firstColumnIndex=mFirstColumnIndex;
@property(readonly, nonatomic) long long alignmentShift; // @synthesize alignmentShift=mAlignmentShift;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager *)arg5;
@property(readonly, nonatomic) _Bool spansStack;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
