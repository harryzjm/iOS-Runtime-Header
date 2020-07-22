//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTTableSortRule : NSObject <NSCopying>
{
    unsigned char mColumnIndex;
    int mDirection;
}

+ (id)ruleWithColumnIndex:(unsigned char)arg1 direction:(int)arg2;
@property(readonly, nonatomic) int direction; // @synthesize direction=mDirection;
@property(readonly, nonatomic) unsigned char columnIndex; // @synthesize columnIndex=mColumnIndex;
- (id)initFromArchive:(const struct TableSortOrderArchive_SortRuleArchive *)arg1;
- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ruleByChangingDirectionTo:(int)arg1;
- (id)ruleByChangingColumnIndexTo:(unsigned char)arg1;
- (id)initWithColumnIndex:(unsigned char)arg1 direction:(int)arg2;

@end
