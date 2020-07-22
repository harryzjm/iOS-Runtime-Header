//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation
{
    _Bool _parseImage;
    CRKBook *_book;
    NSString *_filePath;
}

@property(readonly, nonatomic) _Bool parseImage; // @synthesize parseImage=_parseImage;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) CRKBook *book; // @synthesize book=_book;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(_Bool)arg3;

@end
