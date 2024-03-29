//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStyle, GQDTTableModel, NSString;

@interface GQDTTable
{
    GQDTTableModel *mModel;
    GQDSStyle *mStyle;
    _Bool mIsStreamed;
}

+ (const struct StateSpec *)stateForReading;
- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;
- (id)defaultVectorStyleForVectorType:(int)arg1;
- (_Bool)isStreamed;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (void)setModel:(id)arg1;
- (id)model;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

