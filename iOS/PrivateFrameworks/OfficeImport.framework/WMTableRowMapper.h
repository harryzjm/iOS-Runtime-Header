//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper
{
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (_Bool)isTableRowDeleted:(id)arg1;
- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (double)height;
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;
- (void)setRowProperties:(id)arg1;

@end

