//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation
{
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}

- (void).cxx_destruct;
- (void)parseTableOfContentsOperationDidFinish:(id)arg1;
- (void)parseOFPPackageContentsOperationDidFinish:(id)arg1;
- (void)parseOPFFilePathOperationDidFinish:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;
- (id)initWithBook:(id)arg1;

@end

