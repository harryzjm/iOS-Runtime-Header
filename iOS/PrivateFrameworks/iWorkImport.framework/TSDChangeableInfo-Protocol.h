//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSDInfo-Protocol.h>

@class TSSPropertySet, TSSPropertySetChangeDetails;

@protocol TSDChangeableInfo <TSDInfo>
@property(readonly, nonatomic) _Bool isUserModifiable;
- (TSSPropertySetChangeDetails *)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;

@optional
- (void)willChangeProperties:(TSSPropertySet *)arg1;
@end

