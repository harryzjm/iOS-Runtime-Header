//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse
{
    NSData *_statementPDFData;
    NSString *_statementDataFilename;
    NSString *_statementDataHash;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *statementDataHash; // @synthesize statementDataHash=_statementDataHash;
@property(readonly, copy, nonatomic) NSString *statementDataFilename; // @synthesize statementDataFilename=_statementDataFilename;
@property(readonly, copy, nonatomic) NSData *statementPDFData; // @synthesize statementPDFData=_statementPDFData;
- (id)initWithData:(id)arg1;

@end
