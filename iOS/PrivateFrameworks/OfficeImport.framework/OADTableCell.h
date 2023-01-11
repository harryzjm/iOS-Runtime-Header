//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADTableCellProperties, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADTableCell : NSObject
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    _Bool mHorzMerge;
    _Bool mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (id)description;
- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (_Bool)merge:(int)arg1;
- (void)setVertMerge:(_Bool)arg1;
- (_Bool)vertMerge;
- (void)setHorzMerge:(_Bool)arg1;
- (_Bool)horzMerge;
- (void)setGridSpan:(int)arg1;
- (int)gridSpan;
- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (int)spanAlongDir:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (void)dealloc;
- (id)init;

@end

