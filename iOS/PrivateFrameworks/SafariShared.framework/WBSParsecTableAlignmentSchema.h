//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WBSParsecTableAlignmentSchema
{
    NSArray *_internalAlignments;
    NSArray *_columnGravities;
    NSArray *_columnsWithEqualWidths;
}

+ (id)schema;
@property(readonly, copy, nonatomic) NSArray *columnsWithEqualWidths; // @synthesize columnsWithEqualWidths=_columnsWithEqualWidths;
@property(readonly, copy, nonatomic) NSArray *columnGravities; // @synthesize columnGravities=_columnGravities;
@property(readonly, copy, nonatomic) NSArray *internalAlignments; // @synthesize internalAlignments=_internalAlignments;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
