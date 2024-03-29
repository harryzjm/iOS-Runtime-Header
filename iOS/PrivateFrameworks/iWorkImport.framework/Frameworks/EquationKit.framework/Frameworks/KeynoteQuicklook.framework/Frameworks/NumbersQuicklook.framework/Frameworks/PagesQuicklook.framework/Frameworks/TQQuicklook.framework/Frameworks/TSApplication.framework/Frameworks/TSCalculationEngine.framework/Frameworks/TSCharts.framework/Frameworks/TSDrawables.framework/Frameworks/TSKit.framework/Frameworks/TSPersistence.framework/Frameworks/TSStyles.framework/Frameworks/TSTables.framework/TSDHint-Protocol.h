//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSTables/NSObject-Protocol.h>

@class TSKSelectionPath;
@protocol TSDHint;

@protocol TSDHint <NSObject>
+ (Class)archivedHintClass;
@property(readonly, nonatomic) id <TSDHint> lastChildHint;
@property(readonly, nonatomic) id <TSDHint> firstChildHint;
- (id <TSDHint>)copyForArchiving;
- (_Bool)overlapsWithSelectionPath:(TSKSelectionPath *)arg1;

@optional
@property(readonly, nonatomic) struct CGSize effectiveSize;
@property(readonly, nonatomic) struct CGSize maximumSize;
@property(readonly, nonatomic) _Bool isFirstHint;
@end

