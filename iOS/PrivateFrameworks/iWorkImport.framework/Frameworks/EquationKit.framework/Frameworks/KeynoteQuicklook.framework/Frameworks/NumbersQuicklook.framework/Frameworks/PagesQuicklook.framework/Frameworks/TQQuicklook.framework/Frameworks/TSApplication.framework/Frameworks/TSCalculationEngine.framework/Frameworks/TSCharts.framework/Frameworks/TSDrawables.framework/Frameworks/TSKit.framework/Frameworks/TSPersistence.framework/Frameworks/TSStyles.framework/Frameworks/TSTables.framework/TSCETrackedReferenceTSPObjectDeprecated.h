//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject
{
    struct TSCEASTNodeArray *mAST;
    CDStruct_8dbd2315 mFormulaID;
}

- (void)encodeToArchive:(void *)arg1;
- (void)saveToArchiver:(id)arg1;
- (CDStruct_8dbd2315)formulaID;
- (struct TSCEASTNodeArray *)ast;
- (void)dealloc;
- (_Bool)validatedLoadFromUnarchiver:(id)arg1;

@end

