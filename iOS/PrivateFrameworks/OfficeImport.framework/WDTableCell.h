//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject
{
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    _Bool mUseTrackedProperties;
    WDTableRow *mRow;
}

- (void).cxx_destruct;
@property(readonly) __weak WDTableRow *row; // @synthesize row=mRow;
- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)text;
- (void)clearProperties;
- (id)properties;
- (long long)compareIndex:(id)arg1;
- (unsigned long long)index;
- (void)setUseTrackedProperties:(_Bool)arg1;
- (_Bool)useTrackedProperties;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;

@end

