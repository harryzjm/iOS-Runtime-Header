//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol EFSQLExpressable;

@interface EFSQLBitExpressionGenerator
{
    id <EFSQLExpressable> _bitExpression;
}

@property(readonly, nonatomic) id <EFSQLExpressable> bitExpression; // @synthesize bitExpression=_bitExpression;
- (void).cxx_destruct;
- (void)bitExpressionWithKeyColumn:(id)arg1;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 bitExpression:(id)arg4;

@end
