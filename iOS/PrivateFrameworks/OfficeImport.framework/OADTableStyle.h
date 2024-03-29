//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OADTableBackground, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface OADTableStyle : NSObject
{
    NSString *mName;
    NSString *mId;
    OADTableBackground *mBackground;
    OADTablePartStyle *mWholeTableStyle;
    OADTablePartStyle *mBand1HorzStyle;
    OADTablePartStyle *mBand2HorzStyle;
    OADTablePartStyle *mBand1VertStyle;
    OADTablePartStyle *mBand2VertStyle;
    OADTablePartStyle *mFirstRowStyle;
    OADTablePartStyle *mFirstColumnStyle;
    OADTablePartStyle *mLastRowStyle;
    OADTablePartStyle *mLastColumnStyle;
    OADTablePartStyle *mNorthEastStyle;
    OADTablePartStyle *mNorthWestStyle;
    OADTablePartStyle *mSouthEastStyle;
    OADTablePartStyle *mSouthWestStyle;
}

- (void).cxx_destruct;
- (id)description;
- (void)setSouthWestStyle:(id)arg1;
- (id)southWestStyle;
- (void)setSouthEastStyle:(id)arg1;
- (id)southEastStyle;
- (void)setNorthWestStyle:(id)arg1;
- (id)northWestStyle;
- (void)setNorthEastStyle:(id)arg1;
- (id)northEastStyle;
- (void)setLastColumnStyle:(id)arg1;
- (id)lastColumnStyle;
- (void)setLastRowStyle:(id)arg1;
- (id)lastRowStyle;
- (void)setFirstColumnStyle:(id)arg1;
- (id)firstColumnStyle;
- (void)setFirstRowStyle:(id)arg1;
- (id)firstRowStyle;
- (void)setBand2VertStyle:(id)arg1;
- (id)band2VertStyle;
- (void)setBand1VertStyle:(id)arg1;
- (id)band1VertStyle;
- (void)setBand2HorzStyle:(id)arg1;
- (id)band2HorzStyle;
- (void)setBand1HorzStyle:(id)arg1;
- (id)band1HorzStyle;
- (void)setWholeTableStyle:(id)arg1;
- (id)wholeTableStyle;
- (void)setStyle:(id)arg1 forPart:(int)arg2;
- (id)partStyle:(int)arg1;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setId:(id)arg1;
- (id)id;
- (void)setName:(id)arg1;
- (id)name;

@end

