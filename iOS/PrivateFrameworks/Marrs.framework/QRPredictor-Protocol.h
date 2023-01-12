//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SIRINLUINTERNALQUERYREWRITEQRRequest, SIRINLUINTERNALQUERYREWRITEQRResponse;

@protocol QRPredictor
+ (NSString *)vocabFileName;
+ (NSString *)predictorName;
@property(copy, nonatomic) NSString *locale;
- (SIRINLUINTERNALQUERYREWRITEQRResponse *)predictWithInput:(SIRINLUINTERNALQUERYREWRITEQRRequest *)arg1 status:(id *)arg2;
- (id)initWithLocale:(NSString *)arg1 FilesPath:(NSString *)arg2 status:(id *)arg3;
- (id)init;
@end
